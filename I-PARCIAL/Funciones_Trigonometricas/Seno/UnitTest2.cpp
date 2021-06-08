#include "pch.h"
#include "CppUnitTest.h"
#include "../SenoRecursividad/Datum.h"
#include "../SenoRecursividad/Operation.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{

	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 5;
			double x = 45;
			double resultado = 0.85;
			Datum dat(x);
			Operation op;
			double c=op.seno(dat, n);
			
			Assert::AreEqual(c, resultado);
		}
	};
}
