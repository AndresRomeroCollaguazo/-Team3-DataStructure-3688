#include <iostream>
#include "Operation.h"
#include "Matrix.h"
using namespace std;

int
main()
{
    int i, pot;
    Operation op;
    Matrix matrix_1, matrix_2, matrix_r;
    cout << "Digite la dimension impar para el cubo magico:";
    cin >> i;
    while (i % 2 == 0)
    {
        cout << "Digite la dimension impar:";
        cin >> i;
    }

    matrix_1.set_matrix(op.segmentar(i));
    op.encerar(matrix_1, i);
    op.semi_magic_square(matrix_1, i);
    op.imprimir(matrix_1, i);
}//


