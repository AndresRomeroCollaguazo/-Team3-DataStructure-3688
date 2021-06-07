/ *Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Funciones Trigonometricas
Fecha creaci�n : 06 / 04 / 2021
Fecha de modificaci�n : 06 / 06 / 2021 * /
/ **
*@file Datum.h
* @version 1.0
* @ fecha 06 - 06 - 2021
* @autora Jorge Andres Romero Collaguazo
* @brief funcion tangente con recursividad
* @ t�tulo Tan - Recursividad
*
*/
#pragma once
class Datum {
private:
	double datum;

public: 
	/ **
	*@brief getDatum Devuelve el contenido del atributo datum
	* @return Devuelve el atributo datum
	* /
	double getDatum(void);
	/ **
		*@brief setDatum Recibe el contenido del atributo datum
		* @param newDatum coloca un nuevo dato en el atributo
		* /
	void setDatum(double newDatum);
	/ **
		*@brief Constructor de la clase Datum
		* @param _datum atributo nuevo del objeto
		* /
	Datum(double _datum);
	/ **
		*@brief Destructor de la clase Datum
		* /
	~Datum();
};