/***********************************************************************
 * Module:  Pascal.cpp
 * Author:  Martin
 * Modified: martes, 08 de junio de 2021 20:47:12
 * Purpose: Implementation of the class Pascal
 ***********************************************************************/

#include "Pascal.h"

////////////////////////////////////////////////////////////////////////
// Name:       Pascal::Pacal(int _n, int _res)
// Purpose:    Implementation of Pascal::Pacal()
// Parameters:
// - _n
// - _res
// Return:     void
////////////////////////////////////////////////////////////////////////

void Pascal::Pascal(int _n, int _res)
{
    this->n = _n;
    this->res = _res;
}

////////////////////////////////////////////////////////////////////////
// Name:       Pascal::graficPascal(int** _matrix)
// Purpose:    Implementation of Pascal::graficPascal()
// Parameters:
// - _matrix
// Return:     void
////////////////////////////////////////////////////////////////////////

void Pascal::graficPascal(int** _matrix)
{
   int i, j;
    for (i = 0; i < get_n()-1; i++)
    {
        for (j = 0; j < get_n(); j++)
        {
            cout << *(*(_matrix + j) + i) << "   ";

        }
        cout << "" << endl;
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       Pascal::verify()
// Purpose:    Implementation of Pascal::verify()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Pascal::verify(void)
{
   if ((get_n() > 13) || (get_n() < 1))
    {
        cout << "Valor ingresado no valido" << endl;
        exit(-1);
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       Pascal::fact(int n)
// Purpose:    Implementation of Pascal::fact()
// Parameters:
// - n
// Return:     int
////////////////////////////////////////////////////////////////////////

int Pascal::fact(int n)
{
   if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        this->res = n * fact(n - 1);
        return res;
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       Pascal::combination(int n, int r)
// Purpose:    Implementation of Pascal::combination()
// Parameters:
// - n
// - r
// Return:     int
////////////////////////////////////////////////////////////////////////

int Pascal::combination(int n, int r)
{
   int num=fact(n);
    int den=fact(n-r)*fact(r);
    int result=num/den;
    return result;
}

////////////////////////////////////////////////////////////////////////
// Name:       Pascal::pascal(int curline, int nlines, int** matrix, int row)
// Purpose:    Implementation of Pascal::pascal()
// Parameters:
// - curline
// - nlines
// - matrix
// - row
// Return:     void
////////////////////////////////////////////////////////////////////////

void Pascal::pascal(int curline, int nlines, int** matrix, int row)
{
   if(curline==nlines)
        return;
    int k=curline+1;
        for (int j = 1; j <= k; j++)
        {
            int dig = combination(curline, j - 1);
            *(*(matrix + (j-1)) +(row)) = dig;
        }
    pascal(curline+1,nlines,matrix,row+1);
}

////////////////////////////////////////////////////////////////////////
// Name:       Pascal::get_n()
// Purpose:    Implementation of Pascal::get_n()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Pascal::get_n(void)
{
   return n;
}

////////////////////////////////////////////////////////////////////////
// Name:       Pascal::set_n(int _n)
// Purpose:    Implementation of Pascal::set_n()
// Parameters:
// - _n
// Return:     void
////////////////////////////////////////////////////////////////////////

void Pascal::set_n(int _n)
{
   this->n = _n;
}

////////////////////////////////////////////////////////////////////////
// Name:       Pascal::pool()
// Purpose:    Implementation of Pascal::pool()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Pascal::pool(int** _matrix)
{
   for (int a = 0; a < get_n(); a++) {
        for (int b = 0; b < get_n(); b++) {
            *(*(_matrix + a) + b) = 0;
        }
    }
}
