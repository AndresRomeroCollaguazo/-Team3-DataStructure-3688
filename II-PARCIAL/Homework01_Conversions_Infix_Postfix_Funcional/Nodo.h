#pragma once


class Nodo
{
public:
	~Nodo();
	char getDate(void);
	void setDate(char newDate);
	Nodo* getNext(void);
	void setNext(Nodo* newNext);
	Nodo(char value);


protected:
private:
	char date;
	Nodo* next;
};