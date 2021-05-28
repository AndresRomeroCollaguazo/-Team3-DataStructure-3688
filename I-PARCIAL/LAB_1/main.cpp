/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operaciones Básicas
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Desarollo.cpp"
/*@author Grupo 3
* @version 0.1 20-05-2021
* Allows running the program receiving two parameters
*/
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause")*/
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
