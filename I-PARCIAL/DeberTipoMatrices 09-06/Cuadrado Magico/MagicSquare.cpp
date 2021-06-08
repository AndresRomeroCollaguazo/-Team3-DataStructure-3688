/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle
Deber de Cuadro Magico
Fecha creación : 04 / 06 / 2021
Fecha de modificación : 08 / 06 / 2021 */


#include"MagicSquare.h"
#include<iostream>
#include<stdio.h>
using namespace std;
//MagicSquare::MagicSquare() {

//}
int MagicSquare::get_row(void) {
    return row;
}
void MagicSquare::set_row(int new_s1) {
    row = new_s1;
}
int MagicSquare::get_column(void) {
    return column;
}
void MagicSquare::set_column(int new_s2) {
    column = new_s2;
}
void MagicSquare::calculateSquareMagic() {
   //Impresion cuadrado magico
    std::cout << "Dimension del cuadrado magico: ";
    std::cin >> row;
    column = row * row;
    const int constMagica = (row * (row * row + 1)) / 2;
    int matrix[10][10];

    std::cout << "Completar cuadrado mágico (1 al " << row * row << "):"<<endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < row; j++) {
            std::cout << "[" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }

   std::cout<<"Impresion del cuadrado magico:"<<endl;
    for (int i = 0; i < row; i++) {

       std::cout<<" | ";

        for (int j = 0; j < row; j++)
          std::cout << matrix[i][j] << " ";

        std::cout<<" |"<<endl;

    }

    int is_Magic = 1;
    int i = 0;
    while (i < row && is_Magic == 1) {
        int sum = 0;
        for (int j = 0; j < row; j++) {
            sum += matrix[i][j];
        }if (sum!= constMagica)
            is_Magic = 0;
        i++;
    }

    int j = 0;
    while (j < row && is_Magic == 1) {
        int sum = 0;
        for (int i = 0; i < row; i++) {
            sum += matrix[i][j];
     
        }
        if (sum != constMagica)
            is_Magic = false;
        j++;
    }

    if (!is_Magic) {


       std::cout<<"Los valores ingresados no corresponden a un cuadrado magico, vuelve a intentarlo!"<<endl;
    }
    else {
       std::cout<<"Los valores si corresponden a un cuadrado magico"<<endl;
     

    }
}
MagicSquare::~MagicSquare() {

}