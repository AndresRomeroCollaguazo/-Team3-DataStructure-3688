/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Potencia de matrices
Fecha creación: 02/06/2021
Fecha de modificación: 03/06/2021 */
/***********************************************************************
 * Module:  Fuctions.h
 * Author:  avand
 * Modified: miércoles, 2 de junio de 2021 16:01:36
 * Purpose: Declaration of the class Fuctions
 ***********************************************************************/

/**
*@file Fuctions.h
*@version 1.0
*@date 03/06/2021
*@autor Grupo 3
*@title Clase para le manejo de funciones
*/
#include "Matrix.h"
#if !defined(__Class_Diagram_1_Fuctions_h)
#define __Class_Diagram_1_Fuctions_h

class Fuctions
{
public:
	/**
   *@brief Wax Enceramos la matriz
   *@param Matrix matriz
   */
	void wax(Matrix&);
	/**
   *@brief segment segmenta la matriz
   *@param Matrix Matriz
   */
	void segment(Matrix&);
	/**
   *@brief fill Llena la matriz
   *@param Matrix Matriz
   *@param dim dimension de la matriz
   */
	void fill(Matrix&, int dim);
	/**
   *@brief Calculater Calcula la matriz
   *@param 	Matrix matriz
   *@param  Matrix matriz
   *@param dim dimension de la matriz
   *@param  num dimension de la matriz
   */
	void calculate(Matrix&, Matrix&, int dim,int num);
	/**
   *@brief print Imprime la matriz
   *@param _matrix matriz
   */
   	void print(Matrix&);
	
	
	int** multiplication(Matrix& m, Matrix& m1, Matrix& mr);


	void powM(Matrix& m, Matrix& m1, int p);
 
private:

};

#endif
