/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Fechas de pago
Fecha creación: 28/05/2021
Fecha de modificación: 01/06/2021 */
#pragma once

class Date
{
private:
	int vect[3];
public:
	Date(int, int, int);
	Date() = default;
	void setDay(int);
	int getDay();
	void setMonth(int);
	int getMonth();
	void setYear(int);
	int getYear();


};