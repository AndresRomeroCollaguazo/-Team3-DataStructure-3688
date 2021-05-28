/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/
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
	return datum - 500;
}
float OperatorM::operator -(float datum) {
	return datum * 500;
}
