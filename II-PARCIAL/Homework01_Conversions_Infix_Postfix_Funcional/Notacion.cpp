#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <algorithm>
#include "Operaciones.h"

using namespace std;


int main()
{
    Operaciones c;
    string infix, prefix, postfix, functional;    
    char seguir, con;
    //Stack stack;
    stack<char> stack;

    /*do
    {

        cout << "Ingresar una expresion Infija carater por caracter: \n" << endl;;
        cin >> con;
        stack.push(con);

        printf("\n   Desea introducir otro(s/n)?: ");
        cin >> seguir;
    } while (seguir != 'n'); 
    */

    cout << "Ingresar una expresion Infija: \n" << endl;;
    cin >> infix;
    
    cout << "EXPRESION INFIJA: " << infix << endl;
    prefix = c.InfijoAPrefijo(stack, infix);
    cout << endl << "\nEXPRESION PREFIJA: " << prefix;

    postfix = c.InfijoAPostfijo(stack, infix);
    cout << endl << "\nEXPRESION POSFIJA: " << postfix;

    functional = c.InfijoAFuncional(stack, infix);
    cout << endl << "\nEXPRESION FUNCIONAL: " << functional;

    return 0;
}