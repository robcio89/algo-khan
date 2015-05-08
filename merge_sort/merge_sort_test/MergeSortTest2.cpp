#include "stdafx.h"
#include "CppUnitTest.h"
#include <math.h>
#include "../merge_sort/MergeSort.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace merge_sort_test
{
	TEST_CLASS(MergeSortTest2)
	{
	public:

		TEST_METHOD(merge_sort_test_1)
		{
			std::vector<int> input = { 14, 7, 3, 12, 9, 11, 6, 2 };
			std::vector<int> expected_output = { 2, 3, 6, 7, 9, 11, 12, 14 };

			MergeSort m;
			m.merge_sort(input, 0, input.size() - 1);

			for (auto i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], expected_output[i]);
			}
		}

		TEST_METHOD(merge_sort_test_2)
		{
			std::vector<int> input = { 34, 7, 3, 12, 9, 11, 6, 0 };
			std::vector<int> expected_output = { 0, 3, 6, 7, 9, 11, 12, 34 };

			MergeSort m;
			m.merge_sort(input, 0, input.size() - 1);

			for (auto i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], expected_output[i]);
			}
		}

		TEST_METHOD(merge_sort_test_3)
		{
			std::vector<int> input = { 34, 7 };
			std::vector<int> expected_output = { 7, 34 };

			MergeSort m;
			m.merge_sort(input, 0, input.size() - 1);

			for (auto i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], expected_output[i]);
			}
		}

		TEST_METHOD(merge_sort_test_4)
		{
			std::vector<int> input = { 34, 7, 3, 12, 9, 11, 6, -3 };
			std::vector<int> expected_output = { -3, 3, 6, 7, 9, 11, 12, 34 };

			MergeSort m;
			m.merge_sort(input, 0, input.size() - 1);

			for (auto i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], expected_output[i]);
			}
		}

	};
}