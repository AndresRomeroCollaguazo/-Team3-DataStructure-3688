#pragma once

class Datum
{
private:
	int *arreglo[10];
	int digito;
	int sumaDigitos = 0;

public:
	int* getArreglo(void);
	void setArreglo(int* newArreglo);
	int getDigito(void);
	void setDigito(int digito);
	int getSumaDigitos(void);
	void setSumaDigitos(int sumadigitos);
	Datum(int* _arreglo, int _digito, int _sumadigitos);
	~Datum();

};