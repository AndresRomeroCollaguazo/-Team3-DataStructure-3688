#pragma once
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Funciones Trigonometricas
Fecha creaci�n: 04/06/2021
Fecha de modificaci�n: 06/06/2021 */


class Datum
{
public:
	
	double getDatum(void);	
	void setDatum(double newDatum);	
	Datum(double _datum);	
	~Datum();

private:
	double datum;


};

