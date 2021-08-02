//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
//  Deber de Ordenamientos
//  Fecha creación : 20 / 07 / 2021
//  Fecha de modificación : 29 / 07 / 2021  */
/**
*@file Burbuja.h
*@version 1.0
*@date 29/07/2021
*@author Grupo 3
*@title Ordenamiento por burbuja
*@brief funciones de utileria
*/
#ifndef BURBUJA_H
#define BURBUJA_H


template <class T>
class Burbuja
{
private:
    int auxIzq;
    int auxDer;
    int pivote;
    int auxDato;
public:
    /**
      * @brief intercambiar intercambia de posicion
      * @param int int
      */
    void intercambiar(T*, int, int);
    /**
      * @brief ordena osea intercambia de posicion
      * @param int int
      */
	void ordenar(T*, int, int);
    /**
      * @brief imprimir imprime las posiciones
      * @param int int
      */
    void imprimir(T*, int, int);
};

template <class T>
void Burbuja<T>::intercambiar(T* vector, int newIzq, int newDer) {
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
void Burbuja<T>::ordenar(T* vector, int izq, int der)
{
    intercambiar(vector, izq, der);
    if (izq < auxDer)
        ordenar(vector, izq, auxDer);
    if (auxIzq < der)
        ordenar(vector, auxIzq, der);
}

template <class T>
void Burbuja<T>::imprimir(T* vector, int dimI, int dimF)
{
    std::cout << "{";
    for (int i = dimI; i < dimF; i++)
        std::cout << *(vector + i) << " ";
    std::cout << "}" << std::endl;
}

#endif 

