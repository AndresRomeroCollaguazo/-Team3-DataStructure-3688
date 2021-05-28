#include <iostream>
#include "OperatorsA.h"
#include "MethodsA.h"
#include "MethodsHP.h"
#include "OperatorHP.h"
#include "OperatorM.h"
#include "Square.h"
using namespace std;
int main() {
	OperadroJ user1;
	float r=2;
	float t=3;
	int w=2.2;

int opcion;
    bool repetir = true;
    
    do {
        system("cls");
        
        
        cout << "\n\nMenu de Estudiantes" << endl;
        cout << "\n1. Michelle" << endl;
        cout << "\n2. Martin" << endl;
        cout << "\n3. Hamilton" << endl;
        cout << "\n4. Jorge" << endl;
        cout << "\n0. Andres" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                // Lista de instrucciones de la opción 1                
                Square sq;

	float x = 130.5;
	float y = 480.30;
	double z = 147.5;
	printf("\nEl area del cuadrado es: %.2f", sq.mesuares(x, y));
	printf("\nEl alto del cuadrado +60 es: %.2f", sq.mesuares(y));
	printf("\nEl ancho del cuadrado -60 es: %.2f", sq.mesuares(z));
	
	printf("\nEl alto menos 30  es: %.2f", sq.operator-(x));
	printf("\nEl ancho por 100  es: %.2f", sq.operator*(y));
	printf( "\nEl alto dividido para 2 es: % .2f",sq.operator/(x));
	

	return 0;
                system("pause>nul"); // Pausa
                break;
                
            case 2:
                // Lista de instrucciones de la opción 2                
                
                system("pause>nul"); // Pausa
                break;
                
            case 3:
                // Lista de instrucciones de la opción 3                
                float x = 10.5f;
   		double y = 12.75;
    		int z = 6;

    		MethodsHP methods(x, y, z);
    		OperatorHP ophp(methods);
    		printf("\n La suma es %.2f", methods.addition(x));
    		printf("\n La suma es %.2f", methods.addition(y, x));
    		printf("\n La suma es %.2f", methods.addition(z, y, x));
    		printf("\n La suma es %.2f", ophp.operator++());
    		printf("\n La resta es %.2f", ophp.operator--());
    		printf("\n El producto es %.2f", ophp.operator*());
    		return 0;
                system("pause>nul"); // Pausa            
                break;
                
            case 4:
                cout << r << "\n*2 es:" << user1.mateEasy(r)<< endl;
				cout << t << "\n*2 es:" << user1.mateEasy(t) << endl;
				cout << w << "\n*2 es:" << user1.mateEasy(w) << endl;

				cout << r << "\ndividido es: " << user1.operator%(t) << endl;
				cout << r << "\nmultiplicado es: " << user1.operator+(t) << endl;
				cout << r << "\nsumado 500 es: " << user1.operator*(t) << endl;
                system("pause>nul"); // Pausa                
                break;
	     case 5:
		double d = 20.89;
		float b = 15.5f;
		int a = 5;
		Methods methods(a, d,b);
		Operators op(methods);
		printf("\nAndres Gerardo Valarezo Correa");
		printf("\nMETODOS SOBRECARGADOS");
		printf("\nLa multiplicacion sobrecargada es %.2f", methods.multiplication(a));
		printf("\nLa multiplicacion sobregcargada es %.2f", methods.multiplication(d,a));
		printf("\nLa multiplicacion sobrecargada es %.2f", methods.multiplication(b,d,a));
		printf("\nOPERADORES SOBRECARGADOS");
		printf("\nLa multiplicacion es %.2f", op.operator*());
		printf("\nLa suma es %.2f", op.operator++());
		printf("\nLa resta es %.2f", op.operator--());
            	system("pause>nul"); // Pausa                
                break;
            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);


}
