/* Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Memoria Estática
Fecha creación : 28 / 05 / 2021
Fecha de modificación : 30 / 05 / 2021 */


#include <iostream>
#include "Vector.h";
#include "Validate.h"
#include "Operations.h";
#pragma warning(disable : 4996)
using namespace std;
int main()
{
	char cad[10];
	int valor, i;
	Validate v;
	int vector[10];
	cout << "                     INGRESE 10 DATOS PARA LLENAR SU VECTOR (SOLO NUMEROS)" << endl;
	for (i = 0; i < 10; i++)
	{
		strcpy(cad, v.ingresar("\nIngrese el valor entero ->"));
		valor = atoi(cad);
		vector[i] = valor;
	}
	Vector v1(vector);
	Operations op;
		
	cout << "\n\nVector original " << endl;
	op.print(v1);
	op.get_into(v1);
	op.print(v1);
	
	cout << op.process(v1);
	
	op.wax(v1);
	op.print(v1);
}
