#include <iostream>
#include "Burbuja.h"
#include "Vector.h"

int main()
{
    int dimension = 0;
    Vector<int> vec;
    Burbuja<int> qr = Burbuja<int>();
    std::cout << "Ingrese el numero de elementos a generar  ->";
    std::cin >> dimension;
    vec = Vector<int>(dimension);
    vec.generar(dimension);
    std::cout << "Vector generado ->" << std::endl;
    vec.imprimir();
    qr.ordenar(vec.getVector(), 0 , dimension - 1);
    std::cout<< std::endl << "Vector ordenado por Burbuja ->" << std::endl;
    vec.imprimir();
    delete[] vec.getVector();
    return 0;
}

