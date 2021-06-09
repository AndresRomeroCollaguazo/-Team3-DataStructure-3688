/***********************************************************************
 * Module:  Pascal.h
 * Author:  Jorge
 * Modified: martes, 08 de junio de 2021 20:47:12
 * Purpose: Declaration of the class Pascal
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_Pascal_Pascal_h)
#define __UML_Class_Diagram_Pascal_Pascal_h

class Pascal
{
public:
   void Pacal(int _n, int _res);
   void graficPascal(int** _matrix);
   void verify(void);
   int fact(int n);
   int combination(int n, int r);
   void pascal(int curline, int nlines, int** matrix, int row);
   int get_n(void);
   void set_n(int _n);
   void pool(void);

protected:
private:
   int n;
   int res;


};

#endif