
#include "Operation.h"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "Matrix.h"
#include <iostream>
using namespace std;

int** Operation::segmentar(int dim) {
    Matrix matrix;
    int j;
    matrix.set_matrix((int**)malloc(dim * sizeof(int*)));
    for (j = 0; j < dim; j++) {
        *(matrix.get_matrix() + j) = (int*)malloc(dim * sizeof(int));
    }
    return matrix.get_matrix();
}
void Operation::encerar(Matrix matrix, int dim) {
    int i, j;
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++)
            *(*(matrix.get_matrix() + i) + j) = 0;
}
void Operation::ingresar(Matrix matrix, int dim) {
    int i, j;
    cout << "Ingrese los datos:" << endl;
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++) {
            cout << "[" << i + 1 << "]" << "[" << j + 1 << "] :";
            cin >> (*(*(matrix.get_matrix() + i) + j));
        }
}
void Operation::calcular(Matrix matrix_1, Matrix matrix_2, Matrix matrix_r, int dim) {
    int i, j, k;
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            for (k = 0; k < dim; k++) {
                *(*(matrix_r.get_matrix() + i) + j) = *(*(matrix_r.get_matrix() + i) + j) + *(*(matrix_1.get_matrix() + i) + k) * *(*(matrix_2.get_matrix() + k) + j);
            }
        }
    }
}
void Operation::imprimir(Matrix matrix, int dim) {
    int i, j;
    printf("\n");
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            printf("%d", *(*(matrix.get_matrix() + i) + j));
            cout << "\t";
            //printf("%*s", j + 5, "");
        }
        printf("\n");
    }
}

void Operation::copiar_matriz(Matrix m1, Matrix m2, int dim) {
    int i, j;
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            *(*(m1.get_matrix() + i) + j) = *(*(m2.get_matrix() + i) + j);
        }
    }
}

void Operation::calcular_potencia(Matrix m1, Matrix mr, int dim, int potencia) {
    int i = 0, j = 0;
    Matrix m2;
    m2.set_matrix(segmentar(dim));
    encerar(m2, dim);
    copiar_matriz(m2, m1, dim);
    copiar_matriz(mr, m1, dim);
    if (potencia == 0) {
        encerar(mr, dim);
        for (j = 0; j < dim; j++)
            *(*(mr.get_matrix() + j) + j) = 1;
    }
    for (i = 0; i < potencia - 1; i++) {
        encerar(mr, dim);
        calcular(m2, m1, mr, dim);
        copiar_matriz(m2, mr, dim);

    }



}

void Operation::semi_magic_square(Matrix matriz_a, int longitud)
{
    int limit = longitud * longitud;
    int column = longitud / 2;
    int row = 0;

    for (int i = 1; i <= limit; i++) {
        if (*(*(matriz_a.get_matrix() + row) + column) != 0) {
            //row = row + 2;
            row = row + 2;
            if (row >= longitud) {
                row = row - longitud;
            }
            column = column - 1;
            if (column == -1) {
                column = longitud - 1;
            }
        }
        *(*(matriz_a.get_matrix() + row) + column) = i;
        row = row - 1;
        if (row == -1) {
            row = longitud - 1;
        }
        column = column + 1;
        if (column == longitud) {
            column = 0;
        }


    }
    permutate(matriz_a, longitud);
}

void Operation::permutate(Matrix matriz_a, int longitud)
{
    int aux = 0;
    for (int i = 0; i < longitud; i++) {
        aux = *(*(matriz_a.get_matrix() + 0) + i);
        *(*(matriz_a.get_matrix() + 0) + i) = *(*(matriz_a.get_matrix() + 1) + i);
        *(*(matriz_a.get_matrix() + 1) + i) = aux;
    }
    for (int i = 0; i < longitud; i++) {
        aux = *(*(matriz_a.get_matrix() + i) + 0);
        *(*(matriz_a.get_matrix() + i) + 0) = *(*(matriz_a.get_matrix() + i) + 1);
        *(*(matriz_a.get_matrix() + i) + 1) = aux;
    }
}
