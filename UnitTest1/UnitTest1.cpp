#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 3.3 A/VectorN.h"
#include "..//OOP Lab 3.3 A/VectorN.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			VectorN vector;
			vector.setSize(3);
			Assert::AreEqual(3, vector.getSize());
		}
	};
}
