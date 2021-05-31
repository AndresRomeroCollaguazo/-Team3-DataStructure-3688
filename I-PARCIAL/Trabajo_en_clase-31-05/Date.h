/***********************************************************************
 * Module:  Date.h
 * Author:  avand
 * Modified: lunes, 31 de mayo de 2021 10:40:28
 * Purpose: Declaration of the class Date
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Date_h)
#define __Class_Diagram_1_Date_h

class Person;

class Date
{
public:
   int getDay(void);
   void setDay(int newDay);
   int getMonth(void);
   void setMonth(int newMonth);
   int getYear(void);
   void setYear(int newYear);
   Date(int _day, int _month, int _year);
   ~Date();
   Date();

   Person* Person;

protected:
private:
   int day;
   int month;
   int year;


};

#endif