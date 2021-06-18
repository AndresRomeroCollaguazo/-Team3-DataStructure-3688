#include <iostream>
#include "OperatorsA.h"
#include "MethodsA.h"
#include "MethodsHP.h"
#include "OperatorHP.h"
#include "OperatorM.h"
#include "Square.h"
#include "OperadorJ.h"
using namespace std;
int main() {

    float r = 2;
    float t = 3;
    int w = 2.2;

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
        case 1: {
            // Lista de instrucciones de la opción 1
            Square sq;

            float a = 130.5;
            float b = 480.30;
            double c = 147.5;
            printf("\nEl area del cuadrado es: %.2f", sq.mesuares(a, b));
            printf("\nEl alto del cuadrado +60 es: %.2f", sq.mesuares(b));
            printf("\nEl ancho del cuadrado -60 es: %.2f", sq.mesuares(c));

            printf("\nEl alto menos 30  es: %.2f", sq.operator-(a));
            printf("\nEl ancho por 100  es: %.2f", sq.operator*(b));
            printf("\nEl alto dividido para 2 es: % .2f", sq.operator/(c));


            return 0;
            system("pause>nul"); // Pausa
            break; }
        case 2: {
            // Lista de instrucciones de la opción 2
            OperatorM op;
            float d = 125.1;
            int e = 180;
            double f = 128.3;
            cout << "Martin Medina" << endl;
            cout << d << "por 500 es: " << op.forFiveHundred(d) << endl;
            cout << e << "por 500 es: " << op.forFiveHundred(e) << endl;
            cout << f << "por 500 es: " << op.forFiveHundred(f) << endl;

            cout << d << "mas 500 es: " << op.operator+(d) << endl;
            cout << d << "menos 500 es: " << op.operator-(d) << endl;
            cout << d << "por 500 es: " << op.operator*(d) << endl;
            system("pause>nul"); // Pausa
            break;
        }
        case 3:
        {
            // Lista de instrucciones de la opción 3
            float g = 10.5f;
            double h = 12.75;
            int i = 6;

            MethodsHP methods(g, h, i);
            OperatorHP ophp(methods);
            printf("\n La suma es %.2f", methods.addition(g));
            printf("\n La suma es %.2f", methods.addition(h, i));
            printf("\n La suma es %.2f", methods.addition(g, h, i));
            printf("\n La suma es %.2f", ophp.operator++());
            printf("\n La resta es %.2f", ophp.operator--());
            printf("\n El producto es %.2f", ophp.operator*());
            return 0;
            system("pause>nul"); // Pausa
            break;
        }
        case 4:
        {
            OperadorJ user1;
            cout << r << "\n*2 es:" << user1.mateEasy(r) << endl;
            cout << t << "\n*2 es:" << user1.mateEasy(t) << endl;
            cout << w << "\n*2 es:" << user1.mateEasy(w) << endl;

            cout << r << "\ndividido es: " << user1.operator%(t) << endl;
            cout << r << "\nmultiplicado es: " << user1.operator+(t) << endl;
            cout << r << "\nsumado 500 es: " << user1.operator*(t) << endl;
            system("pause>nul"); // Pausa
            break;
        }
        case 5:
        {
            double x = 20.89;
            float y = 15.5f;
            int z = 5;
            Methods methods(x, y, z);
            Operators op(methods);
            printf("\nAndres Gerardo Valarezo Correa");
            printf("\nMETODOS SOBRECARGADOS");
            printf("\nLa multiplicacion sobrecargada es %.2f", methods.multiplication(x));
            printf("\nLa multiplicacion sobregcargada es %.2f", methods.multiplication(z, x));
            printf("\nLa multiplicacion sobrecargada es %.2f", methods.multiplication(y, z, x));
            printf("\nOPERADORES SOBRECARGADOS");
            printf("\nLa multiplicacion es %.2f", op.operator*());
            printf("\nLa suma es %.2f", op.operator++());
            printf("\nLa resta es %.2f", op.operator--());
            system("pause>nul"); // Pausa
            break; }
        case 0:
        {
            repetir = false;
            break;
        }
        }
    } while (repetir);


}