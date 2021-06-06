#include "pch.h"
#include "CppUnitTest.h"
#include "../Serie de Taylor para la Secante/SerieSec.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestSeriedeTaylor
{
	TEST_CLASS(UnitTestSeriedeTaylor)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			//Arrange

			int par = 6;
			int resultado_Esperado_Par = 1;
			int factorial = 5;
			int resultado_Esperado_Factorial = 120;
			double sec = 1;
			int i = 1;
			int rec = 1;
			float resultado_Esperado_Serie = -0.5;
			SerieSec serie ;

			//Act 

			int f = serie.factorial(factorial);
			float s = serie.serie(sec, i, rec);
			int se = serie.value(par);

			//Assert

			Assert::AreEqual(f, resultado_Esperado_Factorial);
			Assert::AreEqual(s, resultado_Esperado_Serie);
			Assert::AreEqual(se, resultado_Esperado_Par);


		}
	};
}
