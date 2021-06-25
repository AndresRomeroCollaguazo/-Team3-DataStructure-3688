#include "Fecha.h"


Fecha::Fecha() {
    this->anio = 0;
    this->mes = 0;
    this->dia = 0;
}

Fecha::Fecha(int dia, int mes, int anio) {
    this->anio = anio;
    this->mes = mes;
    this->dia = dia;
}

void Fecha::generar_fecha() {
    time_t current_time;
    struct tm  local_time;
    time(&current_time);
    localtime_s(&local_time, &current_time);
    anio = local_time.tm_year + 1900;
    mes = local_time.tm_mon + 1;
    dia = local_time.tm_mday;
}

int Fecha::get_anio() {
    return anio;
}

int Fecha::get_mes() {
    return mes;
}

int Fecha::get_dia() {
    return dia;
}

void Fecha::setDia(int newDia) {
    dia = newDia;
}
void Fecha::setMes(int newMes) {
    mes = newMes;
}
void Fecha::setAnio(int newAnio) {
    anio = newAnio;
}

std::string Fecha::get_fecha() {
    std::string s_anio(std::to_string(anio));
    std::string s_mes(std::to_string(mes));
    std::string s_dia(std::to_string(dia));
    return s_dia + "/" + s_mes + "/" + s_anio + "\n";
}