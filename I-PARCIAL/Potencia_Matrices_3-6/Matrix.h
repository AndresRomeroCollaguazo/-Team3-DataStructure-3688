/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Potencia de matrices
Fecha creación: 02/06/2021
Fecha de modificación: 03/06/2021 */

/***********************************************************************
 * Module:  Matrix.h
 * Author:  avand
 * Modified: miércoles, 2 de junio de 2021 15:47:51
 * Purpose: Declaration of the class Matrix
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Matrix_h)
#define __Class_Diagram_1_Matrix_h
/**
*@file Matrix.h
*@version 1.0
*@date 03/06/2021
*@autor Grupo 3
*@title Elevar una matriz
*/
class Matrix
{
public:
   int** getMatrix(void);
   void setMatrix(int** newMatrix);
   int getDim(void);
   void setDim(int dim);
   /**
   *@brief Matrix Crea la matriz
   *@param _matrix matriz
   *@param dim dimension de la matriz
   */
   Matrix(int** _matrix,int dim);
   /**
   *@brief ~Matrix  Destructor
   *@param 
   */
   ~Matrix();

protected:
private:
   int** matrix;
   int dim;


};

#endif
