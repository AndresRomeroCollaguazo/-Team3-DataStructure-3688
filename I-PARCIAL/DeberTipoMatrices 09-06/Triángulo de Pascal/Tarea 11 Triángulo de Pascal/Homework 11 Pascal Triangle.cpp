/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Grupo3
Deber de Triangulo de Pascal
Fecha creación : 04 / 06 / 2021
Fecha de modificación : 18 / 06 / 2021 */
#include<iostream>
#include "Pascal.h"
#include "Validate.h"
#pragma warning(disable : 4996)
using namespace std;

int main() {
    char cad[10];
    Validate v;
    int n;
    strcpy(cad,v.ingresar("Ingrese cuantos niveles tendra el triangulo (1-13)"));
    n=atoi(cad);

    int** matrix = new int* [n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        *(matrix + i) = new int[n + 1];
    }

    Pascal pascal(n, 1);
    pascal.verify();
    cout << "1" << endl;
    pascal.pool(matrix);
    pascal.pascal(1, n, matrix, 0);
    pascal.graficPascal(matrix);

    return 0;
}