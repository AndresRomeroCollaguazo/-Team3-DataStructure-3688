/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Potencia de matrices
Fecha creación: 02/06/2021
Fecha de modificación: 03/06/2021 */
#pragma once
#include "Operations.h"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "Matrix.h"
#include <iostream>
using namespace std;

int** Operations::segment(int dim) {
    Matrix matrix;
    int j;
    matrix.set_matrix((int**)malloc(dim * sizeof(int*)));
    for (j = 0; j < dim; j++) {
        *(matrix.get_matrix() + j) = (int*)malloc(dim * sizeof(int));
    }
    return matrix.get_matrix();
}
void Operations::wax(Matrix matrix, int dim) {
    int i, j;
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++)
            *(*(matrix.get_matrix() + i) + j) = 0;
}
void Operations::enter(Matrix matrix, int dim) {
    int i, j;
    cout << "Ingrese los datos:" << endl;
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++) {
            cout << "[" << i + 1 << "]" << "[" << j + 1 << "] :";
            cin >> (*(*(matrix.get_matrix() + i) + j));
        }
}
void Operations::multiply(Matrix matrix_1, Matrix matrix_2, Matrix matrix_r, int dim) {
    int i, j, k;
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
        for (k = 0; k < dim; k++) {
            *(*(matrix_r.get_matrix() + i) + j) = 
            *(*(matrix_r.get_matrix() + i) + j) + 
            *(*(matrix_1.get_matrix() + i) + k) * 
            *(*(matrix_2.get_matrix() + k) + j);
        }
        }
    }
}
void Operations::print_All(Matrix matrix, int dim) {
    int i, j;
    printf("\n");
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            printf("%d", *(*(matrix.get_matrix() + i) + j));
            printf("%*s", j + 5, "");
        }
        printf("\n");
    }
}

void Operations::copy(Matrix m1, Matrix m2, int dim) {
    int i, j;
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            *(*(m1.get_matrix() + i) + j) = 
                *(*(m2.get_matrix() + i) + j);
        }
    }
}

void Operations::boosted(Matrix m1, Matrix mr, int dim, int potencia) {
    int i = 0, j = 0;
    Matrix m2;
    m2.set_matrix(segment(dim));
    wax(m2, dim);
    copy(m2, m1, dim);
    copy(mr, m1, dim);
    if (potencia == 0) {
        wax(mr, dim);
        for (j = 0; j < dim; j++)
            *(*(mr.get_matrix() + j) + j) = 1;
    }
    for (i = 0; i < potencia - 1; i++) {
        wax(mr, dim);
        multiply(m2, m1, mr, dim);
        copy(m2, mr, dim);

    }



}
