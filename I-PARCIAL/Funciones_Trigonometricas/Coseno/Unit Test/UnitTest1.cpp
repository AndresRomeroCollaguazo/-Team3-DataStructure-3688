#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>



using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			int n = 5;
			double x;
			cout << "Ingrese el valor de x de la funcion cos(x) -> ";
			cin >> x;
			Datum d1(x);
			Operation op;
			cout << "El resultado de coseno de x es -> ";
			cout << op.coseno(d1, n) << endl;

		}
	};
}
