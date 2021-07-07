/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
** Deber de Notaciones y cambios a Infija, Prefija y Funcional.
** Fecha creación : 02 / 07 / 2021
** Fecha de modificación : 05 / 07 / 2021
*********************************************************************************************/

#include"Postfijo.h"
#include "Lista.h"
#include <iostream>

Postfijo::Postfijo()
{
}

Postfijo::~Postfijo()
{
}

int Postfijo::identificar(char o)
{
	if (o == '^')
		return 3;
	else if (o == '*' || o == '/')
		return 2;
	else if (o == '+' || o == '-')
		return 1;
	else
		return 0;
}


void Postfijo::convertir(string s)
{
	Lista list;
	string resultado;
	for (int i = 0; i < s.length(); i++)
	{
		char c = *(s.c_str() + i);
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		{
			resultado += c;
		}
		else if(c == '(')
		{
			list.insertarInicio(c);
		}
		else if (c == ')')
		{
			while (!list.listaVacia()&& list.top() != '(')
			{
				resultado += list.top();
				list.eliminar();
			}
			if (!list.listaVacia())
			{
				list.eliminar();
			}
		}
		else
		{
			while (!list.listaVacia() && identificar(*(s.c_str() + i)) < identificar(list.top()))
			{
				resultado = +list.top();
				list.eliminar();
			}
			list.insertarInicio(*(s.c_str() + i));
		}
	}
	while (!list.listaVacia())
	{
		resultado += list.top();
		list.eliminar();
	}
	cout<< "	La notacion Postfija es: " << resultado<<endl;
}



