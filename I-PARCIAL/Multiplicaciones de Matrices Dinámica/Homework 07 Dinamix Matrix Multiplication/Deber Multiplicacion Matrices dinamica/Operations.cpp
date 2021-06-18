#include "Operations.h"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "Matrix.h"
#include <iostream>
#include "Validation.h"

#pragma warning(disable : 4996)

using namespace std;

int** Operations::segment(int dim) {
    Matrix matrix;
    int j;
    matrix.set_matrix((int**)malloc(dim * sizeof(int*)));
    for (j = 0; j < dim; j++) {
    *(matrix.get_matrix() + j) = 
        (int*)malloc(dim * sizeof(int));
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
    char can[10];
    Validation v;
    int p;
    cout << "       Ingrese los datos:" << endl;
    for (i = 0; i < dim; i++) {
    for (j = 0; j < dim; j++) {
        cout << "       POSICION[" << i + 1 << "]" << "[" << j + 1 << "] :";
        //strcpy(can, v.ingresar(""));
        //p = atoi(can);
       //*(*(matrix.get_matrix() + i) + j) = 0;
        //*(*(matrix.get_matrix() + i) + j) = p;
        cin >> (*(*(matrix.get_matrix() + i) + j));
    }
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
void Operations::printAll(Matrix matrix, int dim) {
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
