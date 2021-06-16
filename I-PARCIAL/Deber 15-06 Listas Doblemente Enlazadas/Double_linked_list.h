/***********************************************************************
 * Module:  Double_Linked_List.h
 * Author:  Jorge
 * Modified: martes, 15 de junio de 2021 16:38:21
 * Purpose: Declaration of the class Double_Linked_List
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_2_Double_Linked_List_h)
#define __UML_Class_Diagram_2_Double_Linked_List_h

class Nodo;

#include <Nodo.h>

class Double_Linked_List
{
public:
   void insert_to_Head(int value);
   void rove(void);
   bool emply_List(void);
   void insert_Between(int value);
   void insert_to_Tail(int value);
   void consult(int value);
   Double_Linked_List();
   ~Double_Linked_List();
   void delete(void);
   void print(void* std::function<void_int,int_>callback);

   Nodo* nodo;

protected:
private:
   Nodo* last_Nodo(void);

   int size;
   Nodo* head;


};

#endif
