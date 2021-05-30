/ * **************** ********
/ * Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Memoria Estática
Fecha creación: 28/05/2021
Fecha de modificación: 30/05/2021 * /
#pragma once
class Vector
{
private:
	int vector_1[10];
public:
	Vector(int[10]);
	Vector() =default;
	
public:
	int* getVector_1();
	void setVector_1(int[10]);
	~Vector();
};

