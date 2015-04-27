#include "stdafx.h"
#include "CppUnitTest.h"
#include "../recursion/Palindrome.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace recursion_test
{		
	TEST_CLASS(PalindromeTest)
	{
	public:
		
		TEST_METHOD(first_character_1)
		{
			Palindrome p;
			std::string input = "adasdasd";
			char expected_char = 'a';

			Assert::AreEqual(expected_char, p.first_character(input));
		}

		TEST_METHOD(first_character_2)
		{
			Palindrome p;
			std::string input = "dasdasd";
			char expected_char = 'a';

			Assert::AreNotEqual(expected_char, p.first_character(input));
		}

		TEST_METHOD(first_character_3)
		{
			Palindrome p;
			std::string input = "d9";
			char expected_char = 'd';

			Assert::AreEqual(expected_char, p.first_character(input));
		}

		TEST_METHOD(last_character_1)
		{
			Palindrome p;
			std::string input = "d9";
			char expected_char = '9';

			Assert::AreEqual(expected_char, p.last_character(input));
		}

		TEST_METHOD(last_character_2)
		{
			Palindrome p;
			std::string input = "d9sdfsdf";
			char expected_char = 'f';

			Assert::AreEqual(expected_char, p.last_character(input));
		}

		TEST_METHOD(last_character_3)
		{
			Palindrome p;
			std::string input = "dsfsd";
			char expected_char = 'u';

			Assert::AreNotEqual(expected_char, p.last_character(input));
		}

	};
}