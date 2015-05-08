#include "stdafx.h"
#include "CppUnitTest.h"
#include <math.h>
#include "../merge_sort/MergeSort.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace merge_sort_test
{		
	TEST_CLASS(MergeSortTest)
	{
	public:
		
		TEST_METHOD(merge_test_1)
		{
			std::vector<int> input = { 3, 7, 12, 14, 2, 6, 9, 11 };
			std::vector<int> expected_output = { 2, 3, 6, 7, 9, 11, 12, 14 };

			auto mid = floor((0 + input.size() - 1) / 2);

			MergeSort m;
			m.merge(input, 0, mid, input.size() - 1);

			for (auto i = 0; i < 2; ++i)
			{
				Assert::AreEqual(input[i], expected_output[i]);
			}
		}

		TEST_METHOD(merge_test_2)
		{
			std::vector<int> input = { 3, 7, 12, 14, 2, 6, 9, 10 };
			std::vector<int> expected_output = { 2, 3, 6, 7, 9, 10, 12, 14 };

			auto mid = floor((0 + input.size() - 1) / 2);

			MergeSort m;
			m.merge(input, 0, mid, input.size() - 1);

			for (auto i = 0; i < 2; ++i)
			{
				Assert::AreEqual(input[i], expected_output[i]);
			}
		}

		TEST_METHOD(merge_test_3)
		{
			std::vector<int> input = { -3, 7, 12, 14, 2, 6, 9, 10 };
			std::vector<int> expected_output = { -3, 2, 6, 7, 9, 10, 12, 14 };

			auto mid = floor((0 + input.size() - 1) / 2);

			MergeSort m;
			m.merge(input, 0, mid, input.size() - 1);

			for (auto i = 0; i < 2; ++i)
			{
				Assert::AreEqual(input[i], expected_output[i]);
			}
		}

		TEST_METHOD(merge_test_4)
		{
			std::vector<int> input = { 10, 3 };
			std::vector<int> expected_output = { 3, 10 };

			auto mid = floor((0 + input.size() - 1) / 2);

			MergeSort m;
			m.merge(input, 0, mid, input.size() - 1);

			for (auto i = 0; i < 2; ++i)
			{
				Assert::AreEqual(input[i], expected_output[i]);
			}
		}

		TEST_METHOD(merge_test_5)
		{
			std::vector<int> input = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 1000000000 };
			std::vector<int> expected_output = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 1000000000 };

			auto mid = floor((0 + input.size() - 1) / 2);

			MergeSort m;
			m.merge(input, 0, mid, input.size() - 1);

			for (auto i = 0; i < 2; ++i)
			{
				Assert::AreEqual(input[i], expected_output[i]);
			}
		}
	};
}