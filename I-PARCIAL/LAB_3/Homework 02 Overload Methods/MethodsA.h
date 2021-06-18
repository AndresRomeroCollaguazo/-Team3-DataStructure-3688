/***********************************************************************
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/

#if !defined(__Class_Diagram_1_Metodos_h)
#define __Class_Diagram_1_Metodos_h
/**
*@file MethodsA.h
*@version 1.0
*@date 17/06/2021
*@autor Grupo 3
*@title Metodos
*/

class Methods
{
public:
	/**
	  *@brief get_Value_B getter de valueB
	  *@param void
	  *@return double
	  */
	double get_Value_B(void);

	/**
	  *@brief set_Value_B setter de valueB
	  *@param new_Value_B valor
	  *@return void
	  */
	void set_Value_B(double new_Value_B);

	/**
	  *@brief get_Value_A getter de valueA
	  *@param void
	  *@return int
	  */
	int get_Value_A(void);

	/**
	  *@brief set_Value_A
	  *@param new_Value_A
	  *@return 
	  */
	void set_Value_A(int new_Value_A);

	/**
	  *@brief get_Value_C
	  *@param 
	  *@return float
	  */
	float get_Value_C(void);

	/**
	  *@brief set_Value_C
	  *@param new_Value_C
	  *@return void
	  */
	void set_Value_C(int new_Value_C);

	/**
	  *@brief Methods() 
	  *@param 
	  *@return 
	  */
	Methods() = default;

	/**
	  *@brief Methods
	  *@param new_Value_A,new_Value_B,new_Value_C
	  *@return 
	  */
	Methods(int new_Value_A, double new_Value_B, float new_Value_C);

	/**
	  *@brief multiplication
	  *@param value
	  *@return double
	  */
	double multiplication(int value);

	/**
	  *@brief multiplication
	  *@param value
	  *@return double
	  */
	double multiplication(double value_A, int value_B);

	/**
	  *@brief multiplication
	  *@param double value_A, int value_B
	  *@return double
	  */
	double multiplication(float value_A, double value_B, int value_C);

	/**
	  *@brief multiplication
	  *@param float value_A, double value_B, int value_C
	  *@return double
	  */
protected:
private:
	int value_A;
	double value_B;
	float value_C;
};

#endif