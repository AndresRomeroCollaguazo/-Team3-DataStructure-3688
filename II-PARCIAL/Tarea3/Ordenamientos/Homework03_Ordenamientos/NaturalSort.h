#pragma once 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
class NaturalSort
{
private:
    
public:
    void mostrar(FILE *fich);
    void mezcla(FILE *fich);
    void separar(FILE *fich, FILE **aux);
    int mezclar(FILE *fich, FILE **aux);
};

