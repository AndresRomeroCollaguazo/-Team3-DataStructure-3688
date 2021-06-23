# include "Operations.h"
#include <iostream>
#include <stdlib.h>

using namespace std;



void Operations::ingresoDijitos(Datum& d1, int digito)
{	
	int* ar = d1.getArreglo();
	for (int i = 0; i < 10; i++) {
		*ar = digito;
	}
}

void Operations::sumarDijitos(Datum& d1)
{
	int* arreglo = d1.getArreglo();
	for (int i = 0; i < 9; i++) {
		if (i == 0) {
			arreglo[i] = arreglo[i] * 2;
			if (arreglo[i] >= 10) {
				arreglo[i] = arreglo[i] - 9;
			}
		}
		if ((i % 2 == 0) && (i != 0)) {
			arreglo[i] = arreglo[i] * 2;
			if (arreglo[i] >= 10) {
				arreglo[i] = arreglo[i] - 9;
			}
		}
		if ((i % 2 != 0) && (i != 0)) {
			arreglo[i] = arreglo[i] * 1;
			if (arreglo[i] >= 10) {
				arreglo[i] = arreglo[i] - 9;
			}
		}

	}
}
void Operations::imprimirArreglo(Datum& d1)
{
	int* arreglo = d1.getArreglo();
	for (int i = 0; i < 9; i++) {
		cout << arreglo[i] << " ";
	}
}
int Operations::duplicarDijitos(Datum& d1)
{
	int* arreglo = d1.getArreglo();
	int sumaDigitos = 0;
	for (int i = 0; i < 9; i++) {
		sumaDigitos = sumaDigitos + arreglo[i];
	}
	return sumaDigitos;
}

void Operations::comprobacion(Datum& d1)
{
	Operations op;
	int* arreglo = d1.getArreglo();
	int sumaDigitos = op.duplicarDijitos(d1);
	int numeroRestar = 0;
	int elementoFinal = 0;
	if (sumaDigitos >= 20 && sumaDigitos <= 29)
	{
		numeroRestar = 30 - sumaDigitos;
	}
	if (sumaDigitos >= 10 && sumaDigitos <= 19)
	{
		numeroRestar = 20 - sumaDigitos;
	}
	if (sumaDigitos >= 30 && sumaDigitos <= 39)
	{
		numeroRestar = 40 - sumaDigitos;
	}

	cout << "\n Comprobacion : \n";
	elementoFinal = arreglo[9];
	if (numeroRestar == elementoFinal) {
		cout << "Tu cedula es correcta \n";
	}
	if (numeroRestar != elementoFinal) {
		cout << "Tu cedula es incorrecta \n";
	}
}