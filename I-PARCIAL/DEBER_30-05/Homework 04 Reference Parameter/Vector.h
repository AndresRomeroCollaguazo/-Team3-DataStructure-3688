/* Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Memoria Estática
Fecha creación : 28 / 05 / 2021
Fecha de modificación : 30 / 05 / 2021 */

/**
  * @file Vector.h
  * @version 1.0
  * @author GRUPO 3
  * @title Memoria Estatica
  * @brief clase Vector
  */

#pragma once
  /**
	*@brief Vector clase Vector 
	*/
class Vector
{
private:

	int vector_1[10];
public:
/**
  *@brief constructor Operations
  * @param int[10] vector de 10 posiciones
  */
	Vector(int[10]);
	/**
  *@brief constructor Operations por defecto
  */
	Vector() =default;
	
public:
	/**
  *@brief getVector_1 Obtiene el vector atributo
  * @return int* retorna la referencia del vector
  */
	int* getVector_1();
/**
  *@brief setVector_1 Setea el vector y lo coloca en el atributo
  * @param int[10] vector de 10 posiciones
  */
	void setVector_1(int[10]);
	/**
  *@brief ~Vector Destructor de la clase vector
  */
	~Vector();
};

