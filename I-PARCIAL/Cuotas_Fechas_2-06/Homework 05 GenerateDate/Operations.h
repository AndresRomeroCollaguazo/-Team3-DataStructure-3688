/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Fechas de pago
Fecha creación: 28/05/2021
Fecha de modificación: 01/06/2021 */
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