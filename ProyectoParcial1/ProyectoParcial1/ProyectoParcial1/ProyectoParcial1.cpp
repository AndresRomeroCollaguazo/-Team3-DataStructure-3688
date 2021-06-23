#include <iostream>
#include <stdlib.h>
#include "Datum.h"
# include "Operations.h"

using namespace std;

int sumaDigitos = 0;
int numeroRestar = 0;
int elementoFinal = 0;
int arreglo[10];
int digito;

int main() {
	
	int arg[9];
	//Datum* arreglo = arreglo + arg[9];
	int digito;
	/*
	Operations op;
	cout << "			INGRESA TU NUMERO DE CEDULA POR DIJITOS \n\n";
	cout << "Ingresa digito: ";
	cin >> digito;
	op.ingresoDijitos(*arreglo, digito);
	op.sumarDijitos(*arreglo);

	cout << "\nEl numero de cedula multiplicado es : \n";
	op.imprimirArreglo(*arreglo);

	op.duplicarDijitos(*arreglo);

	cout << "\nSuma de los 9 primeros digitos multiplicados por 2 y 1 de la cedula : \n";
	op.comprobacion(*arreglo);
	*/
	
	cout << "			INGRESA TU NUMERO DE CEDULA POR DIJITOS \n\n";
	for (int i = 0; i < 10; i++) {
		cout << "Ingresa digito: ";
		cin >> digito;
		arreglo[i] = digito;
	}

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

	cout << "\nEl numero de cedula multiplicado es : \n";
	for (int i = 0; i < 9; i++) {
		cout << arreglo[i] <<  " ";
	}

	for (int i = 0; i < 9; i++) {
		sumaDigitos = sumaDigitos + arreglo[i];
	}
	cout << "\nSuma de los 9 primeros digitos multiplicados por 2 y 1 de la cedula : \n";
	cout << sumaDigitos;
	
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
	if (sumaDigitos >= 40 && sumaDigitos <= 59)
	{
		numeroRestar = 50 - sumaDigitos;
	}
	if (sumaDigitos >= 60 && sumaDigitos <= 69)
	{
		numeroRestar = 60 - sumaDigitos;
	}
	if (sumaDigitos >= 70 && sumaDigitos <= 79)
	{
		numeroRestar = 70 - sumaDigitos;
	}
	if (sumaDigitos >= 80 && sumaDigitos <= 89)
	{
		numeroRestar = 80 - sumaDigitos;
	}
	if (sumaDigitos >= 90 && sumaDigitos <= 99)
	{
		numeroRestar = 90 - sumaDigitos;
	}
	
	cout << "\n Comprobacion : \n";
	elementoFinal = arreglo[9];
	if (numeroRestar == elementoFinal) {
		cout << "Tu cedula es correcta \n";
	}
	if (numeroRestar!= elementoFinal) {
		cout << "Tu cedula es incorrecta \n";
	}
	system("PAUSE");
	return 0;
}