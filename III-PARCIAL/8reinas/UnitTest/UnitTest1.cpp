#include "pch.h"
#include "CppUnitTest.h"
#include "../Ingreso.h"
#include "../Reinas.h"
#include <iostream>

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int* reinas;
            int nreinas;
            int i;
            Ingreso in;

            nreinas = in.ingreso();

            reinas = new int[nreinas];
            for (i = 0; i < nreinas; i++) {
                *(reinas + i) = -1;
            }

            Reinas r(reinas, nreinas);

            r.colocarReina(0);
            free(reinas);
            system("CLS");
            cout << "No existen mas soluciones";
            //r.mostrarSolucionFinal();
		}
	};
}
