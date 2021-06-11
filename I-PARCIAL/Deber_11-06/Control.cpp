/* Universidad de las Fuerzas Armadas "ESPE"
* Software
* Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
* Deber de Listas
* Fecha creación: 09/06/2021
* Fecha de modificación: 10/06/2021 */
/*************************
 * Module:  Control.cpp
 * Author:
 * Modified: miércoles, 09 de junio de 2021 18:38:18
 * Purpose: Implementation of the class Control
 *************************/
#include <iostream>
#pragma warning(disable : 4996)
#include "List.h"
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#define ARRIBA 'w'
#define ABAJO 's'
#define ENTER 13
#include "Control.h"
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
        system("color 1e");
        gotoxy(5, 3 + opcionSeleccionada); cout << "==>" << endl;

        // Imprime el título del menú
        gotoxy(15, 2); cout << titulo;

        // Imprime las opciones del menú
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

    // Titulo del menú y nombres de las opciones
    const char* titulo = "MENU DE OPCIONES";
    const char* opciones[] = { "Insertar por cabeza", "Insertar por cola", "Eliminar Cola", "Eliminar Cabeza", "Mostrar", "Salir" };
    int n = 6;  // Numero de opciones
    List lst;
    char* cad = new char[10];
    char* cad2 = new char[10];
    Control c;
    int value;
    int value2;
    do {
        opcion = useMenu(titulo, opciones, n);

        switch (opcion) {
        case 1:

            system("CLS");

            strcpy(cad, c.onlyIntControl(" Digite el dato a ingresar : "));
            value = atoi(cad);
            lst.insertToHead(value);
            cout << "\n Se inserta por la cabeza" << endl;
            system("pause");
            break;


        case 2:

            system("CLS");

            strcpy(cad2, c.onlyIntControl(" Digite el dato a ingresar :"));
            value2 = atoi(cad2);
            lst.insertToTail(value2);
            //insertar cola
            cout << "\n Se inserta por la cola" << endl;
            system("pause");
            break;

        case 3:
            system("CLS");
            lst.deleteToTail();//eliminar cola
            cout << "Se elimino por la cola" << endl;
            system("pause");
            break;

        case 4:
            system("CLS");
            lst.deleteToHead();//eliminar cabeza
            cout << "Se elimino por la cabeza" << endl;
            system("pause");
            break;

        case 5:
            system("CLS");
            lst.printList();//MOSTRAR IMPRIMIR
            cout << "Se muestra la lista" << endl;
            system("pause");
            break;

        case 6:
            system("CLS");
            cout << "\nEl programa se cerrara!! ADIOS" << endl; //SALIR
            repite = false;
            system("pause>nul");
            break;
        }

    } while (repite);
}

////////////////////////////////////////////////////////////////////////
// Name:       Control::onlyIntControl(int _value)
// Purpose:    Implementation of Control::onlyIntControl()
// Parameters:
// - _value
// Return:     void
////////////////////////////////////////////////////////////////////////

char* Control::onlyIntControl(const char* msj)
{
    char datos[10];

    int i = 0;
    char c;
    printf("%s", msj);
    while ((c = getch()) != 13) {
        if (c >= '0' && c <= '9') {
            printf("%c", c);
            datos[i++] = c;
        }
    }
    return datos;

}

////////////////////////////////////////////////////////////////////////
// Name:       Control::onlyCharControl(char _value)
// Purpose:    Implementation of Control::onlyCharControl()
// Parameters:
// - _value
// Return:     void
////////////////////////////////////////////////////////////////////////

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
