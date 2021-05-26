/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operaciones Básicas
Fecha creación: 19/05/2021
Fecha modificación: 20/05/2021*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

template <typename tipoDato>
class Operaciones{
	private :
		tipoDato valor1;
		tipoDato valor2;
	public :
		Operaciones(tipoDato _valor1, tipoDato _valor2);
		void setValor1(tipoDato _valor1);
		tipoDato getValor1();
		void setValor2(tipoDato _valor2);
		tipoDato getValor2();
		string to_String();
		#include "Operaciones.h"
		
};
