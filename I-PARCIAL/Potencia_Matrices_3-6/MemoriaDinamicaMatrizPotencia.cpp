#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <algorithm>
#include "Fuctions.h"
using namespace std;
int main()
{
	Fuctions f;
	int dim,potencia;
	cout << "" << endl;
	cout << "Ingrese la dimension de las matrices -> ";
	cin >> dim;
	cout << "Ingrese la potencia a la que sera elevada -> ";
	cin >> potencia;
	
	int** mat1 = new int* [dim];
	int** mat2 = new int* [dim];
	int** mat3 = new int* [dim];
	for (int i = 0; i < dim; i++)
	{
		*(mat1 + i) = new int[dim];
	}
	for (int i = 0; i < dim; i++)
	{
		*(mat3 + i) = new int[dim];
	}
	Matrix m1(mat1, dim);
	Matrix m2(mat2, dim);
	Matrix m3(mat3, dim);
	f.segment(m1);
	
	f.wax(m1);
	f.segment(m3);
	f.wax(m3);
	cout << "MATRIZ 1" << endl;
	f.fill(m1, dim);
	for (int i = 0; i < potencia + 1; i++)
	{
		f.calculate(m1,m3,dim,potencia);
	}
	cout << "" << endl;
	cout << "MATRIZ RESULTANTE" << endl;
	f.print(m3);
}

