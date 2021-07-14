
#include <iostream>
#pragma warning(disable : 4996)

#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#define ARRIBA 'w'
#define ABAJO 's'
#define ENTER 13
#include "Control.h"
#include "Quicksort.h"
#include "Vector.h"
#include "Seleccion.h"
#include"CountSort.h"

using namespace std;
int Control::gotoxy(USHORT x, USHORT y) {
    COORD cp = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cp);
    return 0;
}
int Control::useMenu(const char titulo[], const char* opciones[], int n)
{
    int opcionSeleccionada = 1;  // Indica la opcionSeleccionada

    int tecla;

    bool repite = true; // controla el bucle para regresar a la rutina que lo llamo, al presionar ENTER

    do {
        system("cls");
        system("color 3e");
        gotoxy(5, 3 + opcionSeleccionada); cout << "==>" << endl;

        // Imprime el t�tulo del men�
        gotoxy(15, 2); cout << titulo;

        // Imprime las opciones del men�
        for (int i = 0; i < n; ++i) {
            gotoxy(10, 4 + i); cout << i + 1 << ") " << opciones[i];
        }

        // Solo permite que se ingrese ARRIBA, ABAJO o ENTER

        do {
            tecla = onlyCharControl();
            // gotoxy(15, 15); cout << "tecla presionada: " << (char)tecla << " = " << tecla;
        } while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);

        switch (tecla) {

        case ARRIBA:   // En caso que se presione ARRIBA

            opcionSeleccionada--;

            if (opcionSeleccionada < 1) {
                opcionSeleccionada = n;
            }

            break;

        case ABAJO:
            opcionSeleccionada++;

            if (opcionSeleccionada > n) {
                opcionSeleccionada = 1;
            }

            break;

        case ENTER:
            repite = false;
            break;
        }

    } while (repite);

    return opcionSeleccionada;
}

void Control::viewMenu(void)
{
    bool repite = true;
    int opcion;
    Control m;
    // Titulo del men� y nombres de las opciones
    const char* titulo = "MENU DE OPCIONES";
    const char* opciones[] = {  "Quicksort","Seleccion", "CountSort","Salir" };

    int n = 4;  // Numero de opciones
  
    char* cad = new char[10];
    char* cad2 = new char[10];
    Control c;
    int dimension = 0;

    Vector<int> vec;
    QuickSort<int> qr = QuickSort<int>();
    Seleccion<int>sr = Seleccion<int>();
  
    
    do {
        opcion = m.useMenu(titulo, opciones, n);

        switch (opcion) {
        
        case 1:
            system("CLS");
            QuickSort<int> qr = QuickSort<int>();
            std::cout << "Ingrese el numero de elementos a generar: ";
            std::cin >> dimension;
            vec = Vector<int>(dimension);
            vec.generar(dimension);
            std::cout << "Vector desordenado" << std::endl;
            vec.imprimir();
            qr.ordenar(vec.getVector(), 0, dimension - 1);
            std::cout << std::endl << "Vector ordenado" << std::endl;
            vec.imprimir();
            delete[] vec.getVector();
            system("pause");
            break;

        case 2:
            system("CLS");
            CountSort<int>cr1 = CountSort<int>();

            std::cout << "Ingrese el numero de elementos a generar  ->";
            std::cin >> dimension;

            vec = Vector<int>(dimension);
            vec.generar(dimension);

            std::cout << "Vector desordenado ->" << std::endl;
            vec.imprimir();
            cr1.countSort(vec.getVector(), dimension);
            std::cout << std::endl << "Vector ordenado por Seleccion ->" << std::endl;
            cr1.imprimir(vec.getVector(), dimension);
            //elete[] vec.getVector();
            system("pause");
            break;
        case 3:
            system("CLS");
            CountSort<int>cr = CountSort<int>();
           
            std::cout << "Ingrese el numero de elementos a generar  ->";
            std::cin >> dimension;

            vec = Vector<int>(dimension);
            vec.generar(dimension);

            std::cout << "Vector desordenado ->" << std::endl;
            vec.imprimir();
            cr.countSort(vec.getVector(), dimension);
            std::cout << std::endl << "Vector ordenado por CountSort ->" << std::endl;
            cr.imprimir(vec.getVector(), dimension);
         
            //delete[] vec.getVector();
            system("pause");
            break;
        case 4:
         
            cout << "\n" << endl;
            system("pause");
            cout << "Adios, fue un gusto atenderlo.." << endl;
            exit(5);//si funciona
            break;
        }



    } while (repite);
}

char* Control::onlyIntControl(const char* msj)
{
    char* datos = new char[10];
    int i = 0;
    char c;
    printf("%s", msj);
    while ((c = getch()) != 13) {
        if (c >= '0' && c <= '9') {
            printf("%c", c);
            *(datos + i++) = c;
        }
    }
    return datos;

}


char Control::onlyCharControl(void)
{
    char c = 0;
    DWORD modo = NULL, contador;
    HANDLE ih = GetStdHandle(STD_INPUT_HANDLE);

    // Desactivamos escritura en terminal
    SetConsoleMode(ih, modo & ~(ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT));

    ReadConsoleA(ih, &c, 1, &contador, NULL);

    if (c == 0) {
        ReadConsoleA(ih, &c, 1, &contador, NULL);
    }

    SetConsoleMode(ih, modo); // Devolvemos control normal

    return c;
}