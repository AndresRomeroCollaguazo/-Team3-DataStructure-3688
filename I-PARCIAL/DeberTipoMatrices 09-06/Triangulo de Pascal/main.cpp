#include<iostream>
#include "Pascal.h"
using namespace std;

int main() {
    int n;        
    cout << "Ingrese cuantos niveles tendra el triangulo (1-13)" << endl;
    cin >> n;

    int** matrix = new int* [n+1];
    for (int i = 0; i < n+1; i++)
    {
        *(matrix + i) = new int[n+1];
    }
    
    Pascal pascal(n,1);
    pascal.verify();
    cout << "1" << endl;
    pascal.pool(matrix);
    pascal.pascal(1, n,matrix,0);
    pascal.graficPascal(matrix);

    return 0;
}

