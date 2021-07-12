#pragma once
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Taller
Fecha creaci�n : 13 / 06 / 2021
Fecha de modificaci�n : 21 / 06 / 2021 */

#if !defined(__UML_Class_Diagram_2_List_h)//CAMBIAR ESO
#define __UML_Class_Diagram_2_List_h  ///CAMBIAR ESO

class Nodo;



class Tail
{
public:

	void push(double _value);
	void pop(void);
	void printTail(void);
	Nodo* getActual(void);
	void setActual(Nodo* newActual);
	Nodo* getFirst(void);
	void setFirst(Nodo* newFirst);
	int getTama�o();
	Tail();
	~Tail();

protected:
private:
	bool emplyTail(void);

	Nodo* first;
	Nodo* actual;
	int tama�o = 0;


};

#endif