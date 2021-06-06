/***********************************************************************
 * Module:  SerieSec.h
 * Author:  Jorge
 * Modified: domingo, 06 de junio de 2021 14:24:06
 * Purpose: Declaration of the class SerieSec
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_Secante_SerieSec_h)
#define __UML_Class_Diagram_Secante_SerieSec_h

class SerieSec
{
public:
   SerieSec();
   int factorial(int n);
   float serie(double sec, int i, int rec);
   ~SerieSec();
   int value(int p);

protected:
private:

};

#endif