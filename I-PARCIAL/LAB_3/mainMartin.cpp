
#include <iostream>
#include "OperatorM.h"
using namespace std;

int main() {

	OperatorM op;

	float a = 125.1;
	int b = 180;
	double c = 128.3;

	cout << a << "por 500 es: " << op.forFiveHundred(a)<< endl;
	cout << b << "por 500 es: " << op.forFiveHundred(b) << endl;
	cout << c << "por 500 es: " << op.forFiveHundred(c) << endl;

	cout << a << "mas 500 es: " << op.operator+(a) << endl;
	cout << a << "menos 500 es: " << op.operator-(a) << endl;
	cout << a << "por 500 es: " << op.operator*(a) << endl;

	return 0;
}