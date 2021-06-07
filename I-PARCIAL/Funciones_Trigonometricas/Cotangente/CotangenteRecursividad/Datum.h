#pragma once
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Funciones Trigonometricas
Fecha creación: 04/06/2021
Fecha de modificación: 06/06/2021 */


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

