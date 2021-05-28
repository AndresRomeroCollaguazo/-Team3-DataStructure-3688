/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Taller de Operadores Sobrecargados
Fecha creaci�n: 22/05/2021
Fecha modificaci�n: 27/05/2021*/
/***********************************************************************/

#pragma once
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

#ifndef BUILDERHEADER_H
#define BUILDERHEADER_H

template <typename datatype>
class BuilderHeader {
private:
	datatype value1;
	datatype value2;
public:
	void set_Value1(datatype);
	BuilderHeader(datatype, datatype);
	datatype get_Value1();
	void set_Value2(datatype);
	datatype get_Value2();
};


#endif // !BUILDER_H

