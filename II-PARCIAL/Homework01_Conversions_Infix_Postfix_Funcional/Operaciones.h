#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <algorithm>
#include "Stack.h"

using namespace std;
class Operaciones
{
private:
	bool esOperador(char c);
public:
	int ordenOp(char c);
	void opfuncional(char* v, char c1, char c2);
	string InfijoAPrefijo(stack<char> s, string infix);
	string InfijoAPostfijo(stack<char> s, string infix);
	string InfijoAFuncional(stack<char> s, string infix);
};