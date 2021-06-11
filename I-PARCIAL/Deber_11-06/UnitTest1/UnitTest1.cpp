#include "pch.h"
#include "CppUnitTest.h"
#include "../MAIN/List.h"
#include "../MAIN/Nodo.h"
#include "../MAIN/Control.h"

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
            int opcion;
            int n = 6;  // Numero de opciones
            List lst;
            char* cad = new char[10];
            char* cad2 = new char[10];
            Control c;
            int value;  value = 10;
            int value2; value2 = 11;
            int value3; value3 = 8;
            int value4; value4 = 1;



            int result1 = 10 ;
            int result2 = 11;
            int result3 = NULL;
            int result4 = NULL;

            //METODOS

            //Ingreso Por Cabeza
            strcpy(cad, c.onlyIntControl(""));
            value = atoi(cad);
            lst.insertToHead(value);

            //Ingreso Por Cola.
            strcpy(cad2, c.onlyIntControl(""));
            value2 = atoi(cad2);
            lst.insertToTail(value2);

            //eliminar cola
            lst.insertToHead(value3);
            lst.deleteToTail();

            //eliminar cabeza 
            lst.insertToHead(value4);
            lst.deleteToHead();


            //PRUEBAS Y COMPROBACIONES

            Assert::AreEqual(value, result1);
            Assert::AreEqual(value2, result2);
            Assert::AreEqual(value3, result3);
            Assert::AreEqual(value4, result4);



		}
	};
}
