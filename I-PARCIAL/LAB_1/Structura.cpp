/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operaciones Básicas
Fecha creación: 19/05/2021
Fecha modificación: 20/05/2021*/


#include <iostream>

#include "Constructor.h"

template <typename tipoDato>
Operaciones <tipoDato>::Operaciones(tipoDato _valor1, tipoDato _valor2){
			valor1=_valor1;
			valor2=_valor2;//@constructor

}
template <typename tipoDato>
void Operaciones <tipoDato>::setValor1(tipoDato valor_1){
	valor1=valor_1;//@assign generic data

}
template <typename tipoDato>
tipoDato Operaciones  <tipoDato>::getValor1(){
	return valor1;//@return generic data

}
template <typename tipoDato>
void Operaciones  <tipoDato>::setValor2(tipoDato valor_2){
	valor2=valor_2;//@assign generic data

}
template <typename tipoDato>
tipoDato Operaciones  <tipoDato>::getValor2(){
	return valor2;//@return generic data

}

	

