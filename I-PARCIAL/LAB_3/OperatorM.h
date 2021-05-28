/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/
/***********************************************************************/

#pragma once
#include<iostream>
using namespace std;
class OperatorM
{
  private:

  public:
   
	  OperatorM();
	  float forFiveHundred(float);
	  float forFiveHundred(int);
	  float forFiveHundred(double);

	  float operator +(float);
	  float operator *(float);
	  float operator -(float);
};

