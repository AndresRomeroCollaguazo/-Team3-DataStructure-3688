
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Proyecto Diccionario Ingles-Español
Fecha creación: 20/07/2021
Fecha de modificación: 31/07/2021 */
#include "IngresoDatos.h"
#include<iostream>
#include <conio.h>
#include <sstream> 


using namespace std;

string IngresoDatos::IngresoTexto(string mensaje) {


    string text = "";
    char letter;

    cout << " \n\t " << mensaje, 39, 49, true, false, true;
    letter = _getch();
    while (letter != 13) {

        if ((letter < 91 && letter > 64) || (letter < 123 && letter > 96) || letter == 48 || letter=='ñ'|| letter=='á'||letter=='é'|| letter == 'í'||letter=='ó'||letter=='ú'||letter=='/') {
            text.push_back(letter);
            cout << letter;
        }
        letter = _getch();
    }
    return text;
}
string IngresoDatos::IngresoTexto1(string mensaje) {


    string text = "";
    char letter;

    cout << " \n\t " << mensaje, 39, 49, true, false, true;
    letter = _getch();
    while (letter != 13) {

        if ((letter < 91 && letter > 64) || (letter < 123 && letter > 96) || letter == 48) {
            text.push_back(letter);
            cout << letter;
        }
        letter = _getch();
    }
    return text;
}

string IngresoDatos::IngresoNumero(string mensaje) {


    string num = "";
    char dig;
    //int numero;

    cout << "\n\t" << mensaje;
    dig = _getch();
    while (dig != 13) {

        if (dig < 58 && dig > 47) {
            num.push_back(dig);
            cout << dig;
        }
        dig = _getch();
    }
    //istringstream(num) >> numero;
    return num;
}

bool IngresoDatos::validarCedula(string dato) { //Permite validar un número de cédula. Retorna 1 si la cédula es válida y false en caso contrario.
    int cedula[10];
    string aux;
    for (int i = 0; i < 10; i++) {
        aux = dato[i];
        cedula[i] = stoi(aux);
    }

    int verif[10], num, i;
    //valida tercer digito
    if (cedula[2] < 0 || cedula[2]>6) {

        return false;
    }
    //valida codigo de provincia
    if (cedula[0] < 0 || cedula[0]>2) {

        return false;
    }
    if (cedula[0] == 2 && (cedula[1] < 1 || cedula[1]>4)) {

        return false;
    }

    for (i = 0; i <= 8; i++) {
        if (i % 2 == 0) {
            verif[i] = cedula[i] * 2;
            if (verif[i] >= 10) {
                verif[i] = verif[i] - 9;

            }
        }
        else {
            verif[i] = cedula[i] * 1;
            if (verif[i] >= 10) {
                verif[i] = verif[i] - 9;

            }
        }
    }

    verif[9] = 90 - suma(verif);
    num = verif[9] % 10;

    //Digito verificador
    if (cedula[9] == num) {

        return true;
    }
    else {

        return false;
    }
    return false;
}
int IngresoDatos::suma(int verif2[9]) {
    int i, suma = 0;
    for (i = 0; i <= 8; i++) {
        suma = suma + verif2[i];
    }
    return suma;
}

bool IngresoDatos::anioBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0) ? true : false;
}