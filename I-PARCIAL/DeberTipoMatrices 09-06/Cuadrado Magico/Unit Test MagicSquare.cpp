#include "pch.h"
#include "CppUnitTest.h"
#include "../Cubo Magico/MagicSquare.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestMagicSquare
{
	TEST_CLASS(UnitTestMagicSquare)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			MagicSquare ms1;
			ms1.calculateSquareMagic();
		}
	};
}
