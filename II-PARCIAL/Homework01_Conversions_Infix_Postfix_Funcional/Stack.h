#pragma once
#include "Nodo.h"

class Stack
{
public:

	void push(char _value);
	void pop(void);
	char top(void);
	void printStack(void);
	Nodo* getActual(void);
	void setActual(Nodo* newActual);
	Nodo* getFirst(void);
	void setFirst(Nodo* newFirst);

	Stack();
	~Stack();
	friend class Operaciones;
protected:
private:
	bool empty(void);

	Nodo* first;
	Nodo* actual;


};