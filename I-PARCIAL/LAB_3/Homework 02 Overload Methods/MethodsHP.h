/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/
/***********************************************************************/
#pragma once
#include <iostream>
/**
*@file MethodsHP.h
*@version 1.0
*@date 17/06/2021
*@autor Grupo 3
*@title Validacion
*/
class MethodsHP
{
private:
	float valueA;
	double valueB;
	int valueC;

public:
	/**
	  *@brief get_ValueA
	  *@param 
	  *@return float 
	  */
	float get_ValueA(void);

	/**
	  *@brief set_ValueA
	  *@param float newValueA
	  *@return
	  */
	void set_ValueA(float newValueA);

	/**
	  *@brief get_ValueB
	  *@param 
	  *@return double
	  */
	double get_ValueB(void);

	/**
	  *@brief set_ValueB
	  *@param double newValueB
	  *@return 
	  */
	void set_ValueB(double newValueB);

	/**
	  *@brief get_ValueC
	  *@param 
	  *@return int
	  */
	int get_ValueC(void);

	/**
	  *@brief set_ValueC
	  *@param int newValueC
	  *@return 
	  */
	void set_ValueC(int newValueC);

	/**
	  *@brief MethodsHP
	  *@param 
	  *@return 
	  */
	MethodsHP() = default;

	/**
	  *@brief MethodsHP
	  *@param float newValueA, double newValueB, int newValueC
	  *@return 
	  */
	MethodsHP(float newValueA, double newValueB, int newValueC);

	/**
	  *@brief addition
	  *@param float valueA
	  *@return double
	  */
	double addition(float valueA);

	/**
	  *@brief addition
	  *@param float valueA
	  *@return double
	  */
	double addition(double valueB, float valueA);

	/**
	  *@brief addition
	  *@param int valueC, double valueB, float valueA
	  *@return double
	  */
	double addition(int valueC, double valueB, float valueA);

};