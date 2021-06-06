/**
  * @file Operation.h
  * @version 1.0
  * @date 06-06-2021
  * @author Andres Gerardo Valarezo Correa
  * @brief funcion seno con recursividad
  * @title CosenoRecursividad
  * 
  */
#include"Datum.h"

#if !defined(__Class_Diagram_1_Operation_h)
#define __Class_Diagram_1_Operation_h

class Operation
{
public:
	/**
	  * @brief factorial Devuelve el factorial de un numero entero
	  * @param n Numero a calcular
	  * @return Devuelve el numero factorial calculado
	  */
   int factorial(int n);
   /**
	 * @brief coseno Devuelve el coseno de un numero en radianes
	 * @param d Objeto Datum que contiene el dato a calcular
	 * @return Devuelve el coseno calculado
	 */
   double coseno(Datum d , int n);

protected:
private:

};

#endif