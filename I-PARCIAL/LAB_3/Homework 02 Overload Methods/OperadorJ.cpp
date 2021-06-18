#include <iostream>
#include "OperadorJ.h"
#include "OperatorM.h"

float OperadorJ::mateEasy(float dato) {
	return dato + 2;
}

float OperadorJ::mateEasy(double dato) {
	return dato + 2;
}

float OperadorJ::mateEasy(int dato) {
	return dato + 2;
}


float OperadorJ::operator %(float dato) {
	return dato / float(2);
}

float OperadorJ::operator +(float dato) {
	return dato + 2;
}

float OperadorJ::operator *(float dato) {
	return dato * 2;
}
