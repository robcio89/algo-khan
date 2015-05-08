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

			int mid = (0 + input.size() - 1) / 2;

			MergeSort m;
			m.merge(input, 0, mid, input.size() - 1);

			/*for (auto i = 0; i < 2; ++i)
			{
				Assert::AreEqual(input[i], expected_output[i]);
			}*/
		}

	};
}