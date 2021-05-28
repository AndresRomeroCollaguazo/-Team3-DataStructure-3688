  
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados 
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/

#include <iostream>
#include "Operations.h"
#include "Data.h"


int main()
{
	double d = 20.89;
	float b = 15.5f;
	int a = 5, b1 = 6;
	Data<float> datum(b, d);
	Operations operation(datum)
	printf("\nLa suma es %.2f", operation.operator +());
	printf("\nLa resta es %.2f", operation.operator -());
	return 0;
}
