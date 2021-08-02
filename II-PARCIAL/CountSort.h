//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
//  Deber de Ordenamientos
//  Fecha creación : 20 / 07 / 2021
//  Fecha de modificación : 29 / 07 / 2021  */
/**
*@file CountSort.h
*@version 1.0
*@date 29/07/2021
*@author Grupo 3
*@title Ordenamiento por Count short
*@brief funciones de utileria
*/
#pragma once
template <class T>
class CountSort {
private:
public:
    /**
      * @brief countSort intercambia de posicion
      * @param int
      */
    void countSort(T*, int);
    /**
      * @brief imprime
      * @param int
      */
    void imprimir(T*, int);
};

template <class T>
void CountSort<T>::countSort(T* vector, int n) {
    int *arr1;
    int* count_arr;
    arr1 = (int*)malloc(n * sizeof(int));
    count_arr = (int*)malloc(n * sizeof(int));

    int x = *(vector + 0);

    for (int i = 1; i < n; i++) {
        if (*(vector + i) > x)
            x = *(vector + i);
    }

    for (int i = 0; i <= x; ++i) {
        *(count_arr + i) = 0;
    }

    for (int i = 0; i < n; i++) {
        count_arr[vector[i]]++;
    }

    for (int i = 1; i <= x; i++) {
        *(count_arr + i) += *(count_arr + i-1);
    }


    for (int i = n - 1; i >= 0; i--) {
        arr1[count_arr[vector[i]] - 1] = vector[i];
        count_arr[vector[i]]--;

    }

    for (int i = 0; i < n; i++) {
        *(vector + i) = *(arr1 + i);
    }
}
template <class T>
void CountSort<T>::imprimir(T* vector, int n){
    
   

    std::cout << "[";
    for (int i = 0; i < n; i++)
        std::cout << *(vector + i) << " ";
    std::cout << "]" << std::endl;
}