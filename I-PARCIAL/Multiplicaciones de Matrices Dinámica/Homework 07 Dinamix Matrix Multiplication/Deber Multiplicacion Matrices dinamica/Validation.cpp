#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include "Validation.h"
#pragma warning(disable : 4996)

char* Validation::ingresar(const char* msj)
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

