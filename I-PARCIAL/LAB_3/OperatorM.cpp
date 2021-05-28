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