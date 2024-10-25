#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1.rek/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestCount)
		{
			char str[] = "abc,-abc,-!";
			int expected = 2; 
			int result = Count(str, 0);
			Assert::AreEqual(expected, result);
		}
	};
}
