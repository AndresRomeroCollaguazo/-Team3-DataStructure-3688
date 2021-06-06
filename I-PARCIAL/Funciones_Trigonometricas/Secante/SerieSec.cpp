/***********************************************************************
 * Module:  SerieSec.cpp
 * Author:  Jorge
 * Modified: domingo, 06 de junio de 2021 14:24:06
 * Purpose: Implementation of the class SerieSec
 ***********************************************************************/

#include "SerieSec.h"

////////////////////////////////////////////////////////////////////////
// Name:       SerieSec::SerieSec()
// Purpose:    Implementation of SerieSec::SerieSec()
// Return:     void
////////////////////////////////////////////////////////////////////////

SerieSec::SerieSec()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       SerieSec::factorial(int n)
// Purpose:    Implementation of SerieSec::factorial()
// Parameters:
// - n
// Return:     int
////////////////////////////////////////////////////////////////////////

int SerieSec::factorial(int n)
{
   long double fact;
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

////////////////////////////////////////////////////////////////////////
// Name:       SerieSec::serie(double sec, int i, int rec)
// Purpose:    Implementation of SerieSec::serie()
// Parameters:
// - sec
// - i
// - rec
// Return:     float
////////////////////////////////////////////////////////////////////////

float SerieSec::serie(double sec, int i, int rec)
{
   float a, b;
	float e = 1.570796327;
	if ((sec == e)||(sec == e * 3)|| (sec == -e * 3)|| (sec == -e)) {
		cout << "No se puede calcular el coseno en ese punto"<<endl;
	}
	else {
		a = pow(sec, int(i + rec));
		b = factorial(i + rec);

		return (value(i) * (a / b));
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       SerieSec::~SerieSec()
// Purpose:    Implementation of SerieSec::~SerieSec()
// Return:     void
////////////////////////////////////////////////////////////////////////

SerieSec::~SerieSec()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       SerieSec::value(int p)
// Purpose:    Implementation of SerieSec::value()
// Parameters:
// - p
// Return:     int
////////////////////////////////////////////////////////////////////////

int SerieSec::value(int p)
{
   if ((p%2)==0) {
		return 1;
	}
	else
		return -1;
}
