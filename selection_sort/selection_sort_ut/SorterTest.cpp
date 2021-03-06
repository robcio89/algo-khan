#include "stdafx.h"
#include "CppUnitTest.h"
#include "../selection_sort/Sorter.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace selection_sort_ut
{
	TEST_CLASS(SorterTest)
	{
	public:
		
		TEST_METHOD(index_of_minimum_test_1)
		{
			Sorter s;
			std::vector<int> unsorted{ 18, 8, 66, 44, 19, 2, 14 };

			int x = s.index_of_minimum(unsorted, 3);
			
			Assert::AreEqual(5, x);
		}

		TEST_METHOD(index_of_minimum_test_2)
		{
			Sorter s;
			std::vector<int> unsorted{ 18, 6, 66, 44, 9, 22, 14 };

			int x = s.index_of_minimum(unsorted, 2);

			Assert::AreEqual(4, x);
		}

		TEST_METHOD(index_of_minimum_test_3)
		{
			Sorter s;
			std::vector<int> unsorted{ 18, 8, 66, 4, 19, 32, 14 };

			int x = s.index_of_minimum(unsorted, 0);

			Assert::AreEqual(3, x);
		}

		TEST_METHOD(swap_test_1)
		{
			Sorter s;
			std::vector<int> input{ 7, 9, 4 };
			std::vector<int> output{ 9, 7, 4 };

			s.swap(input, 0, 1);

			for (auto i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}		
		}

		TEST_METHOD(swap_test_2)
		{
			Sorter s;
			std::vector<int> input{ 11, 13, 18 };
			std::vector<int> output{ 18, 13, 11 };

			s.swap(input, 0, 2);

			for (auto i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}
		}

		TEST_METHOD(swap_test_3)
		{
			Sorter s;
			std::vector<int> input{ 15, 10, 13 };
			std::vector<int> output{ 15, 13, 10 };

			s.swap(input, 1, 2);

			for (auto i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}
		}

		TEST_METHOD(sort_test_1)
		{
			Sorter s;
			std::vector<int> input{ 22, 11, 99, 88, 9, 7, 42 };
			std::vector<int> output{ 7, 9, 11, 22, 42, 88, 99 };

			s.sort(input);

			for (auto i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}
		}

		TEST_METHOD(sort_test_2)
		{
			Sorter s;
			std::vector<int> input{ 21, 11, 199, 88, 9, 3, 42 };
			std::vector<int> output{ 3, 9, 11, 21, 42, 88, 199 };

			s.sort(input);

			for (auto i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}
		}
	};
}