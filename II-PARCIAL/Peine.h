//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
//  Deber de Ordenamientos
//  Fecha creación : 20 / 07 / 2021
//  Fecha de modificación : 29 / 07 / 2021  */
/**
*@file Peine.h
*@version 1.0
*@date 29/07/2021
*@author Grupo 3
*@title Ordenamiento por Peine
*@brief funciones de utileria
*/
#pragma once
template <class T>
class Peine
{
private:
    int auxIzq;
    int auxDer;
    int pivote;
    int auxDato;
public:
    /**
      * @brief mmezcla
      * * @param t
      * @param n
      */
    void intercambiar(T*, int, int);
    /**
      * @brief ordenar
     * @param t
      * @param n
      */
    void ordenar(T*, int, int);
    /**
      * @brief imprimir
      * @param t
      * @param n
      */
    void imprimir(T*, int, int);
};

template <class T>
void Peine<T>::intercambiar(T* vector, int newIzq, int newDer) {
    auxIzq = newIzq;
    auxDer = newDer;
    pivote = *(vector + ((newIzq + newDer) / 2));
    do {

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
void Peine<T>::ordenar(T* vector, int izq, int der)
{
    intercambiar(vector, izq, der);
    if (izq < auxDer)
        ordenar(vector, izq, auxDer);
    if (auxIzq < der)
        ordenar(vector, auxIzq, der);
}

template <class T>
void Peine<T>::imprimir(T* vector, int dimI, int dimF)
{
    std::cout << "{";
    for (int i = dimI; i < dimF; i++)
        std::cout << *(vector + i) << " ";
    std::cout << "}" << std::endl;
}

