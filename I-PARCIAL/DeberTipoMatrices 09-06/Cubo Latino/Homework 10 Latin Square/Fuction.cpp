/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Grupo3
Deber de Cubo latino
Fecha creaci�n : 04 / 06 / 2021
Fecha de modificaci�n : 18 / 06 / 2021 */
#include <iostream>
#include "Fuction.h"
using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Fuction::cube(int* vector, int L1, int L2, int L3, int L4)
// Purpose:    Implementation of Fuction::cube()
// Parameters:
// - vector
// - L1
// - L2
// - L3
// - L4
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fuction::cube(int* vector, int L1, int L2, int L3, int L4)
{
	if (L2 >= 0) {
		if (L1 == L2 && L3 > L4) {
			cout << "\t" << *(vector + L1);
			cout << "" << endl;
			L1 = 0;
			L3 = L2;
			L2--;
			return cube(vector, L1, L2, L3, L4);
		}
		if (L3 <= L4) {
			cout << "\t" << *(vector + L3);
			L3++;
			return cube(vector, L1, L2, L3, L4);
		}
		else {
			cout << "\t" << *(vector + L1);
			L1++;
			return cube(vector, L1, L2, L3, L4);
		}
	}
	return(0);
}