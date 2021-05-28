/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Taller de Operadores Sobrecargados
Fecha creaci�n: 22/05/2021
Fecha modificaci�n: 27/05/2021*/
/***********************************************************************/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "BuilderHeader.h"
#include "OperationHeader.h"

using namespace std;

int main(int argc, char** argv) {
	float value1, value2;
	cout << "ingrese valor 1 -> ";
	cin >> value1;
	cout << "ingrese valor 2 -> ";
	cin >> value2;

	BuilderHeader<float> c(value1,value2);
	OperationHeader<float> o;

	cout << "Suma = " << o.sum(c.get_Value1(), c.get_Value2()) << endl;
	cout << "Resta = " << o.subtraction(c.get_Value1(),c.get_Value2()) << endl;
	cout << "Multiplicacion = " << o.multiplication(c.get_Value1(),c.get_Value2()) << endl;
	cout << "Division = " << o.division(c.get_Value1(),c.get_Value2()) << endl;

	return 0;

}