#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_oop_7.1\main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(search_min({ 3, 10, 5 }), 10);
		}
	};
}
