/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Multiplicacion de matrices
Fecha creaci�n: 31/05/2021
Fecha de modificaci�n: 01/06/2021 */
#include"Validate.h"
#include <stdio.h>
#include <conio.h>
#pragma warning(disable : 4996)

char* Validate::ingresar(const char* msj)
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

