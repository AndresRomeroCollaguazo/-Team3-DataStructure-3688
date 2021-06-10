#pragma once
/***********************************************************************
 * Module:  List.h
 * Author:
 * Modified: miércoles, 09 de junio de 2021 19:50:15
 * Purpose: Declaration of the class List
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_2_List_h)
#define __UML_Class_Diagram_2_List_h

class Nodo;



class List
{
public:
	void insertToHead(int _value);
	void insertToTail(int _value);
	void deleteToHead(void);
	void deleteToTail(void);
	void printList(void);
	Nodo* getActual(void);
	void setActual(Nodo* newActual);
	Nodo* getFirst(void);
	void setFirst(Nodo* newFirst);
	
	List();
	~List();

	Nodo* nodo;

protected:
private:
	bool emplyList(void);

	Nodo* first;
	Nodo* actual;


};

#endif
