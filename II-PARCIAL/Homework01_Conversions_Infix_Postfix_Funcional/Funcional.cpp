/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
** Deber de Notaciones y cambios a Infija, Prefija y Funcional.
** Fecha creación : 02 / 07 / 2021
** Fecha de modificación : 05 / 07 / 2021
*********************************************************************************************/

#include "Funcional.h"
#include "Prefijo.h"
#include "Lista.h"
#include <iostream>
using namespace std;

Funcional::Funcional()
{
}

Funcional::~Funcional()
{
}

int Funcional::identificar(char o)
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

string Funcional::compararSigno(char temporal) {
    switch (temporal) {
    case '+': 
        return "Suma";
        break;
    case '-': 
        return "Resta";
        break;
    case '*': 
        return "Producto";
        break;
    case '/': 
        return "Division";
        break;
    case '=': 
        return "Igual";
        break;
    case '%': 
        return "Modulo";
        break;
    case '^': 
        return "Potencia";
        break;
    }
    return "";
}


void Funcional::convertir(string s)
{
    Lista list;
    string resultado;
    reverse(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {
        char c = *(s.c_str() + i);
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
            list.insertarInicio(s[i]);
        }
    }

    while (!list.listaVacia())
    {
        resultado += list.top();
        list.eliminar();
    }
    reverse(resultado.begin(), resultado.end());

    //this->convertirPre(s);
    string signo = "";
    string salidaFuncional = "";
    int operador = 0;
    int aux = 0;


    int cont = 0;
    for (int i = 0; i < resultado.length(); i++) {
        signo = compararSigno(* (resultado.c_str() + i));
        if (signo != "") {
            operador++;
            salidaFuncional += signo;
            salidaFuncional += '(';
            signo = "";
        }
        else {
            cont++;
            aux++;
            salidaFuncional += * (resultado.c_str() + i);

            if (i < s.length() - 1) {
                if (cont % 2 == 0) {
                    salidaFuncional += ',';
                }
                else if (cont != 1 && cont % 2 != 0 && i < resultado.length() - 1) {
                    salidaFuncional += ',';
                }
                else if (cont == 1) {
                    salidaFuncional += ',';
                }
            }
            else {
                if (operador > 1) {
                    salidaFuncional += ')';
                    salidaFuncional += ')';
                }
                else {
                    salidaFuncional += ')';
                }
            }
            //}
        }
    }
    //cout << "Exp prefija: " << salida1 << endl;
    cout << "   La notacion Funcional es: " << salidaFuncional << ')' << endl;

}