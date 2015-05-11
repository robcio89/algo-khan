#include "stdafx.h"
#include "CppUnitTest.h"
#include "../quick_sort/QuickSort.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace quick_sort_test
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(quick_sort_test_1)
		{
			QuickSort qc;

			std::vector<int> input = { 9, 7, 5, 11, 12, 2, 14, 3, 10, 6 };
			std::vector<int> output = { 2, 3, 5, 6, 7, 9, 10, 11, 12, 14 };

			qc.sort(input, 0, input.size() - 1);

			for (int i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}
		}

		TEST_METHOD(quick_sort_test_2)
		{
			QuickSort qc;

			std::vector<int> input = { 9, 7, 5, 11, 12, 2, 14, 3, 10, -3, 6 };
			std::vector<int> output = { -3, 2, 3, 5, 6, 7, 9, 10, 11, 12, 14 };

			qc.sort(input, 0, input.size() - 1);

			for (int i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}
		}
	};
}