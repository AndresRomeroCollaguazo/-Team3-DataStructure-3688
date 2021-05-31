/***********************************************************************
 * Module:  Matrix.h
 * Author:  avand
 * Modified: lunes, 31 de mayo de 2021 18:14:39
 * Purpose: Declaration of the class Matrix
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Matrix_h)
#define __Class_Diagram_1_Matrix_h

class Matrix
{
public:
   int** getMatrix(void);
   void setMatrix(int newMatrix[][10] );
   Matrix(int _matrix[][10] );
   ~Matrix();
   void enter_matrix(int m1[][10] );

protected:
private:
   int **matrix;


};

#endif