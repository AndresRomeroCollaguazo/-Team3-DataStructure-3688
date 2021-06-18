/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Taller de Operadores Sobrecargados
Fecha creaci�n: 26/05/2021
Fecha modificaci�n: 27/05/2021*/
/***********************************************************************/

#include "OperatorM.h"
#include<iostream>
#include "OperatorM.h"

OperatorM::OperatorM() {

}

float OperatorM::forFiveHundred(float datum) {
	return datum * 500;
}

float OperatorM::forFiveHundred(int datum) {
	return float(datum * 500);
}

float OperatorM::forFiveHundred(double datum) {
	return float(datum * 500);
}

float OperatorM::operator +(float datum) {
	return datum + 500;
}

float OperatorM::operator *(float datum) {
	return datum * 500;
}
float OperatorM::operator -(float datum) {
	return datum - 500;
}
