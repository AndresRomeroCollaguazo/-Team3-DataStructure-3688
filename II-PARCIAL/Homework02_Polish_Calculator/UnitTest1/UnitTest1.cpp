#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculadora_Polaca/Operation.h"
#include "../Calculadora_Polaca/Control.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            bool repite = true;
            int opcion;

            // Titulo del menú y nombres de las opciones
            const char* titulo = "Claculadora Polaca";
            const char* opciones[] = { "Calculadora","Salir" };
            int n = 2;  // Numero de opciones
            char* cad = new char[10];
            char* cad2 = new char[10];
            Control m;
            int dimension = 0;

            do {
                opcion = m.useMenu(titulo, opciones, n);

                switch (opcion) {
                case 1:
                    system("CLS");
                    try
                    {
                        Operation op;
                        Operators str;
                        string num = "12.36";
                        Apilation<string> datos;
                        datos = op.ingresar_datos();
                        cout << "\nInfija: ";
                        datos.mostrar_expresion();
                        Apilation<string> prefija;
                        Apilation<string> postfija;
                        prefija = op.infix_to_prefix1(datos);
                        cout << "\nPrefija: ";
                        prefija.mostrar_expresion();
                        postfija = op.infix_to_postfix1(datos);
                        cout << "\nPostfija: ";
                        postfija.mostrar_expresion();
                        cout << "\nResultado: ";
                        cout << op.calculate(prefija) << endl;
                    }
                    catch (const std::exception&)
                    {
                        cout << "Error" << endl;

                    }
                    system("pause");
                    break;
                case 2:
                    cout << "\n" << endl;
                    system("pause");
                    cout << "Adios.." << endl;
                    exit(5);
                    break;

                }
            } while (repite);
		}
	};
}
