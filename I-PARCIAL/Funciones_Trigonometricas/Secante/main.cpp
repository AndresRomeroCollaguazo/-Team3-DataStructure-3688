#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#include "SerieSec.h"

int main()
{
	SerieSec serie;
	int p;
	double value=0;
	int ciclo = 1;
	int rec = 1;
	float arg;

	cout << "Ingrese el argumento de la secante (en radianes)" << endl;
	cin >> arg;
	cout << "Ingrese el numero de ciclos a calcular" << endl;
	cin >> p;

	if (p > 1)
	{
		for (int i = 1; i <= p; i++)
		{
			value += serie.serie(arg,ciclo, rec);
			rec++;
			ciclo++;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(9);

	cout << "Sec("<<arg<<") es: " << 1/(1+value) <<endl;

	return 0;
}

