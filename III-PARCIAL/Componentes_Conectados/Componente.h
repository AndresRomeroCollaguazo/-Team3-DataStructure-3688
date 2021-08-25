//                   * Universidad de las Fuerzas Armadas "ESPE"
//   Software
//   Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
//   Deber de Componentes Conectados
//   Fecha creación: 23/08/2021
//   Fecha de modificación: 24/08/2021 * /
/**
*@file Componente.h
*@version 1.0
*@date 24/08/2021
*@author Grupo 3
*@title Componentes Conectados
*@brief funciones de utileria
*/
#include <cstdio>
#include <vector>
#include <cstring>
#define MAXV 1000
#include <iostream>
#include <fstream>  
using namespace std;
/**
      * @brief Clase GrafoConectado contiene las funciones 
      */
class GrafoConectado {
public:
    int** matriz;
    /**
      * @brief  inicializar ingresamos el tamanio de la matriz 
      * @param tamanio
      */
    int** inicializar(int tamanio) {
        matriz = (int**)malloc(sizeof(int*) * tamanio);
        for (int i = 0; i < tamanio; i++) {

            *(matriz + i) = (int*)malloc(sizeof(int*) * tamanio);
        }
        return matriz;
    }
    /**
  * @brief  encerar enceramos la matriz
  * @param tamanio
  * @param matriz
  */
    int** encerar(int tamanio, int** matriz) {
        for (int i = 0; i < tamanio; i++) {
            for (int j = 0; j < tamanio; j++) {
                *(*(matriz + i) + j) = 0;
            }
        }
        return matriz;
    }
    /**
  * @brief  mostrar imprimimos la matriz
  * @param tamanio
  * @param matriz
  */
    void mostrar(int tamanio, int** matriz) {
        cout << "  0  1  2  3  4  5  6  7" << endl;
        for (int i = 0; i < tamanio; i++) {
            cout << i;
            for (int j = 0; j < tamanio; j++) {

                printf(" %.1d ", *(*(matriz + i) + j));
            }
            printf("\n");
        }
    }
    /**
* @brief  ingresarUnion se calcula los valores conectados en las 2 
* @param tamanio
* @param k
* @param m
* @param matriz
*/
    int** ingresarUnion(int tamanio, int k, int m, int** matriz) {
        for (int i = 0; i < tamanio; i++) {
            for (int j = 0; j < tamanio; j++) {
                *(*(matriz + i) + j) = 1;
            }
        }
        return matriz;
    }

};

vector<int> grafo[MAXV], grafoAux[MAXV];
int i, u, v, contador, Q;
int** matriz;
int** matriz1;
GrafoConectado obj;
/**
      * @brief ingreso ingreso de las variales 
      * @param E
      */
void ingreso(int E) {
    int contador = 0;
    int contador1 = 0;
    srand(time(NULL));
    matriz = obj.inicializar(8);
    obj.encerar(8, matriz);

    matriz1 = obj.inicializar(8);
    obj.encerar(8, matriz1);

    for (i = 0; i < E; i++) {
        do {
            contador++;
            u = rand() % E;
        } while (contador <= E);
        do {
            contador1++;
            v = rand() % E;
        } while (contador1 <= E);

        grafo[u].push_back(v);
        grafoAux[v].push_back(u);
        *(*(matriz + u) + v) = 1;
        *(*(matriz1 + v) + u) = 1;
    }
    printf("Grafo 1 \n");
    obj.mostrar(8, matriz);
    printf("\n");
    printf("Grafo 2 \n");
    obj.mostrar(8, matriz1);

}
/**
      * @brief mostrarGrafo Muestrael El grafo 
      * @param E
      */
void mostrarGrafo(int E) {
    printf("Grafo :\n");
    for (i = 0; i < E; i++) {
        if (!grafo[i].empty()) {
            printf("%d : ", i);
            for (vector<int>::iterator it = grafo[i].begin(); it != grafo[i].end(); it++)
                printf("%d ", *it);
            printf("\n");
        }
    }

}
/**
      * @brief mostrarGrafoInverso Muestrael El grafo inverso
      * @param E
      */
void mostrarGrafoInverso(int E) {
    printf("Componente Conectado :\n");
    for (i = 0; i < E; i++) {
        if (!grafoAux[i].empty()) {
            printf("%d : ", i);
            for (vector<int>::iterator it = grafoAux[i].begin(); it != grafoAux[i].end(); it++)
                printf("%d ", *it);
            printf("\n");
        }
    }
}

