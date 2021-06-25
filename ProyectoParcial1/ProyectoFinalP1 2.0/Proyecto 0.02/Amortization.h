#pragma once
#include<string>
class Amortization
{
public:
    Amortization(double, double, int);
    void table_Amortization(std::string*, int, double, double, double, int);
    void sumInteres(double, int, double, double, double, int);
    void sumAmortization(double, int, double, double, double, int);
    double fee();
    virtual ~Amortization();
protected:

private:
    double loan;
    double interest;
    double cuot;
};


