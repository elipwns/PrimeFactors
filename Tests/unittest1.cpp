//#include "stdafx.h"
#include "CppUnitTest.h"
#include <vector>
#include "../PrimeFactors/PrimeFactors.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test1)
		{
			// TODO: Your test code here
			if (PrimeFactors(1).empty())
				Assert::IsTrue;
		}
		TEST_METHOD(Test2)
		{
			vector<int> factors = PrimeFactors(2);
			Assert::AreEqual(2, factors[0]);
			Assert::AreEqual(1, static_cast<int>(factors.size()));
		}
		TEST_METHOD(Test3)
		{
			vector<int> factors = PrimeFactors(3);
			Assert::AreEqual(3, factors[0]);
			Assert::AreEqual(1, static_cast<int>(factors.size()));
		}
		TEST_METHOD(Test4)
		{
			vector<int> factors = PrimeFactors(4);
			Assert::AreEqual(2, factors[0]);
			Assert::AreEqual(2, factors[1]);
			Assert::AreEqual(2, static_cast<int>(factors.size()));
		}
		TEST_METHOD(Test5)
		{
			vector<int> factors = PrimeFactors(5);
			Assert::AreEqual(5, factors[0]);
			Assert::AreEqual(1, static_cast<int>(factors.size()));
		}
		TEST_METHOD(Test6)
		{
			vector<int> factors = PrimeFactors(6);
			Assert::AreEqual(2, factors[0]);
			Assert::AreEqual(3, factors[1]);
			Assert::AreEqual(2, static_cast<int>(factors.size()));
		}
		TEST_METHOD(Test7)
		{
			vector<int> factors = PrimeFactors(7);
			Assert::AreEqual(7, factors[0]);
			Assert::AreEqual(1, static_cast<int>(factors.size()));
		}
		TEST_METHOD(Test8)
		{
			vector<int> factors = PrimeFactors(8);
			Assert::AreEqual(2, factors[0]);
			Assert::AreEqual(2, factors[1]);
			Assert::AreEqual(2, factors[2]);
			Assert::AreEqual(3, static_cast<int>(factors.size()));
		}
		TEST_METHOD(Test9)
		{
			vector<int> factors = PrimeFactors(9);
			Assert::AreEqual(3, factors[0]);
			Assert::AreEqual(3, factors[1]);
			Assert::AreEqual(2, static_cast<int>(factors.size()));
		}
		TEST_METHOD(TestBigNumber)
		{
			vector<int> factors = PrimeFactors(2 * 2 * 3 * 5 * 7 * 7 * 11);
			Assert::AreEqual(2, factors[0]);
			Assert::AreEqual(2, factors[1]);
			Assert::AreEqual(3, factors[2]);
			Assert::AreEqual(5, factors[3]);
			Assert::AreEqual(7, factors[4]);
			Assert::AreEqual(7, factors[5]);
			Assert::AreEqual(11, factors[6]);
			Assert::AreEqual(7, static_cast<int>(factors.size()));
		}
	};
}