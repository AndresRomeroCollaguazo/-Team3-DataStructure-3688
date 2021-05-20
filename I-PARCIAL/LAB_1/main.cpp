/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operaciones Básicas
Fecha creación: 19/05/2021
Fecha modificación: 20/05/2021*/


#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "desarrollo.cpp"
using namespace std;

int main(int argc, char** argv) {
	float valor1,valor2;
	cout<<"ingrese valor 1 -> ";
	cin>>valor1;
	cout<<"ingrese valor 2 -> ";
	cin>>valor2;
	
	Operaciones<float>operacion(valor1,valor2);
	
	cout<<"Suma = " <<operacion.suma()<<endl;
	cout<<"Resta = " <<operacion.resta()<<endl;
	cout<<"Multiplicacion = " <<operacion.multiplicacion()<<endl;
	cout<<"Division = " <<operacion.division()<<endl;
	
	return 0;
}
