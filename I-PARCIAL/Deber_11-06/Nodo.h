#pragma once
#include <cstddef>

/***********************************************************************
 * Module:  Nodo.h
 * Author:
 * Modified: miércoles, 09 de junio de 2021 19:54:24
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
	

protected:
private:
	int date;
	Nodo* next;


};

#endif
