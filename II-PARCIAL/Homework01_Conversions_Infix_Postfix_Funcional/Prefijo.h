/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
** Deber de Notaciones y cambios a Infija, Prefija y Funcional.
** Fecha creaci�n : 02 / 07 / 2021
** Fecha de modificaci�n : 05 / 07 / 2021
*********************************************************************************************/

#pragma once
#include "Lista.h"
#include <string>
using namespace std;

class Prefijo
{
public:
	/**
	  * @brief Prefijo() genera un constructor vacio
	  * @return constructor
	  */
	Prefijo();
	/**
	  * @brief ~Prefijo() genera un destructor para liberar memoria
	  * @return destructor
	  */
	~Prefijo();
	/**
  * @brief identificar Permite que se reconozca los operandos
  * @param retorna el caracter del operando
  */
	int identificar(char o);
	/**
	  * @brief convertir Permite transformar de la expresion escrita en una notacion Prefija
	  * @param retorna el caracter del operando
	  */
	void convertir(string s);
};

