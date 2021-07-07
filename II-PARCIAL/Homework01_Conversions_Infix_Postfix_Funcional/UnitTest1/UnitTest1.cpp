#include "pch.h"
#include "CppUnitTest.h"
#include "../Lista.h"
#include "../Prefijo.h"
#include "../Postfijo.h"
#include "../Funcional.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
        Lista lst;
        Prefijo pre;
        Postfijo pos;
        Funcional fun;
        string prueba = "a+b*(c-d)";
        char seguir;

        TEST_METHOD(notaciones)
        {
                //Notacion Prefija
                pre.convertir(prueba);
                string p1 = "+a*b-cd";
                //PRUEBAS Y COMPROBACIONES
                Assert::AreEqual(prueba,p1);

                //Notacion Postfija
                pos.convertir(prueba);
                string p2 = " abcd-*+";
                //PRUEBAS Y COMPROBACIONES
                Assert::AreEqual(prueba, p2);

                //Notacion Funcional
                fun.convertir(prueba);
                string p3 = "Suma(a,Producto(b,Resta(c,d,)";
                //PRUEBAS Y COMPROBACIONES
                Assert::AreEqual(prueba, p3);

		}
	};
}
