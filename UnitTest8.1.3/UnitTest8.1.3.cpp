#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest813
{
	TEST_CLASS(UnitTest813)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101] = "abcvabc";
			int k = Count(str);
			Assert::AreEqual(k, 2);
		}
	};
}
