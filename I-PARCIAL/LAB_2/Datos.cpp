/***********************************************************************
 * Module:  Datos.cpp
 * Author:  avand
 * Modified: miércoles, 26 de mayo de 2021 15:38:43
 * Purpose: Implementation of the class Datos
 ***********************************************************************/
 #include "Datos.h"
template <typename Dato>
Dato Datos<Dato>::getDatoA(void)
{
   return datoA;
}
template <typename Dato>
void Datos<Dato>::setDatoA(Dato newDatoA)
{
   datoA = newDatoA;
}
template <typename Dato>
Dato Datos<Dato>::getDatoB(void)
{
   return datoB;
}
template <typename Dato>
void Datos<Dato>::setDatoB(Dato newDatoB)
{
   datoB = newDatoB;
}
template <typename Dato>
Datos<Dato>::Datos(Dato datoNuevoA,Dato datoNuevoB)
{
	this->datoA=datoNuevoA;
	this->datoB= datoNuevoB;
}
template <typename Dato>
Datos<Dato>::~Datos()
{
	
}

template class Datos<int>;
template class Datos<double>;
template class Datos<float>;