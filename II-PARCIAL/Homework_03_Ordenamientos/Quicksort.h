#pragma once
#include <iostream>

template <class T>
class QuickSort
{
private:
    int auxIzq;
    int auxDer;
    int pivote;
    int auxDato;
public:
    void intercambiar(T*, int, int);
    void ordenar(T*, int, int);
    void imprimir(T*, int, int);
};

template <class T>
void QuickSort<T>::intercambiar(T* vector, int newIzq, int newDer) {
    auxIzq = newIzq;
    auxDer = newDer;
    pivote = *(vector + ((newIzq + newDer) / 2));
    do {
        std::cout << "\npivote -> " << pivote <<  "   ->";
        imprimir(vector, newIzq, newDer + 1);
        while ((*(vector + auxIzq) < pivote) && (auxDer <= newDer))
        {
            auxIzq++;
        }
        while ((pivote < *(vector + auxDer)) && (auxDer > newIzq))
        {
            auxDer--;
        }
        if (auxIzq <= auxDer)
        {
            auxDato = *(vector + auxIzq);
            *(vector + auxIzq) = *(vector + auxDer);
            *(vector + auxDer) = auxDato;
            auxIzq++;
            auxDer--;
        }
    } while (auxIzq <= auxDer);
}

template <class T>
void QuickSort<T>::ordenar(T* vector, int izq, int der)
{
    intercambiar(vector, izq, der);
    std::cout << "\npivote -> " << pivote << "   ->";
    imprimir(vector, izq, der + 1);
    if (izq < auxDer)
        ordenar(vector, izq, auxDer);
    if (auxIzq < der)
        ordenar(vector, auxIzq, der);
}

template <class T>
void QuickSort<T>::imprimir(T* vector, int dimI, int dimF)
{
    std::cout << "[";
    for (int i = dimI; i < dimF; i++)
        std::cout << *(vector + i) << " ";
    std::cout << "]" << std::endl;
}
