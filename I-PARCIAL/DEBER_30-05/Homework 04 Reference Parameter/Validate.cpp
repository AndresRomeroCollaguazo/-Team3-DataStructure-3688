/* Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Memoria Est�tica
Fecha creaci�n : 28 / 05 / 2021
Fecha de modificaci�n : 30 / 05 / 2021 */
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
