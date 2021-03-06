/***********************************************************************
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Multiplicacion de matrices
Fecha creación: 31/05/2021
Fecha de modificación: 01/06/2021 */
/***********************************************************************
 * Module:  Matrix.h
 * Author:  avand
 * Modified: martes, 1 de junio de 2021 17:39:08
 * Purpose: Declaration of the class Matrix
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Matrix_h)
#define __Class_Diagram_1_Matrix_h

class Matrix
{
public:
	void setMatrix(int );
	Matrix(int** _matrix, int _row, int _column);
	~Matrix();
	int rove_Matrix(int i, int j);
	int getMatrix(void);

protected:
private:
	int matrix[10][10];
	int row;
	int column;


};

#endif
