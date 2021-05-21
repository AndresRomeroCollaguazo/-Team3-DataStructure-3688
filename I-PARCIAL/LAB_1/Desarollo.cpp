/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operaciones Básicas
Fecha creación: 19/05/2021
Fecha modificación: 20/05/2021*/

#include "Constructor.h"
using namespace std;
template <typename tipoDato>
tipoDato Operaciones <tipoDato>::suma(){
	return valor1+valor2;

}
template <typename tipoDato>
tipoDato Operaciones <tipoDato>::resta(){
	return valor1-valor2;

}
template <typename tipoDato>
tipoDato Operaciones <tipoDato>::multiplicacion(){
	return valor1*valor2;

}
template <typename tipoDato>
tipoDato Operaciones <tipoDato>::division(){
	if(valor2==0)
	{
	cout<<"NO SE PUEDE DIVIDIR !!!!"<<endl;
	}else
	return valor1/valor2;

}
