#include "pch.h"
#include "CppUnitTest.h"
#include "../MagicSquare.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			MagicSquare ms1;
			ms1.calculateSquareMagic();
		}
	};
}
