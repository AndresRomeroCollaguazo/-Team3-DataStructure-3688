#include "pch.h"
#include "CppUnitTest.h"
#include "../Validate.h"
#include <iostream>
#include "../Vector.cpp"
#include "../Operations.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char cad[10];
			int valor, i;
			Validate v;
			int vector[10];
			std::cout << "                     INGRESE 10 DATOS PARA LLENAR SU VECTOR (SOLO NUMEROS)" << std::endl;
			for (i = 0; i < 10; i++)
			{
				strcpy(cad, v.ingresar("\nIngrese el valor entero ->"));
				valor = atoi(cad);
				vector[i] = valor;
			}
			Vector v1(vector);
			Operations op;

			std::cout << "\n\nVector original " << std::endl;
			op.print(v1);
			op.get_into(v1);
			op.print(v1);

			std::cout << op.process(v1);

			op.wax(v1);
			op.print(v1);
		}
	};
}
