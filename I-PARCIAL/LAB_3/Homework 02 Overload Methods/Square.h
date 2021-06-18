#pragma once

#include<iostream>
using namespace std;
/**
*@file Square.h
*@version 1.0
*@date 17/06/2021
*@autor Grupo 3
*@title Validacion
*/
class Square {
private:

public:
	/**
	  *@brief Square
	  *@param
	  *@return 
	  */
	Square();

	/**
	  *@brief mesuales
	  *@param float,float
	  *@return float
	  */
	float mesuares(float, float);

	/**
	  *@brief mesuales
	  *@param float
	  *@return float
	  */
	float mesuares(float);

	/**
	  *@brief mesuales
	  *@param double
	  *@return float
	  */
	float mesuares(double);

	/**
	  *@brief operator -
	  *@param float
	  *@return float
	  */
	float operator -(float);

	/**
	  *@brief operator *
	  *@param float
	  *@return float
	  */
	float operator *(float);

	/**
	  *@brief operator /
	  *@param float
	  *@return float
	  */
	float operator /(float);

};
