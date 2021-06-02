/**
  * @file Fuctions.h
  * @version 1.0
  * @author GRUPO 3
  * @title Multiplicacion de 2 Matrices
  * @brief Funciones de utilería
  */



/***********************************************************************
 * Module:  Fuctions.h
 * Author:  avand
 * Modified: martes, 1 de junio de 2021 17:42:10
 * Purpose: Declaration of the class Fuctions
 ***********************************************************************/
#include "Matrix.h"
#if !defined(__Class_Diagram_1_Fuctions_h)
#define __Class_Diagram_1_Fuctions_h

class Fuctions
{
public:
/**
  *@brief multiplication Multiplicamos las 2 matrices
  *@param m1,m2mrow1,column1,column2  Formamos la matriz
  *@return Resultado de la multiplicacion  
  */
	int** multiplication(Matrix m1, Matrix m2, int row1, int column1, int column2);
/**
  *@brief pritnf Imprime la matriz resultante
  *@param m1,row,column  Formamos la matriz
  *@return Resultado de la multiplicacion  
  */
	void print(Matrix m1, int row, int column);
/**
  *@brief fill_Matrix Llenamos la matriz
  *@param mrow1,column,m1  Formamos la matriz
  *@return Llenamos la matriz  
  */	
	
	void fill_Matrix(int row, int column, int** m1);
/**
  *@brief verify verifica las 2 matrices
  *@param column1,column2  Formamos la matriz
  *@return Verifica  
  */
	int verify(int column1, int row2);

protected:
private:

};

#endif
