#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include "Operations.h"
#include "Matrix.h"

using namespace std;

int main()
{
    int size;
    Operations op;
    Matrix matrix_1, matrix_2, matrix_r;
    std::cout << "              <>-MULTIPLICACION DE MATRICES-<>\n";
    cout << "       Ingrese la dimension de las matrices:  ";
    cin >> size;
    matrix_1.set_matrix(op.segment(size));
    matrix_2.set_matrix(op.segment(size));
    matrix_r.set_matrix(op.segment(size));

    op.wax(matrix_1, size);
    op.wax(matrix_2, size);
    op.wax(matrix_r, size);

    op.enter(matrix_1, size);
    op.enter(matrix_2, size);

    op.multiply(matrix_1, matrix_2, matrix_r, size);

    op.printAll(matrix_r, size);
}

/*char* ingresar(char*);

char* ingresar(const char* msj)
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
*/