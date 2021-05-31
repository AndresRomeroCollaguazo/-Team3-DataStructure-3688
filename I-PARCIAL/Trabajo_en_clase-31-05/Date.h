/* Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de clases
Fecha creación : 31 / 05 / 2021
Fecha de modificación : 31 / 05 / 2021 */

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
