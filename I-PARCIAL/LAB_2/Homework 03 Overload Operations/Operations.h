/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/

#include "Data.h"

/**
*@file Data.h
*@version 2.0
*@date 17/06/2021
*@autor Grupo 3
*@title Plantillas
*/

class Operations {
private:
	Data<float> data_set;
public:

	/**
	 *@brief Operations Constructor de la clase
	 *@param
	 *@return
	 */
	Operations() = default;

	/**
	 *@brief operator + Operador sobrecargado de la suma
	 *@param void
	 *@return float resultado
	 */
	float operator +();

	/**
	 *@brief operator - Operador sobrecargado de la resta
	 *@param void
	 *@return float resultado
	 */
	float operator -();

	/**
	 *@brief Data Destructor de la clase
	 *@param
	 *@return
	 */
	Operations(Data<float>);
};