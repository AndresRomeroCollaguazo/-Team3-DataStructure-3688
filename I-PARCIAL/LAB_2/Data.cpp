/***********************************************************************
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/


#include "Data.h"
template <typename Datum>
Datum Data<Datum>::getDatumA(void)
{
	return datumA;
}
template <typename Datum>
void datum<Datum>::setDatumA(Datum newDatumA)
{
	datumA = newDatumA;
}
template <typename Datum>
Datum Data<Datum>::getDatumB(void)
{
	return datumB;
}
template <typename Datum>
void Datum<Datum>::setDatumB(Datum newDatumB)
{
	datumB = newDatumB;
}
template <typename Datum>
Datum<Datum>::Data(Datum newDatumA, Datum newDatumB)
{
	this->datumA = newDatumA;
	this->datumB = newDatumB;
}
template <typename Datum>
Data<Datum>::~Data()
{

}

template class Data<int>;
template class Data<double>;
template class Data<float>;
