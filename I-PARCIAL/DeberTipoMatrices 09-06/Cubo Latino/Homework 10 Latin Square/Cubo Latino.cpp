/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Grupo3
Deber de Cubo latino
Fecha creación : 04 / 06 / 2021
Fecha de modificación : 18 / 06 / 2021 */
#include <stdio.h>
#include <iostream>
#include "Fuction.h"
#include "Datum.h"
#include"Validate.h"
using namespace std;
#pragma warning(disable : 4996)
int main(void) {
	int b;
	char cad[10];
	Validate v;
	int* vector = new int[10], i = 0, n, a1, a2, a3, a4;
	cout << "CUADRADO LATINO\n";
	strcpy(cad, v.ingresar("\nIntroduzca la cantidad de elementos: "));
	n = atoi(cad);
	
	for (i = 0; i < n; i++) {
		strcpy(cad, v.ingresar("\nIngrese los elementos distintos: \n"));
		b = atoi(cad);
		*(vector + i)=b;
	}
	Datum d(vector);
	Fuction f;

	a1 = 0;
	a2 = n - 1;
	a3 = n;
	a4 = n - 1;
	i = f.cube(d.getVector(), a1, a2, a3, a4);
	return(i);
}