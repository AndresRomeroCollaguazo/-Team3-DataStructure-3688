#include <iostream>
using namespace std;
/**
*@file OperadorJ.h
*@version 1.0
*@date 17/06/2021
*@autor Grupo 3
*@title Validacion
*/
class OperadorJ {
private:
public:

	/**
	  *@brief OperadorJ()
	  *@param 
	  *@return char* 
	  */
	OperadorJ() = default;

	/**
	  *@brief mateEasy
	  *@param float
	  *@return float
	  */
	float mateEasy(float);

	/**
	  *@brief mateEasy
	  *@param float
	  *@return float
	  */
	float mateEasy(double);

	/**
	  *@brief mateEasy
	  *@param double
	  *@return float
	  */
	float mateEasy(int);

	/**
	  *@brief mateEasy
	  *@param int
	  *@return float
	  */
	float operator %(float);

	/**
	  *@brief operator %
	  *@param float
	  *@return float
	  */
	float operator +(float);

	/**
	  *@brief operator +
	  *@param float
	  *@return float
	  */
	float operator *(float);

};