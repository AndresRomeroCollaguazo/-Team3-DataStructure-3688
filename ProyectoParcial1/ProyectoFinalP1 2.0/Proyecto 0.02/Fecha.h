#pragma once

#include <stdio.h>
#include <string>
#include <time.h>

class Fecha
{

public:
    Fecha();
    Fecha(int, int, int);
    void generar_fecha();
    int get_anio();
    int get_mes();
    int get_dia();
    std::string get_fecha();
    void setDia(int);
    void setMes(int);
    void setAnio(int);

private:
    int anio;
    int mes;
    int dia;

};

