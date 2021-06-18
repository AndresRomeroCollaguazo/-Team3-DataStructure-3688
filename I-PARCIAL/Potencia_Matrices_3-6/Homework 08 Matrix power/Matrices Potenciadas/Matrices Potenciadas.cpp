/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Potencia de matrices
Fecha creación: 02/06/2021
Fecha de modificación: 03/06/2021 */
#include <iostream>
#include "Operations.h"
#include "Matrix.h"
using namespace std;

int main()
{
    int size, exp;
    Operations op;
    Matrix matrix_1, matrix_r;
    std::cout << "              POTENCIA DE MATRICES\n";
    cout << "   Ingrese la dimension de la matriz:";
    cin >> size;
    cout << "   Ingrese el exponente:";
    cin >> exp;

    matrix_1.set_matrix(op.segment(size));
    matrix_r.set_matrix(op.segment(size));

    op.wax(matrix_1, size);
    op.wax(matrix_r, size);

    op.enter(matrix_1, size);

    op.boosted(matrix_1, matrix_r, size, exp);

    op.print_All(matrix_r, size);
}