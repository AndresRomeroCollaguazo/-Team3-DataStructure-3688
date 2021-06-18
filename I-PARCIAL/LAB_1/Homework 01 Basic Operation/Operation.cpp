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

using namespace std;
#include "Operation.h"


template <typename datatype>
datatype Operation<datatype>::sum(datatype _value1, datatype _value2) {
	return _value1 + _value2;
};

template <typename datatype>
datatype Operation<datatype>::subtraction(datatype _value1, datatype _value2) {
	return _value1 - _value2;
};

template <typename datatype>
datatype Operation<datatype>::multiplication(datatype _value1, datatype _value2) {
	return _value1 * _value2;
};

template <typename datatype>
datatype Operation<datatype>::division(datatype _value1, datatype _value2) {
	if (_value2 == 0)
	{
		cout << "NO SE PUEDE DIVIDIR !!!!" << endl;
	}
	else
		return _value1 / _value2;
};

template class Operation<int>;
template class Operation<double>;
template class Operation<float>;
