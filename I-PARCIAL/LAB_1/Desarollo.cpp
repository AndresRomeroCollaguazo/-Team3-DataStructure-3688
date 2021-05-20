#include <stdio.h>
// Realizar pruebas y mejorar 

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::suma(){
	return valor1+valor2;
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::resta(){
	return valor1-valor2;
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::multiplicacion(){
	return valor1*valor2;
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::division(){
	if(valor2==0){
		cout<<"No se puede dividir !!!!"<<endl;
	}else
	return valor1/valor2;
}
