#include "stdafx.h"
#include "CppUnitTest.h"
#include "../quick_sort/QuickSort.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace quick_sort_test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(partition_test_1)
		{
			QuickSort qc;

			std::vector<int> input = { 9, 7, 5, 11, 12, 2, 14, 3, 10, 4, 6 };
			std::vector<int> output = { 5, 2, 3, 4, 6, 7, 14, 9, 10, 11, 12 };

			int q = 4;

			Assert::AreEqual(q, qc.partition(input, 0, input.size() - 1));

			for (int i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}
		}

		TEST_METHOD(partition_test_2)
		{
			QuickSort qc;

			std::vector<int> input = { 9, 7, 5, 11, 12, 2, 14, 3, 10, 5, 6 };
			std::vector<int> output = { 5, 2, 3, 5, 6, 7, 14, 9, 10, 11, 12 };

			int q = 4;

			Assert::AreEqual(q, qc.partition(input, 0, input.size() - 1));

			for (int i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}
		}
	};
}