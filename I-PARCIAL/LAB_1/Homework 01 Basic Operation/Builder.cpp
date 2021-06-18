/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 22/05/2021
Fecha modificación: 27/05/2021*/
/***********************************************************************/

#include "Builder.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

template <typename datatype>
Builder <datatype>::Builder(datatype _value1, datatype _value2) {
	value1 = _value1;
	value2 = _value2;

}

template <typename datatype>
void Builder <datatype>::set_Value1(datatype _value1) {
	_value1 = value1;

}
template <typename datatype>
datatype Builder  <datatype>::get_Value1() {
	return value1;//@return generic data

}
template <typename datatype>
void Builder  <datatype>::set_Value2(datatype _value2) {
	value2 = _value2;//@assign generic data

}
template <typename datatype>
datatype Builder  <datatype>::get_Value2() {
	return value2;//@return generic data

}

template class Builder<int>;
template class Builder<double>;
template class Builder<float>;