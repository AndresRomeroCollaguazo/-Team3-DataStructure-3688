/*Universidad de las Fuerzas Armadas "ESPE"
Ing. de Software
Autor: Pérez Hámilton
Deber de Matriz Diagonal
Fecha creación : 06 / 06 / 2021
Fecha de modificación : 08 / 06 / 2021 */
/**
  * @file Matrix.h
  * @version 1.0
  * @date 08-06-2021
  * @author Hamilton Dario Perez Zambrano
  * @title Objeto matrix
  * @brief Clase Matrix
  *
  */
#pragma once
#include <iostream>
  /**
	* @brief Clase Matrix que define La dimension de una Matriz
	*/
class Matrix
{
public:
	/**
	  * @brief getMatrix Devuelve el contenido del atributo Matriz
	  * @return Devuelve el atributo Matriz
	  */
	int** getMatrix(void);
	/**
	  * @brief setMatrix Setea el contenido del atributo Matriz
	  * @param newMatrix coloca nuevos datos en el atributo
	  */
	void setMatrix(int** newMatrix);
	/**
	  * @brief getDim Devuelve el tamaño del atributo Matriz
	  * @return Devuelve el atributo dim
	  */
	int getDim(void);
	/**
	  * @brief setDim Setea el tamaño del atributo matriz
	  * @param newVector coloca un nuevo dato en el dim
	  */
	void setDim(int dim);
	/**
	  * @brief Constructor de la clase Matrix
	  * @param _matrix y _dim atributos nuevo del objeto
	  */
	Matrix(int** _matrix, int _dim);
	/**
	  * @brief Destructor de la clase Matrix
	  */
	~Matrix();

protected:
private:
	int** matrix;
	int dim;


};