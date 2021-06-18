#include "Check_Validate.h"
#include<conio.h>
#include <iostream>

using namespace std;

char* Validate::validate_Char(const char* msj) {

    char *datos=new char[10];
    int i = 0;
    char c;
    cout<< msj << endl;
    while ((c = _getch()) != 13) {
        if (c >= '0' && c <= '9' ) {
            cout << c ;
            *(datos+i++) = c;
        }
    }
    return datos;
}


