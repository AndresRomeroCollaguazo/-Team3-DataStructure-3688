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
	#include "estructura.h"
	public :
		Operaciones(tipoDato _valor1, tipoDato _valor2)
		{
			valor1=_valor1;
			valor2=_valor2;
		}
		void setValor1(tipoDato valor_1)
		{
			valor1=valor_1;
		}
		tipoDato getValor1()
		{
			return valor1;
		}
		void setValor2(tipoDato valor_2)
		{
			valor2=valor_2;
		}
		tipoDato getValor2()
		{
			return valor2;
		}
		string to_String(){
			//return std::to_string(3.1415926);
		}
		#include "operaciones.h"
		
	
		
};
