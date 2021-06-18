#include "pch.h"
#include "CppUnitTest.h"
#include "../Fuctions.h"
#include <iostream>
#include "../Validate.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int row1, column1, row2, column2;


            char cad[10];
            char cad1[10];
            char cad2[10];
            char cad3[10];
            std::cout << "                        PROGRAMA DE MULTIPLICACION DE MATRICES N*N" << std::endl;
            Fuctions funcion;
            Validate v;
            strcpy(cad, v.ingresar("\nIngrese el numero de filas de la primera matriz -> "));
            row1 = atoi(cad);
            strcpy(cad1, v.ingresar("\nIngrese el numero de columnas de la primera matriz -> "));
            column1 = atoi(cad1);
            strcpy(cad2, v.ingresar("\nIngrese el numero de filas de la segunda matriz -> "));
            row2 = atoi(cad2);
            strcpy(cad3, v.ingresar("\nIngrese el numero de columnas de la segunda matriz -> "));
            column2 = atoi(cad3);



            int** m1 = new int* [row1];
            for (int i = 0; i < row1; i++) {
                m1[i] = new int[column1];
            }

            funcion.verify(column1, row2);

            std::cout << "\nPRIMERA MATRIZ" << std::endl;

            funcion.fill_Matrix(row1, column1, m1);


            int** m2 = new int* [row2];
            for (int l = 0; l < row2; l++) {
                m2[l] = new int[column2];
            }

            std::cout << "\nSEGUNDA MATRIZ" << std::endl;

            funcion.fill_Matrix(row2, column2, m2);


            Matrix _matriz(m1, row1, column1);
            Matrix _matriz2(m2, row2, column2);

            int** m3 = new int* [row1];
            for (int r = 0; r < row1; r++) {
                m3[r] = new int[column2];
            }

            m3 = funcion.multiplication(_matriz, _matriz2, row1, column1, column2);

            Matrix _matriz3(m3, row1, column2);

            std::cout << "\nRESULTADO DEL PRODUCTO" << std::endl;

            funcion.print(_matriz3, row1, column2);
		}
	};
}
