#pragma warning(disable : 4996)
#include "CalculoEdad.h"
#include <ctime>

using namespace std;

CalculoEdad::CalculoEdad() {

    time_t today = time(NULL);
    struct tm now = *localtime(&today);

    this->actual.setAnio(now.tm_year + 1900);
    this->actual.setMes(now.tm_mon + 1);
    this->actual.setDia(now.tm_mday);
}

void CalculoEdad::setNacimiento(Fecha nacimiento) {
    this->nacimiento = nacimiento;
}

Fecha CalculoEdad::DiferenciaEntreFechas() {

    Fecha aux;

    if (this->actual.get_dia() < this->nacimiento.get_dia()) {

        this->actual.setDia(actual.get_dia() + 30);
        this->actual.setMes(actual.get_mes() - 1);
        aux.setDia(actual.get_dia() - nacimiento.get_dia());

    }
    else
    {
        aux.setDia(actual.get_dia() - nacimiento.get_dia());
    }

    if (this->actual.get_mes() < this->nacimiento.get_mes())
    {
        this->actual.setMes(actual.get_mes() + 12);
        this->actual.setAnio(actual.get_anio() - 1);
        aux.setMes(actual.get_mes() - nacimiento.get_mes());
    }
    else {
        aux.setMes(actual.get_mes() - nacimiento.get_mes());
    }

    aux.setAnio(actual.get_anio() - nacimiento.get_anio());

    return aux;

}