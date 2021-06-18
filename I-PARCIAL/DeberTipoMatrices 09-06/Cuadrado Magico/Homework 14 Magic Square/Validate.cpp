#include"Validate.h"
#include<stdio.h>
#include"conio.h"

#pragma warning(disable : 4996)

char* Validate:: ingresar(const char* msj)
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
