/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Fechas de pago
Fecha creaci�n: 28/05/2021
Fecha de modificaci�n: 01/06/2021 */
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