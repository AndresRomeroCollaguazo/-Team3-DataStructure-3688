//                   * Universidad de las Fuerzas Armadas "ESPE"
//   Software
//   Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
//   Deber de Componentes Conectados
//   Fecha creación: 23/08/2021
//   Fecha de modificación: 24/08/2021 * /
#pragma warning(disable : 4996)
#include <cstdlib>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <random>
#include "Control.h"
#include "Componente.h"
#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>
#include <fstream>  
#define ARRIBA 'w'
#define ABAJO 's'
#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3 
using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Control::viewMenu()
// Purpose:    Implementation of Control::viewMenu()
// Return:     void
////////////////////////////////////////////////////////////////////////
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
        //system("color 1e");
        dibujarCuadro(0, 0, 109, 39); //SE DIBUJA EL CUADRO PRINCIPAL
        dibujarCuadro(1, 1, 108, 7); //SE DIBUJA EL CUADRO DEL TITULO
        gotoxyS(30, 2); cout << "       <-> Universidad de Fuerzas Armadas <->     ";
        gotoxyS(30, 3); cout << "                  <-> ESPE <->                    ";
        gotoxyS(30, 4); cout << "<-> Departamento de Ciencias de la Computacion <->";
        gotoxyS(4, 6); cout << " INTEGRANTES:  Cantunia Michelle, Medina Martin, Perez Hamilton, Romero Andres y Valarezo Andres";

        gotoxy(5, 11 + opcionSeleccionada); cout << "==>" << endl;

        // Imprime el t�tulo del men�
        gotoxy(15, 9); cout << titulo;

        // Imprime las opciones del men�
        for (int i = 0; i < n; ++i) {
            gotoxy(10, 12 + i); cout << i + 1 << ") " << opciones[i];
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
int Control::useMenu2(const char titulo[], const char* admin[], int n)
{
    int opcionSeleccionada = 1;  // Indica la opcionSeleccionada

    int tecla;

    bool repite = true; // controla el bucle para regresar a la rutina que lo llamo, al presionar ENTER

    do {
        system("cls");
        system("color 1e");

        dibujarCuadro(0, 0, 109, 39); //SE DIBUJA EL CUADRO PRINCIPAL
        dibujarCuadro(1, 1, 108, 6); //SE DIBUJA EL CUADRO DEL TITULO
        dibujarCuadro(2, 2, 107, 5); //SE DIBUJA EL CUADRO DEL TITULO DEL MENU
        gotoxyS(30, 3); cout << "<->          ..SISTEMA DE PRESTAMOS..          <->";
        gotoxyS(30, 4); cout << "<->       INGRESO UNICO DE ADMINISTRADOR       <->";

        gotoxy(5, 11 + opcionSeleccionada); cout << "==>" << endl;

        // Imprime el t�tulo del men�
        gotoxy(15, 10); cout << titulo;

        // Imprime las opciones del men�
        for (int i = 0; i < n; ++i) {
            gotoxy(10, 12 + i); cout << i + 1 << ") " << admin[i];
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
int Control::useMenu3(const char titulo[], const char* user[], int n)
{
    int opcionSeleccionada = 1;  // Indica la opcionSeleccionada

    int tecla;

    bool repite = true; // controla el bucle para regresar a la rutina que lo llamo, al presionar ENTER

    do {
        system("cls");
        system("color 1e");

        dibujarCuadro(0, 0, 109, 39); //SE DIBUJA EL CUADRO PRINCIPAL
        dibujarCuadro(1, 1, 108, 6); //SE DIBUJA EL CUADRO DEL TITULO
        dibujarCuadro(2, 2, 107, 5); //SE DIBUJA EL CUADRO DEL TITULO DEL MENU
        gotoxyS(30, 3); cout << "<->          ..Ordenamientos..          <->";
        gotoxyS(30, 4); cout << "<->          INTERNOS Y EXTERNOS          <->";

        gotoxy(5, 11 + opcionSeleccionada); cout << "==>" << endl;

        // Imprime el t�tulo del men�
        gotoxy(15, 10); cout << titulo;

        // Imprime las opciones del men�
        for (int i = 0; i < n; ++i) {
            gotoxy(10, 12 + i); cout << i + 1 << ") " << user[i];
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

void Control::viewMenu()
{
    bool repite = true;
    int opcion, opcion2, opcion3;

    // Titulo del men� y nombres de las opciones
    const char* titulo = "Grupo 3 Ordenamientos";
    const char* opciones[] = { "Componentes Conectados","Salir" };
    int n = 2;  // Numero de opciones
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
        opcion = useMenu(titulo, opciones, n);//se llama al menu
        switch (opcion)
        {
        case 1:
            int E, n;
            system("cls");
            
                GrafoConectado obj;
                printf("Ingrese el numero de repeticiones : \n");
                cin >> E;
                ingreso(E);
                mostrarGrafo(E);
                mostrarGrafoInverso(E);
                cout << "\n\n" << endl;
                system("pause");
            break;//fin del case principaL

        case 2:

            cout << "\n" << endl;
            system("pause");
            cout << "Adios, fue un gusto atenderlo.." << endl;
            exit(3);//si funciona
            break;
        }
    }
};


int Control::onlyIntControl(const char* msj)
{
    char* datos = new char[10];

    int i = 0;
    int a = 0;
    char c;
    printf("%s", msj);
    std::cout << endl;
    while ((c = getch()) != 13) {
        if (c >= '0' && c <= '9') {
            std::cout << c;
            *(datos + i++) = c;
        }
    }
    a = atoi(datos);
    return a;

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

void Control::gotoxyS(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}


//FUNCION QUE DIBUJA EL CUADRO
void Control::dibujarCuadro(int x1, int y1, int x2, int y2) {
    int i;

    for (i = x1; i < x2; i++) {
        gotoxyS(i, y1); cout << "\304"; //linea horizontal superior
        gotoxyS(i, y2); cout << "\304"; //linea horizontal inferior
    }

    for (i = y1; i < y2; i++) {
        gotoxyS(x1, i); cout << "\263"; //linea vertical izquierda
        gotoxyS(x2, i); cout << "\263"; //linea vertical derecha
    }

    gotoxyS(x1, y1); cout << "\332";
    gotoxyS(x1, y2); cout << "\300";
    gotoxyS(x2, y1); cout << "\277";
    gotoxyS(x2, y2); cout << "\331";
}