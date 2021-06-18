#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int* vector = new int[10], i = 0, n, a1, a2, a3, a4;
			cout << "CUADRADO LATINO\n";
			cout << "Introduzca cantidad elementos: ";
			cin >> n;
			cout << "Ingrese los elementos (distintos): \n";
			for (i = 0; i < n; i++) {
				cin >> *(vector + i);
			}
			Datum d(vector);
			Fuction f;

			a1 = 0;
			a2 = n - 1;
			a3 = n;
			a4 = n - 1;
			i = f.cube(d.getVector(), a1, a2, a3, a4);
		}
	};
}
