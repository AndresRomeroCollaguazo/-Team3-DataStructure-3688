#include "pch.h"
#include "CppUnitTest.h"
#include "../MAIN/Control.h"
#include "../MAIN/Control.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

            bool repite = true;
            int opcion, opcion2, opcion3;

            // Titulo del men� y nombres de las opciones
            const char* titulo = "Grupo 3 Ordenamientos";
            const char* opciones[] = { "Shell","Quick Sort","Insercion Directa","Insercion Binaria","Heap Sort","Metodo de seleccion","Radix Sort","Burbuja","Sell Sort","Directo","Metodo natural","Metodo de intercalacion","Distribucion","Peine","Gnomo","Salir" };
            int n = 16;  // Numero de opciones
            char* cad = new char[10];
            int contador = 0;
            int contador2 = 0;
            bool ingresa = false;
            bool ingresa2 = false;
            Control c;
            int value;
            int value2;

            for (;;)
            {
                switch (opcion)
                {
                case 1: {
                    system("CLS");
                    cout << "\n" << endl;
                    cout << "      SHELLSHORT      " << endl;

                    int p = 0;
                    do {
                        std::cout << std::endl;
                    } while (p <= 2 || p >= 201);

                    Vector<int> numeros;
                    numeros.rellenar(p, []() {
                        std::random_device rd;
                        std::mt19937 mt(rd());
                        std::uniform_real_distribution<double> dist(1, 1000);
                        return dist(mt);
                        });
                    std::cout << std::endl;
                    std::cout << "ARREGLO DESORDENADO" << std::endl;
                    for (int numero : numeros)
                    {
                        std::cout << " | " << numero;
                    }
                    std::cout << " " << std::endl;

                    numeros.shell();

                    std::cout << "ARREGLO ORDENADO" << std::endl;
                    numeros.recorrer([](int valor)
                        {
                            if (valor == 0) {
                                return;
                            }
                            else {
                                std::cout << " | " << valor;
                            }
                        });

                    std::cout << " " << std::endl;
                }
                      _getch(); break;//fin del case principal

                case 2: {
                    system("CLS");
                    cout << "\n" << endl;
                    cout << "      QUICK SORT     " << endl;
                    QuickSort<int> qr = QuickSort<int>();
                    Vector<int> vec;
                    int p = 0;
                    do {
                        std::cout << std::endl;
                    } while (p <= 2 || p >= 201);

                    Vector<int> a(p);
                    vec = a;
                    vec.generar(p);
                    std::cout << "Vector desordenado" << std::endl;
                    vec.imprimir();
                    qr.ordenar(vec.getVector(), 0, p - 1);
                    std::cout << std::endl;
                    std::cout << std::endl << "Vector ordenado" << std::endl;
                    vec.imprimir();
                    delete[] vec.getVector();
                }
                      _getch(); break;//fin del case principal

                case 3: {
                    system("CLS");
                    cout << "\n" << endl;
                    cout << "      INSERCION DIRECTA      " << endl;
                    int p = 0;
                    do {
                        std::cout << std::endl;
                    } while (p <= 2 || p >= 201);
                    Vector<int> numeros;
                    numeros.rellenar(p, []() {
                        std::random_device rd;
                        std::mt19937 mt(rd());
                        std::uniform_real_distribution<double> dist(1, 1000);
                        return dist(mt);
                        });

                    std::cout << "ARREGLO DESORDENADO" << std::endl;
                    for (int numero : numeros)
                    {
                        std::cout << " | " << numero;
                    }
                    std::cout << " " << std::endl;

                    numeros.directInsecion([](int a, int b, int c) {
                        return (a >= 0 && b > c);
                        });
                    std::cout << std::endl;
                    std::cout << "ARREGLO ORDENADO" << std::endl;
                    numeros.recorrer([](int valor)
                        {
                            if (valor == 0) {
                                return;
                            }
                            else {
                                std::cout << " | " << valor;
                            }
                        });

                    std::cout << " " << std::endl;
                }
                      _getch(); break;//fin del case principal

                case 4: {
                    system("CLS");
                    cout << "\n" << endl;
                    cout << "      INSERCION BINARIA      " << endl;
                    Vector<int> numeros;
                    int p = 0;
                    do {
                        std::cout << std::endl;
                    } while (p <= 2 || p >= 201);
                    numeros.rellenar(p, []() {
                        std::random_device rd;
                        std::mt19937 mt(rd());
                        std::uniform_real_distribution<double> dist(1, 1000);
                        return dist(mt);
                        });

                    std::cout << "ARREGLO DESORDENADO" << std::endl;
                    for (int numero : numeros)
                    {
                        std::cout << " | " << numero;
                    }
                    std::cout << " " << std::endl;

                    numeros.ordenamientoInsercionBinaria();
                    std::cout << std::endl;
                    std::cout << "ARREGLO ORDENADO" << std::endl;
                    numeros.recorrer([](int valor)
                        {
                            if (valor == 0) {
                                return;
                            }
                            else {
                                std::cout << " | " << valor;
                            }
                        });

                    std::cout << " " << std::endl;
                }
                      _getch(); break;//fin del case principal

                case 5: {
                    system("CLS");
                    cout << "\n" << endl;
                    cout << "      HEAP SORT      " << endl;
                    int p = 0;
                    do {
                        std::cout << std::endl;
                    } while (p <= 2 || p >= 201);
                    Vector<int> numeros;
                    numeros.rellenar(p, []() {
                        std::random_device rd;
                        std::mt19937 mt(rd());
                        std::uniform_real_distribution<double> dist(1, 1000);
                        return dist(mt);
                        });

                    std::cout << "ARREGLO DESORDENADO" << std::endl;
                    for (int numero : numeros)
                    {
                        std::cout << " | " << numero;
                    }
                    std::cout << " " << std::endl;

                    numeros.heapSort();
                    std::cout << std::endl;
                    std::cout << "ARREGLO ORDENADO" << std::endl;
                    numeros.recorrer([](int valor)
                        {
                            if (valor == 0) {
                                return;
                            }
                            else {
                                std::cout << " | " << valor;
                            }
                        });

                    std::cout << " " << std::endl;
                }
                      _getch(); break;//fin del case principal

                case 6: {
                    system("CLS");
                    cout << "\n" << endl;
                    cout << "      METODO DE SELECCION      " << endl;
                    Vector<int> numeros;
                    int p = 0;
                    do {
                        std::cout << std::endl;
                    } while (p <= 2 || p >= 201);
                    numeros.rellenar(p, []() {
                        std::random_device rd;
                        std::mt19937 mt(rd());
                        std::uniform_real_distribution<double> dist(1, 1000);
                        return dist(mt);
                        });

                    std::cout << "ARREGLO DESORDENADO" << std::endl;
                    for (int numero : numeros)
                    {
                        std::cout << " | " << numero;
                    }
                    std::cout << " " << std::endl;

                    numeros.ordenarArregloPorSeleccion();
                    std::cout << std::endl;
                    std::cout << "ARREGLO ORDENADO" << std::endl;
                    numeros.recorrer([](int valor)
                        {
                            if (valor == 0) {
                                return;
                            }
                            else {
                                std::cout << " | " << valor;
                            }
                        });

                    std::cout << " " << std::endl;
                }
                      _getch(); break;//fin del case principal

                case 7: {
                    system("CLS");
                    cout << "\n" << endl;
                    cout << "      RADIX SORT      " << endl;
                    int p = 0;
                    do {
                        std::cout << std::endl;
                    } while (p <= 2 || p >= 201);
                    Vector<int> numeros;
                    numeros.rellenar(p, []() {
                        std::random_device rd;
                        std::mt19937 mt(rd());
                        std::uniform_real_distribution<double> dist(1, 1000);
                        return dist(mt);
                        });

                    std::cout << "ARREGLO DESORDENADO" << std::endl;
                    for (int numero : numeros)
                    {
                        std::cout << " | " << numero;
                    }
                    std::cout << " " << std::endl;

                    numeros.radix([](int* a, int b) {
                        int max = *(a + 0);
                        for (int i = 1; i < b; i++) {
                            if (*(a + i) > max) {
                                max = *(a + i);
                            }
                        }
                        return max;
                        });
                    std::cout << std::endl;
                    std::cout << "ARREGLO ORDENADO" << std::endl;
                    numeros.recorrer([](int valor)
                        {
                            if (valor == 0) {
                                return;
                            }
                            else {
                                std::cout << " | " << valor;
                            }
                        });

                    std::cout << " " << std::endl;
                }
                      _getch(); break;//fin del case principaL

                case 8: {
                    system("CLS");
                    cout << "\n" << endl;
                    cout << "      BURBUJA      " << endl;
                    Burbuja<int> qr = Burbuja<int>();
                    Vector<int> vec;
                    int p = 0;
                    do {
                        std::cout << std::endl;
                    } while (p <= 2 || p >= 201);
                    vec = Vector<int>(p);
                    vec.generar(p);
                    std::cout << "Vector generado ->" << std::endl;
                    vec.imprimir();
                    qr.ordenar(vec.getVector(), 0, p - 1);
                    std::cout << std::endl;
                    std::cout << std::endl << "Vector ordenado por Burbuja ->" << std::endl;
                    vec.imprimir();
                    delete[] vec.getVector();
                }
                      _getch(); break;//fin del case principal

                case 9: {
                    system("CLS");
                    cout << "\n" << endl;
                    cout << "      SELL SORT      " << endl;
                    Vector<int> vec;
                    Sellshort<int> qr2 = Sellshort<int>();
                    std::cout << "Ingrese el numero de elementos a generar  ->";
                    int p = 0;
                    do {
                        std::cout << std::endl;
                    } while (p <= 2 || p >= 201);
                    vec = Vector<int>(p);
                    vec.generar(p);
                    std::cout << "Vector generado ->" << std::endl;
                    vec.imprimir();
                    qr2.ordenar(vec.getVector(), 0, p - 1);
                    std::cout << std::endl;
                    std::cout << std::endl << "Vector ordenado por Sellshort ->" << std::endl;
                    vec.imprimir();
                    delete[] vec.getVector();
                }
                      _getch(); break;//fin del case principal

                case 10: {
                    system("CLS");
                    cout << "\n" << endl;
                    cout << "      DIRECTO      " << endl;
                    Vector<int> numeros;
                    int p = 0;
                    do {
                        std::cout << std::endl;
                    } while (p <= 2 || p >= 201);
                    numeros.rellenar(p, []() {
                        std::random_device rd;
                        std::mt19937 mt(rd());
                        std::uniform_real_distribution<double> dist(1, 1000);
                        return dist(mt);
                        });

                    std::cout << "ARREGLO DESORDENADO" << std::endl;
                    for (int numero : numeros)
                    {
                        std::cout << " | " << numero;
                    }
                    std::cout << " " << std::endl;

                    numeros.directSort();
                    std::cout << std::endl;
                    std::cout << "ARREGLO ORDENADO" << std::endl;
                    numeros.recorrer([](int valor)
                        {
                            if (valor == 0) {
                                return;
                            }
                            else {
                                std::cout << " | " << valor;
                            }
                        });

                    std::cout << " " << std::endl;
                }
                       _getch(); break;//fin del case principal

                case 11: {
                    system("CLS");
                    cout << "\n" << endl;
                    cout << "      METODO NATURAL      " << endl;
                    FILE* fichero;
                    NaturalSort n;
                    fichero = fopen("C:\\Users\\Jorge\\Desktop\\C C++\\Ordenamientos Lamda\\mezcla.txt", "r+");
                    puts("Fichero desordenado\n");
                    n.mostrar(fichero);
                    puts("Ordenando fichero\n");
                    n.mezcla(fichero);
                    std::cout << std::endl;
                    puts("Fichero ordenado\n");
                    n.mostrar(fichero);
                    fclose(fichero);
                    system("PAUSE");
                }
                       _getch(); break;//fin del case principal

                case 12: {
                    system("CLS");
                    cout << "\n" << endl;
                    cout << "      INTERCALACION      " << endl;
                    char* nomFic = (char*)malloc(7 * sizeof(int));
                    char* nomFic1 = (char*)malloc(7 * sizeof(int));
                    Intercalacion in;
                    in.limpiar();
                    Vector<int> numeros;
                    int p = 0;
                    do {
                        std::cout << std::endl;
                    } while (p <= 2 || p >= 201);
                    numeros.rellenar(p, []() {
                        std::random_device rd;
                        std::mt19937 mt(rd());
                        std::uniform_real_distribution<double> dist(1, 1000);
                        return dist(mt);
                        });
                    std::cout << "ARREGLO DESORDENADO" << std::endl;
                    for (int numero : numeros)
                    {
                        std::cout << " | " << numero;
                    }
                    std::cout << " " << std::endl;

                    nomFic = (char*)"F1.txt";
                    nomFic1 = (char*)"F2.txt";
                    in.insertar(numeros, nomFic, p);
                    in.ordenar();
                    std::cout << std::endl;
                    std::cout << "ARREGLO ORDENADO" << std::endl;
                    numeros.recorrer([](int valor)
                        {
                            if (valor == 0) {
                                return;
                            }
                            else {
                                std::cout << " | " << valor;
                            }
                        });

                    std::cout << " " << std::endl;
                }
                       _getch(); break;//fin del case principal

                case 13: {
                    system("CLS");
                    cout << "\n" << endl;
                    cout << "      DISTRIBUCION      " << endl;
                    CountSort<int>cr1 = CountSort<int>();
                    Vector <int> vec;
                    int p = 0;
                    do {
                       std::cout << std::endl;
                    } while (p <= 2 || p >= 201);
                    vec = Vector<int>(p);
                    vec.generar(p);
                    std::cout << "Vector desordenado ->" << std::endl;
                    vec.imprimir();
                    cr1.countSort(vec.getVector(), p);
                    std::cout << std::endl;
                    std::cout << std::endl << "Vector ordenado por distribución->" << std::endl;
                    cr1.imprimir(vec.getVector(), p);
                }
                       _getch(); break;//fin del case principal

                case 14: {
                    system("CLS");
                    cout << "\n" << endl;
                    cout << "      PEINE      " << endl;
                    Vector<int> vec;
                    Peine<int> qr1 = Peine<int>();
                    int p = 0;
                    do {
                        std::cout << std::endl;
                    } while (p <= 2 || p >= 201);
                    vec = Vector<int>(p);
                    vec.generar(p);
                    std::cout << "Vector generado ->" << std::endl;
                    vec.imprimir();
                    qr1.ordenar(vec.getVector(), 0, p - 1);
                    std::cout << std::endl;
                    std::cout << std::endl << "Vector ordenado por el metodo del Peine ->" << std::endl;
                    vec.imprimir();
                    delete[] vec.getVector();
                }
                       _getch(); break;//fin del case principal

                case 15:
                {
                    system("CLS");
                    cout << "\n" << endl;
                    cout << "      GNOMO      " << endl;
                    Vector<int> numeros;
                    int p = 0;
                    do {
                        std::cout << std::endl;
                    } while (p <= 2 || p >= 201);
                    numeros.rellenar(p, []() {
                        std::random_device rd;
                        std::mt19937 mt(rd());
                        std::uniform_real_distribution<double> dist(1, 1000);
                        return dist(mt);
                        });
                    std::cout << "ARREGLO DESORDENADO" << std::endl;
                    for (int numero : numeros)
                    {
                        std::cout << " | " << numero;
                    }
                    std::cout << " " << std::endl;

                    numeros.ordenamientoGnome(p);
                    std::cout << std::endl;
                    std::cout << "ARREGLO ORDENADO" << std::endl;
                    numeros.recorrer([](int valor)
                        {
                            if (valor == 0) {
                                return;
                            }
                            else {
                                std::cout << " | " << valor;
                            }
                        });

                    std::cout << " " << std::endl;
                }

                _getch(); break;//fin del case principaL

                case 16:
                {
                    cout << "\n" << endl;
                    system("pause");
                    cout << "Adios, fue un gusto atenderlo.." << endl;
                    exit(3);//si funciona
                }
                break;
                }
            };
        }
	};
}
