/*Universidad de las Fuerzas Armadas "ESPE"
Ing. de Software
Autor: Pérez Hámilton
Deber de Matriz Diagonal
Fecha creación : 06 / 06 / 2021
Fecha de modificación : 08 / 06 / 2021 */
#include "Matrix.h"
#include "Operations.h"

using namespace std;

void Operations:: matrixDrandom( int n)
{
    for (int i = 0; i < n; i++) {
        cout << " | ";
        for (int j = 0; j < n; j++) {
            if (i == j) cout << rand() % (10) << " ";
            else if (j == n - 1 - i) cout << rand() % (10) << " ";
            else cout << 0 << " ";
        }
        cout << " |" << endl;
    }
}
void Operations::matrix1Di(int n)
{
    for (int i = 0; i < n; i++) {
        cout << " | ";
        for (int j = 0; j < n; j++) {
            if (i == j) cout << 1 << " ";
            else if (j == n - 1 - i) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << " |" << endl;
    }
}