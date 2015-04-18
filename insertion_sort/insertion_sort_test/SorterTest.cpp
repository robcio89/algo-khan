#include "stdafx.h"
#include "CppUnitTest.h"
#include "../insertion_sort/Sorter.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace insertion_sort_test
{
	TEST_CLASS(SorterTest)
	{
	public:
		
		TEST_METHOD(insert_test_1)
		{
			Sorter s;
			std::vector<int> input { 3, 5, 7, 11, 13, 2, 9, 6 };
			std::vector<int> output { 2, 3, 5, 7, 11, 13, 9, 6 };

			s.insert(input, 4, 2);

			for (auto i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}
		}

		TEST_METHOD(insert_test_2)
		{
			Sorter s;
			std::vector<int> input{ 2, 3, 5, 7, 11, 13, 9, 6 };
			std::vector<int> output{ 2, 3, 5, 7, 9, 11, 13, 6 };

			s.insert(input, 5, 9);

			for (auto i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}
		}

		TEST_METHOD(insert_test_3)
		{
			Sorter s;
			std::vector<int> input{ 2, 3, 5, 7, 9, 11, 13, 6 };
			std::vector<int> output{ 2, 3, 5, 6, 7, 9, 11, 13 };

			s.insert(input, 6, 6);

			for (auto i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}
		}

		TEST_METHOD(insertion_sort_test_1)
		{
			Sorter s;
			std::vector<int> input{ 22, 11, 99, 88, 9, 7, 42 };
			std::vector<int> output{ 7, 9, 11, 22, 42, 88, 99 };

			s.insertion_sort(input);

			for (auto i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}
		}

		TEST_METHOD(insertion_sort_test_2)
		{
			Sorter s;
			std::vector<int> input{ 92, 11, 99, 88, 9, 7, 42 };
			std::vector<int> output{ 7, 9, 11, 42, 88, 92, 99 };

			s.insertion_sort(input);

			for (auto i = 0; i < input.size(); ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}
		}

	};
}