/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
** Deber de Notaciones y cambios a Infija, Prefija y Funcional.
** Fecha creación : 02 / 07 / 2021
** Fecha de modificación : 05 / 07 / 2021
*********************************************************************************************/

#include "Prefijo.h"
#include "Lista.h"
#include <iostream>

Prefijo::Prefijo()
{
}

Prefijo::~Prefijo()
{
}

int Prefijo::identificar(char o)
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


void Prefijo::convertir(string s)
{
	Lista list;
	string resultado;
	reverse(s.begin(), s.end());

	for (int i = 0; i < s.length(); i++)
	{
		char c = *(s.c_str()+i);
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		{			
			resultado += c; 
			//reverse(resultado.begin(), resultado.end());
		}
		else if (c == ')')
		{
			list.insertarInicio(c);
		}
		else if (c == '(')
		{
			while (list.top() != ')' && !list.listaVacia())
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
			while (!list.listaVacia() && identificar(s[i]) < identificar(list.top()))
			{
				resultado += list.top();
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
	reverse(resultado.begin(), resultado.end());

	cout << "	La notacion Prefija es: " << resultado << endl;
}
