#include "Amortization.h"
#include "math.h"
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <cstdio>
using namespace std;

double Amortization::fee() {
    double a, b, c;
    a = this->interest / 100;
    b = this->loan * a;
    c = 1 - pow(1 + a, -cuot);
    return  b / c;
}

void Amortization::table_Amortization(std::string* line, int mov, double i, double a, double c, int rec) {

    std::string stfee = std::to_string(fee());
    std::string sti = std::to_string(i);
    std::string sta = std::to_string(a);
    std::string stc = std::to_string(c);

    for (int dec = 0; dec < 4; dec++) {
        stfee.erase(stfee.length() - 1);
        sti.erase(sti.length() - 1);
        sta.erase(sta.length() - 1);
        stc.erase(stc.length() - 1);
    }
    if (mov != 0) {
        if (mov == 1) {


            *(line + rec) = { " |" + stfee + "   |   " + sti + "   |     " + sta + "   |   0        |" };
        }
        else {
            *(line + rec) = { " |" + stfee + "   |   " + sti + "   |     " + sta + "   |   " + stc + "     |" };
            rec++;
            table_Amortization(line, mov - 1, c * (interest / 100), fee() - c * (interest / 100), c - (fee() - c * (interest / 100)), rec);
        }
    }
    else {
        return;
    }
}
//INTERES   " << "|AMORTIZACION " << "| DEUDA PENDIENTE   

void Amortization::sumInteres(double sum, int mov, double i, double a, double c, int rec) {
    if (mov != 0)
    {
        sum += i;
        sumInteres(sum, mov - 1, c * (interest / 100), fee() - c * (interest / 100), c - (fee() - c * (interest / 100)), rec);
    }
    else {
        cout << sum;
        return;
    }
}

void Amortization::sumAmortization(double sum, int mov, double i, double a, double c, int rec) {
    if (mov != 0)
    {
        sum += a;
        sumAmortization(sum, mov - 1, c * (interest / 100), fee() - c * (interest / 100), c - (fee() - c * (interest / 100)), rec);
    }
    else {
        cout << sum;
        return;
    }
}

Amortization::Amortization(double _loan, double _interest, int _cuot) {
    this->loan = _loan;
    this->interest = _interest;
    this->cuot = _cuot;
}

Amortization::~Amortization()
{
    //dtor
}