#include "stdafx.h"
#include "CppUnitTest.h"
#include "../selection_sort/Sorter.h"
#include <list>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace selection_sort_ut
{
	TEST_CLASS(SorterTest)
	{
	public:
		
		TEST_METHOD(index_of_minimum_test_1)
		{
			Sorter s;
			std::vector<int> unsorted_list{ 18, 8, 66, 44, 19, 2, 14 };

			int x = s.index_of_minimum(unsorted_list, 3);
			
			Assert::AreEqual(5, x);
		}

		TEST_METHOD(index_of_minimum_test_2)
		{
			Sorter s;
			std::vector<int> unsorted_list{ 18, 6, 66, 44, 9, 22, 14 };

			int x = s.index_of_minimum(unsorted_list, 2);

			Assert::AreEqual(4, x);
		}

		TEST_METHOD(index_of_minimum_test_3)
		{
			Sorter s;
			std::vector<int> unsorted_list{ 18, 8, 66, 4, 19, 32, 14 };

			int x = s.index_of_minimum(unsorted_list, 0);

			Assert::AreEqual(3, x);
		}

	};
}