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

class Funcional
{
public:
	/**
	  * @brief Funcional() genera un constructor vacio
	  * @return constructor
	  */
	Funcional();
	/**
	  * @brief ~Funcional() genera un destructor para liberar memoria
	  * @return destructor
	  */
	~Funcional();
	/**
	  * @brief identificar Permite que se reconozca los operandos
	  * @param retorna el caracter del operando
	  */
	int identificar(char o);
	/**
	  * @brief compararSigno Permite que se compare los operandos y los reemplaze
	  * @param retorna el reemplazo del operando
	  */
	string compararSigno(char temporal);
	/**
	  * @brief convertir Permite transformar de la expresion escrita en una notacion Funcional
	  * @param retorna el caracter del operando
	  */
	void convertir(string s);
};