//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
//  Deber de Calculadora
//  Fecha creación : 18 / 07 / 2021
//  Fecha de modificación : 23 / 07 / 2021  */
#include "Operators.h"
#include <iostream>
using namespace std;
char Operators::to_lower(char character)
{
    if (character >= 65 && character <= 90) {
        return character + 32;
    }
    return character;
}

char Operators::to_upper(char character)
{
    if (character >= 97 && character <= 122) {
        return character - 32;
    }
    return character;
}

string Operators::capitalize(string cad)
{
    for (char& c : cad) {
        c = to_upper(c);
    }
    return cad;
}

string Operators::minusculize(string cad)
{
    for (char& c : cad) {
        c = to_lower(c);
    }
    return cad;
}

int Operators::find_character(string cad, char character, int position_initial)
{
    int position_found = -1;
    int cont = 0;
    for (char& c : cad) {
        if (cont >= position_initial && c == character) {
            return cont;
        }
        cont++;
    }

    return position_found;
}

int Operators::find(string cad, string cad_to_find, int position_initial)
{

    string data;
    for (int i = 0; i < length(cad); i++) {
        data = substract(cad, i, length(cad_to_find));
        if (is_equal(data, cad_to_find) && i >= position_initial) {
            return i;
        }
    }
    return -1;
}

int Operators::length(string cad)
{
    int size = 0;
    for (char& c : cad) {
        size++;
    }

    return size;
}

string Operators::substract(string cad, int position_initial, int number_character)
{
    string cad_sub;
    int cont = 0;
    int cont_ch = 1;
    for (char& c : cad) {
        if (cont >= position_initial && cont < (position_initial + number_character)) {
            if (c == ' ') {
                cad_sub += " ";
            }
            else {
                cad_sub += c;
            }

        }
        cont++;

    }
    return cad_sub;
}

bool Operators::is_equal(string cad1, string cad2)
{
    if (length(cad1) != length(cad2)) {
        return false;
    }
    bool flag = false;
    int cont = 0;
    for (int i = 0; i < length(cad1); i++) {
        if (substract(cad1, i, 1) == substract(cad2, i, 1)) {
            cont++;
        }
    }
    if (cont == length(cad1)) {
        flag = true;
    }
    return flag;
}

int Operators::atoi(char character)
{
    if (character >= 48 && character <= 57) {
        return character - 48;
    }
    return 0;
}

int Operators::stoi(string cad)
{
    int r = 0;
    int dato = 0;
    int cont = 0;
    if (substract(cad, 0, 1) == "-") {

        for (char& c : cad) {
            if (cont > 0) {
                dato = atoi(c);
                r = r * 10 + dato;

            }
            cont++;

        }
        r = r * -1;
    }
    else {
        for (char& c : cad) {
            dato = atoi(c);
            r = r * 10 + dato;

        }
    }
    return r;
}

long Operators::stol(string cad)
{
    long r = 0;
    int dato = 0;
    int cont = 0;
    if (substract(cad, 0, 1) == "-") {

        for (char& c : cad) {
            if (cont > 0) {
                dato = atoi(c);
                r = r * 10 + dato;

            }
            cont++;

        }
        r = r * -1;
    }
    else {
        for (char& c : cad) {
            dato = atoi(c);
            r = r * 10 + dato;

        }
    }
    return r;
}

double Operators::stod(string cad)
{

    if (is_number(cad)) {
        if (find_character(cad, '.', 0) == -1) {
            long num = 0;
            num = stol(cad);
            double num1 = double(num);
            return num1;
        }
        else if (find_character(cad, '.', 0) == 0) {
            string cad1 = substract(cad, 1, length(cad) - 1);
            long num = 0;
            num = stol(cad1);
            double num1 = double(num) / potencia(10, double(length(cad1)));
            return num1;
        }
        else {
            int pos = find_character(cad, '.', 0);
            string cad1 = substract(cad, 0, pos) + substract(cad, pos + 1, length(cad) - pos + 1);
            long num = 0;
            num = stol(cad1);
            double num1 = double(num) / potencia(10, double(length(cad1) - pos));
            return num1;
        }
    }
    return 0.0;
}

string Operators::reverse(string cad)
{
    string cad_inverse;
    string aux;
    for (char& c : cad) {
        aux.push_back(c);
        cad_inverse = aux + cad_inverse;
        aux = "";

    }
    return cad_inverse;
}

bool Operators::is_number(string cad)
{
    int points = 0;
    int charac = 0;
    int negative = 0;
    for (char& c : cad) {
        if (c == '.') {
            points++;
        }
        else if (c == '-') {
            negative++;
        }
        else if (c > '9' || c < '0') {
            charac++;
        }


    }
    if (points > 1) {
        return false;
    }
    if (negative > 1) {
        return false;
    }
    else if (negative == 1 && substract(cad, 0, 1) != "-") {
        return false;
    }
    if (negative == 1 && length(cad) == 1) {
        return false;
    }
    if (charac > 0) {
        return false;
    }
    return true;
}


double Operators::potencia(double num, double pot)
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