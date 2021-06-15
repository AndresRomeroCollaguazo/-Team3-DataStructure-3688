/***********************************************************************
 * Module:  Nodo.h
 * Author:  Jorge
 * Modified: martes, 15 de junio de 2021 16:19:04
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_2_Nodo_h)
#define __UML_Class_Diagram_2_Nodo_h

class Nodo
{
public:
   ~Nodo();
   int getDate(void);
   void setDate(int newDate);
   Nodo* getNext(void);
   void setNext(Nodo* newNext);
   Nodo(int value);
   Nodo* getPrevious(void);
   void setPrevious(Nodo* newPrevious);

protected:
private:
   int date;
   Nodo* next;
   Nodo* previous;


};

#endif