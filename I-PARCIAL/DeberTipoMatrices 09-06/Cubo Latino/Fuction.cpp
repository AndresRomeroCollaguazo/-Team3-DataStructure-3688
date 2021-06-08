/***********************************************************************
 * Module:  Fuction.cpp
 * Author:  avand
 * Modified: martes, 8 de junio de 2021 15:29:00
 * Purpose: Implementation of the class Fuction
 ***********************************************************************/
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
			cout<<"\t"<< *(vector + L1);
			cout << "" <<endl;
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