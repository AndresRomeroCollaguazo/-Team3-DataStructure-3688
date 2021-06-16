#include "pch.h"
#include "CppUnitTest.h"
#include "../ListaDoblementeEnlazada/Double_linked_list.h"
#include "../ListaDoblementeEnlazada/Control.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

            //DECLARACIONES
            bool repite = true;
            int n = 6;  // Numero de opciones
            Double_linked_list lst;
            char* cad = new char[10];
            char* cad2 = new char[10];
            Control c;
            int value;  value = 10;
            int value2; value2 = 11;
            int value3; value3 = 8;
            int value4; value4 = 1;



            int result1 = 10;
            int result2 = 11;
            int result3 = NULL;
            int result4 = 1;

            //METODOS

            //Ingreso Por Cabeza
            lst.insertToHead(value);
            lst.insertToHead(value3);

            //Ingreso Por Cola.
            lst.insertToTail(value2);

            //ingreso en el medio
            lst.insertMiddle(value, value4);//insertar entre

            //eliminar
            lst.insertToHead(value3);
            lst.deleteL();


            //PRUEBAS Y COMPROBACIONES

            Assert::AreEqual(value, result1);
            Assert::AreEqual(value2, result2);
            Assert::AreEqual(value2, result2);
            Assert::AreEqual(value4, result4);

		}
	};
}
