/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/
/***********************************************************************/
#pragma once
#include <iostream>

class MethodsHP
{
private:
	float valueA;
	double valueB;
	int valueC;

public:
	float get_ValueA(void);
	void set_ValueA(float newValueA);
	double get_ValueB(void);
	void set_ValueB(double newValueB);
	int get_ValueC(void);
	void set_ValueC(int newValueC);

	MethodsHP() = default;
	MethodsHP(float newValueA, double newValueB, int newValueC);
	double addition(float valueA);
	double addition(double valueB, float valueA);
	double addition(int valueC, double valueB, float valueA);

};