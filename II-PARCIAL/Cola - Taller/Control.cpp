/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller
Fecha creación : 13 / 06 / 2021
Fecha de modificación : 21 / 06 / 2021 */

#include <iostream>
#pragma warning(disable : 4996)
#include "Tail.h"
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#define ARRIBA 'w'
#define ABAJO 's'
#define ENTER 13
#include "Control.h"
#include "Validate.h"
#include "Operations.h"

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
        system("color 2e");
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
    Control m;
    // Titulo del menú y nombres de las opciones
    const char* titulo = "MENU DE OPCIONES";
    const char* opciones[] = { "Ingreso del Numero de Clientes", "Mostrar tabla","Promedio de espera", "Promedio de tiempo que no trabaja el cajero",
    "Numero de clientes promedio en la cola","Tiempo Promedio de Servicio","Promedio de Tiempo entre Llegadas","Salir" };

    int n = 8;  // Numero de opciones
    Tail lst;
    Tail l1;
    Tail l2;
    Tail l3;
    Tail l4;
    Tail l5;
    Tail l6;
    char* cad = new char[10];
    char* cad2 = new char[10];
    Control c;
    int value;
    int value2;
    double a = 0;
    Validate v;
    Operations op;
    int* vector;
    int* vector1;
    int* vector2;
    int* vector3;
    int* vector4;
    int* vector5;
    int* vector6;
    do {
        opcion = m.useMenu(titulo, opciones, n);

        switch (opcion) {
        case 1:
            system("CLS");
            m.gotoxy(0, 5);
            a = v.select_Validate();
            vector = (int*)malloc(a * sizeof(int));
            vector1 = (int*)malloc(a * sizeof(int));
            vector2 = (int*)malloc(a * sizeof(int));
            vector3 = (int*)malloc(a * sizeof(int));
            vector4 = (int*)malloc(a * sizeof(int));
            vector5 = (int*)malloc(a * sizeof(int));
            vector6 = (int*)malloc(a * sizeof(int));
            vector = op.num_Clientes([](int* vector, int i) {
                *(vector + i) = i + 1;
                }, a, lst);

            vector1 = op.tiempo_Llegada([](int min, int max) {

                return min + rand() % (max + 1 - min);
                }, a, l1);
            vector4 = op.tiempo_Servicio([](int min, int max) {

                return min + rand() % (max + 1 - min);
                }, a, l4);

            vector2 = op.tiempo_Espera_Salida([](int* vector, int* ts, int* tll, int* tser, int i) {
                if (*(ts + i - 1) > *(tll + i))
                {
                    *(vector + i) = *(ts + i - 1) - *(tll + i);
                }
                if (*(tll + i) > *(ts + i - 1))
                {
                    *(vector + i) = *(tll + i) - *(tll + i);
                }
                *(ts + i) = *(tll + i) + *(vector + i) + *(tser + i);

                }, l2, l5, vector1, vector4, vector5, a);

            vector3 = op.tiempo_No_Cajero([](int* vector, int* ts, int* tll, int i) {
                if (*(ts + i - 1) > *(tll + i))
                {
                    *(vector + i) = *(ts + i - 1) - *(ts + i - 1);
                }
                if (*(tll + i) > *(ts + i - 1))
                {
                    *(vector + i) = *(tll + i) - *(ts + i - 1);
                }

                }, l3, vector1, vector5, a);

            vector6 = op.tiempo_Llegadas([](int* vector, int* tll, int i) {
                *(vector + i) = *(tll + i) - *(tll + i - 1);

                }, l6, vector1, a);

            system("pause");
            break;

        case 2:
            system("CLS");
            m.gotoxy(0, 10);
            op.imprimirTabla([]() {
                cout << "Cliente\t Tiempo\t\tTiempo\t    Timepo no trabaja\tTiempo\t\tTiempo\t\tTiempo entre\n";
                cout << "\t  de Llegada\tde Espera\tel cajero\tde servicio\tde salida\tllegadas" << endl;

                }, lst, l1, l2, l3, l4, l5, l6);
            system("pause");
            break;

        case 3:
            system("CLS");
            m.gotoxy(0, 5);
            cout << "PROMEDIO DE ESPERA" << endl;
            cout << op.promedio([](int n1, int n2) {
                return n1 + n2;
                }, l2) << endl;
            system("pause");
            break;
        case 4:
            system("CLS");
            m.gotoxy(0, 5);
            cout << "PROMEDIO DE TIEMPO QUE NO TRABAJA EL CAJERO" << endl;
            cout << op.promedio([](int n1, int n2) {
                return n1 + n2;
                }, l3) << endl;
            system("pause");
            break;
        case 5:
            system("CLS");
            m.gotoxy(0, 5);
            cout << "NUMERO DE CLIENTES PROMEDIO EN LA COLA" << endl;
            cout << op.numeroClientesEspera([](int n1) {
                if (n1 > 0)
                {
                    return true;
                }
                else {
                    return false;
                }
                }, l2) << endl;
            system("pause");
            break;


        case 6:
            system("CLS");
            m.gotoxy(0, 5);
            cout << "TIEMPO PROMEDIO DE SERVICIO" << endl;
            cout << op.promedio([](int n1, int n2) {
                return n1 + n2;
                }, l4) << endl;
            system("pause");
            break;


        case 7:
            system("CLS");
            m.gotoxy(0, 5);
            cout << "PROMEDIO DE TIEMPO ENTRE LLEGADAS" << endl;
            cout << op.promedio([](int n1, int n2) {
                return n1 + n2;
                }, l6) << endl;
            system("pause");
            break;
        case 8:
            m.gotoxy(0, 25);
            cout << "\n" << endl;
            system("pause");
            cout << "Adios, fue un gusto atenderlo.." << endl;
            exit(8);//si funciona
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

void Control::marquesina()
{
    Control co;
    int a = 0;
    int	c = 0;
    int n = 0;
    setlocale(LC_CTYPE, "Spanish");
    char t[100] = "INTEGRANTES: ROMERO,CANTUÑA,MEDINA,PEREZ,VALAREZO";
    do
    {

        for (a = 0; a <= 60; a++)
        {

            co.gotoxy(a, 0);
            cout << t;
            co.gotoxy(a - 1, 0);
            cout << " ";
            Sleep(80);
            if (a == 60)
            {
                for (int x = 60; x < 109; x++)
                {
                    co.gotoxy(x, 0);
                    cout << " ";
                }
            }
        }



    } while (c = 1);
    getch();
}

void Control::activar() {
    system("mode con: cols=110 lines=40"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA A 80 COLUMNAS Y 25 FILAS
    system("COLOR B0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS


    thread proceso2(Control::viewMenu);
   // thread proceso1(Control::marquesina);
    Sleep(20);

    proceso2.join();
    //proceso1.join();



    system("Pause");
}