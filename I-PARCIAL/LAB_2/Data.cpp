/***********************************************************************
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/


#include "Data.h"
template <typename Datum>
Datum Data<Datum>::get_Datum_A(void)
{
	return datum_A;
}
template <typename Datum>
void Data<Datum>::set_Datum_A(Datum new_Datum_A)
{
	datum_A = new_Datum_A;
}
template <typename Datum>
Datum Data<Datum>::get_Datum_B(void)
{
	return datum_B;
}
template <typename Datum>
void Data<Datum>::set_Datum_B(Datum new_Datum_B)
{
	datum_B = new_Datum_B;
}
template <typename Datum>
Data<Datum>::Data(Datum new_Datum_A, Datum new_Datum_B)
{
	this->datum_A = new_Datum_A;
	this->datum_B = new_Datum_B;
}
template <typename Datum>
Data<Datum>::~Data()
{

}

template class Data<int>;
template class Data<double>;
template class Data<float>;
