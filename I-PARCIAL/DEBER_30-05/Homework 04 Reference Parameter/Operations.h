/* Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Memoria Estática
Fecha creación : 28 / 05 / 2021
Fecha de modificación : 30 / 05 / 2021 */

#pragma once
#include "Vector.h"
/**
  *@brief Operations clase operations 
  */
class Operations
{
public:
/**
  *@brief constructor Operations
  */
	Operations();
/**
  *@brief wax Enceramos el vector
  *@param Vector& puntero que hace relacion al vector
  */
	void wax(Vector &);
/**
  *@brief get_into Ingresamos datos aleatorios en el vector
  *@param Vector& puntero que hace relacion al vector
  */
	void get_into(Vector &);
/**
  *@brief process Calcula el promedio del vector entero
  *@param Vector& puntero que hace relacion al vector
  *@return float valor del promedio 
  */
	float process(Vector&);
	/**
  *@brief print Imprimimos el vector resultante
  *@param Vector& puntero que hace relacion al vector
  */
	void print(Vector &);
};

