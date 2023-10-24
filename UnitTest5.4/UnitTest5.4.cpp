#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.4/project5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = S1(2, 3,2);
			Assert::AreEqual(t, 0);

		}
	};
}
