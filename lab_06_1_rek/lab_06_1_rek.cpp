#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_06_1(rek)/Lab_06_1(rek).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab061rek
{
	TEST_CLASS(lab061rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int suma=0;
			int a[]={2,6,8,21,9};
			int S = Sum(a, 5, 0, suma);
			Assert::AreEqual(S, 16);

		}
	};
}
