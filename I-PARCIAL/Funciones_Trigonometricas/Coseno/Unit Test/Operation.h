/***********************************************************************
 * Module:  Operation.h
 * Author:  avand
 * Modified: sábado, 5 de junio de 2021 15:39:14
 * Purpose: Declaration of the class Operation
 ***********************************************************************/
#include"Datum.h"

#if !defined(__Class_Diagram_1_Operation_h)
#define __Class_Diagram_1_Operation_h

class Operation
{
public:
   int factorial(int n);
   double coseno(Datum d , int n);

protected:
private:

};

#endif