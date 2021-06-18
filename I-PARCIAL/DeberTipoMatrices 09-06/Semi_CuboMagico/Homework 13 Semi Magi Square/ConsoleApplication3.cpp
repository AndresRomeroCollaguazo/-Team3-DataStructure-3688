#include <iostream>
#include "Operation.h"
#include "Matrix.h"
#include "Validate.h"
#pragma warning(disable : 4996)
using namespace std;

int
main()
{
    int b;
    char cad[10];
    Validate v;
    int i, pot;
    Operation op;
    Matrix matrix_1, matrix_2, matrix_r;
    strcpy(cad, v.ingresar("Digite la dimension impar para el cubo magico:\n"));
    i=atoi(cad);
    while (i % 2 == 0)
    {
        strcpy(cad, v.ingresar("\nDigite la dimension impar:\n"));
        b = atoi(cad);
        i=b;
    }

    matrix_1.set_matrix(op.segmentar(i));
    op.encerar(matrix_1, i);
    op.semi_magic_square(matrix_1, i);
    op.imprimir(matrix_1, i);
}//