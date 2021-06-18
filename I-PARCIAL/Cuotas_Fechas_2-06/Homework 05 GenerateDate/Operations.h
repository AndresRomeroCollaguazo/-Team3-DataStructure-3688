/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Fechas de pago
Fecha creaci�n: 28/05/2021
Fecha de modificaci�n: 01/06/2021 */
#pragma once

#include "Date.h"
class Operations
{
public:
	bool is_laborable(Date date);
	int generate_Week_Day(Date date);
	void print(Date[], int dues);
	Date enter_Date();
	bool is_Leap(int year);
};