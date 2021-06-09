/***********************************************************************
 * Module:  Pascal.h
 * Author:  Martin
 * Modified: martes, 08 de junio de 2021 20:47:12
 * Purpose: Declaration of the class Pascal
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_Pascal_Pascal_h)
#define __UML_Class_Diagram_Pascal_Pascal_h

class Pascal
{
public:
	Pascal(int,int);
	void graficPascal(int**);
	void verify();
	int fact(int);
	int combination(int , int);
	void pascal(int , int ,int**,int);
	int get_n();
	void set_n(int );
	void pool(int**);

protected:
private:
   int n;
   int res;


};

#endif
