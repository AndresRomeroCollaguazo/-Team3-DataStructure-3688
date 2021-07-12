#pragma once
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller
Fecha creación : 13 / 06 / 2021
Fecha de modificación : 21 / 06 / 2021 */

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
	int getTamaño();
	Tail();
	~Tail();

protected:
private:
	bool emplyTail(void);

	Nodo* first;
	Nodo* actual;
	int tamaño = 0;


};

#endif