/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 22/05/2021
Fecha modificación: 27/05/2021*/
/***********************************************************************/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Builder.h"
#include "Operation.h"
#include "Check_Validate.h"
#pragma warning(disable : 4996) .
using namespace std;

int main(int argc, char** argv) {

	Validate check;
	char* line = new char[10];
	char* line2 = new char[10];
	int value1, value2;
	strcpy(line, check.validate_Char("ingrese valor 1 -> "));
	value1 = atof(line);
	cout << "\nValor Ingresado: " <<value1<< endl;
	strcpy(line2, check.validate_Char("ingrese valor 2 -> "));
	value2 = atof(line2);
	cout << "\nValor Ingresado: " << value2<<endl;
	

	Builder<int> c(value1, value2);
	Operation<float> o;

	cout << "Suma = " << o.sum(c.get_Value1(), c.get_Value2()) << endl;
	cout << "Resta = " << o.subtraction(c.get_Value1(), c.get_Value2()) << endl;
	cout << "Multiplicacion = " << o.multiplication(c.get_Value1(), c.get_Value2()) << endl;
	cout << "Division = " << o.division(c.get_Value1(), c.get_Value2()) << endl;

	return 0;

}