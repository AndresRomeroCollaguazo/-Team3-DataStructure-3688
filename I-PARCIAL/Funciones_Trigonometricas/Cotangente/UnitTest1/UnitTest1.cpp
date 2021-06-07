#include "pch.h"
#include "CppUnitTest.h"
#include "../CotangenteRecursividad/Datum.h"
#include "../CotangenteRecursividad/Operation.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			int n = 5;
			double x = 2;
			double resultado = 0.00634933;

			Datum d1(x);
			Operation op;

			double c = op.cotangente(op, d1, n);

			Assert::AreEqual(c,resultado);
			
		}
	};
}
