//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantu?a Michelle, Medina Mart?n, P?rez Hamilton, Romero Jorge y Valarezo Andr?s
//  Deber de Calculadora
//  Fecha creaci?n : 18 / 07 / 2021
//  Fecha de modificaci?n : 23 / 07 / 2021  */
#include <iostream>
#pragma warning(disable : 4996)
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include "Control.h"
#include "Operation.h"
#include "Apilation.h"
#include "Operators.h"
#define ARRIBA 'w'
#define ABAJO 's'
#define ENTER 13

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
        system("color 3");
        gotoxy(5, 3 + opcionSeleccionada); cout << "==>" << endl;

        // Imprime el t?tulo del men?
        gotoxy(15, 2); cout << titulo;

        // Imprime las opciones del men?
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

    // Titulo del men? y nombres de las opciones
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