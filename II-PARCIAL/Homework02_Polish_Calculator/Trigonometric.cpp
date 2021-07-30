//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
//  Deber de Calculadora
//  Fecha creación : 18 / 07 / 2021
//  Fecha de modificación : 23 / 07 / 2021  */
#include "Trigonometric.h"
#include "Math.h"
#include <iostream>
using namespace std;
double Trigonometric::sin(double angle)
{
    double x = angle;
    double result, precission;
    result = 0;
    precission = 0;
    int sign = 0, final_sign;
    final_sign = 0;
    const double pi = 3.141592654;
    while (x > pi) {
        x = x - pi;
        final_sign = final_sign + 1;
    }
    for (int i = 1; i <= 11; i = i + 2) {
        precission = pow(-1, sign) * (potencia(x, i) / factorial(i));

        result = result + precission;
        sign = sign + 1;

    }
    if (final_sign % 2 != 0) {
        result = result * -1;
    }
    return result;
}


double Trigonometric::cos(double angle)
{

    double result = 0;
    int presicion = 8;
    const double pi = 3.141592654;
    int cont = 0;
    while (angle > pi) {
        angle = angle - pi;
        cont++;

    }
    for (int i = 0; i < presicion; i++)
    {
        result += ((pow(-1, i)) / factorial(2 * i)) * potencia(angle, 2 * i);
    }
    if (cont % 2 == 1) {
        result = result * -1;
    }
    return result;
}

double Trigonometric::tan(double angle)
{
    double tan;
    tan = Trigonometric::sin(angle) / Trigonometric::cos(angle);
    return tan;
}


double Trigonometric::cot(double angle)
{
    double cot;
    cot = 1 / Trigonometric::tan(angle);
    return cot;
}

double Trigonometric::sec(double angle)
{
    double sec;
    sec = 1 / Trigonometric::sin(angle);
    return sec;
}

long Trigonometric::factorial(int n)
{
    //Funciona hasta 16! 
    if (n < 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

double Trigonometric::potencia(double num, double pot)
{
    double result = 1;
    if (pot == 0) {
        return 1;
    }
    if (pot == 1) {
        return num;
    }
    if (pot == 0.5) {
        double raiz = 0;
        while ((num - raiz * raiz) > 0.00001) {
            raiz = raiz + 0.00001;
        }

        return raiz;
    }
    for (int i = 0; i < pot; i++) {
        result = result * num;
    }
    return result;
}