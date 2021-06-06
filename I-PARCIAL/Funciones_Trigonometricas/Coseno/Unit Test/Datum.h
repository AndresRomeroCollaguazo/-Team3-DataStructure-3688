/***********************************************************************
 * Module:  Datum.h
 * Author:  avand
 * Modified: sábado, 5 de junio de 2021 15:37:13
 * Purpose: Declaration of the class Datum
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Datum_h)
#define __Class_Diagram_1_Datum_h

class Datum
{
public:
   double getDatum(void);
   void setDatum(double newDatum);
   Datum(double _datum);
   ~Datum();

protected:
private:
   double datum;


};

#endif