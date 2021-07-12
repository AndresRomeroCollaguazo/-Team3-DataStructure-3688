/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller
Fecha creación : 13 / 06 / 2021
Fecha de modificación : 21 / 06 / 2021 */
#include "Validate.h"
#include <conio.h>
#include <iostream>
#include <cstring>
#include <math.h>
#include "Control.h"
#include "Tail.h"

#pragma warning(disable : 4996)
using namespace std;

double Validate::validate_L() {

    char* datos = new char[100];
    int i = 0;
    double j;
    char c;
    while ((c = _getch()) != 13) {
        if (c >= '0' && c <= '99') {
            cout << c;
            *(datos + i++) = c;
        }
        else if (c == 46) {
            cout << c;
            if (datos == NULL) {
                cout << "No se a ingresado ningun valor, vuelva a intentarlo" << endl;
                validate_L();
            }
            else {
                j = atof(datos);
                return j;
            }
        }
    }
}

double Validate::validate_R() {
    char* datos = new char[100];
    int i = 0;
    double j;
    char c;
    while ((c = getch()) != 13) {
        if (c >= '0' && c <= '9') {
            cout << c;
            *(datos + i++) = c;
        }
    }
    j = atof(datos);
    return j;
}

double Validate::select_Validate() {
    bool repite = true;
    int opcion;

    // Titulo del menú y nombres de las opciones
    const char* titulo = "MENU DE OPCIONES";
    const char* opciones[] = { "Ingreso de un Entero", "Regresar" };
    int n = 2;  // Numero de opciones
    char* cad = new char[10];
    char* cad2 = new char[10];
    Control c;
    int value;
    int value2;
    Validate v;
    Tail lst;

    do {
        opcion = c.useMenu(titulo, opciones, n);

        switch (opcion) {
        case 1:

            system("CLS");
            cout << "INGRESE EL VALOR ENTERO:\n " << endl;
            value = v.validate_R();


            return value;
            cout << "\n Se inserta en la cola" << endl;
            break;


        case 2:
        {
            system("CLS");
            c.viewMenu();
            break;
        }
        default:
            cout << "Ingrese un valor correcto" << endl;

        }

    } while (repite);
}