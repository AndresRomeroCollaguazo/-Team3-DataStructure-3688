/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Listas
Fecha creaci�n : 13 / 06 / 2021
Fecha de modificaci�n : 15 / 06 / 2021 */

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
#include "Double_linked_list.h"
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
        system("color 1e");
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

    // Titulo del men� y nombres de las opciones
    const char* titulo = "MENU DE OPCIONES";
    const char* opciones[] = { "Insertar por cabeza", "Insertar por cola", "Eliminar", "Insertar entre", "Mostrar", "Salir" };
    int n = 6;  // Numero de opciones
    Double_linked_list lst;
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
            strcpy(cad2, c.onlyIntControl(" Digite el dato a ingresar : "));
            value2 = atoi(cad2);
            lst.insertToTail(value2);//insertar cola
            cout << "\n Se inserta por la cola" << endl;
            system("pause");
            break;

        case 3:
            system("CLS");
            lst.deleteL();//eliminar cola
            cout << " Se elimino" << endl;
            system("pause");
            break;

        case 4:
            system("CLS");
            strcpy(cad2, c.onlyIntControl(" Digite el numero :"));
            value = atoi(cad2);
            strcpy(cad2, c.onlyIntControl(" \n Digite la posicion :"));
            value2 = atoi(cad2);
            lst.insertMiddle(value,value2);//insertar entre
            cout << "\n Se incerto" << endl;
            system("pause");
            break;

        case 5:
            system("CLS");
            lst.imprimir([](int valor, int indice) {
                cout << "Indice -> " << indice << "  Valor-> " << valor << endl;
                });//imprime
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