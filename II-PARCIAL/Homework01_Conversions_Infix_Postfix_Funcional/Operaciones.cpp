#include "Operaciones.h"
using namespace std;

bool Operaciones::esOperador(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
        return true;
    }
    else {
        return false;
    }
}

int Operaciones::ordenOp(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
void Operaciones::opfuncional(char* v, char c1, char c2)
{
    int i;
    for (i = 0; v[i] != '\0'; i++)
    {
        if (*(v + i) == c1)
        {
            *(v + i) = c2;
        }
    }
}

string Operaciones::InfijoAPrefijo(stack<char> s, string infix)
{
    string prefix;
    reverse(infix.begin(), infix.end());

    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] == '(') {
            infix[i] = ')';
        }
        else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }
    for (int i = 0; i < infix.length(); i++) {
        if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z')) {
            prefix += infix[i];
        }
        else if (infix[i] == '(') {
            s.push(infix[i]);
        }
        else if (infix[i] == ')') {
            while ((s.top() != '(') && (!s.empty())) {
                prefix += s.top();
                s.pop();
            }

            if (s.top() == '(') {
                s.pop();
            }
        }
        else if (esOperador(infix[i])) {
            if (s.empty()) {
                s.push(infix[i]);
            }
            else {
                if (ordenOp(infix[i]) > ordenOp(s.top())) {
                    s.push(infix[i]);
                }
                else if ((ordenOp(infix[i]) == ordenOp(s.top()))
                    && (infix[i] == '^')) {
                    while ((ordenOp(infix[i]) == ordenOp(s.top()))
                        && (infix[i] == '^')) {
                        prefix += s.top();
                        s.pop();
                    }
                    s.push(infix[i]);
                }
                else if (ordenOp(infix[i]) == ordenOp(s.top())) {
                    s.push(infix[i]);
                }
                else {
                    while ((!s.empty()) && (ordenOp(infix[i]) < ordenOp(s.top()))) {
                        prefix += s.top();
                        s.pop();
                    }
                    s.push(infix[i]);
                }
            }
        }
    }

    while (!s.empty()) {
        prefix += s.top();
        s.pop();
    }

    reverse(prefix.begin(), prefix.end());
    return prefix;
}

string Operaciones::InfijoAPostfijo(stack<char> s, string infix)
{
    string postfix;
    for (int i = 0; i < infix.length(); i++)
    {
        if ((infix[i] >= 'a' && infix[i] <= 'z')
            || (infix[i] >= 'A' && infix[i] <= 'Z'))
        {
            postfix += infix[i];
        }
        else if (infix[i] == '(')
        {
            s.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while ((s.top() != '(') && (!s.empty()))
            {
                char temp = s.top();
                postfix += temp;
                s.pop();
            }
            if (s.top() == '(')
            {
                s.pop();
            }
        }
        else if (esOperador(infix[i]))
        {
            if (s.empty())
            {
                s.push(infix[i]);
            }
            else
            {
                if (ordenOp(infix[i]) > ordenOp(s.top()))
                {
                    s.push(infix[i]);
                }
                else if ((ordenOp(infix[i]) == ordenOp(s.top())) && (infix[i] == '^'))
                {
                    s.push(infix[i]);
                }
                else
                {
                    while ((!s.empty()) && (ordenOp(infix[i]) <= ordenOp(s.top())))
                    {
                        postfix += s.top();
                        s.pop();
                    }
                    s.push(infix[i]);
                }
            }
        }
    }
    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}
string Operaciones::InfijoAFuncional(stack<char> s, string infix)
{
    string fun;
    infix = fun;
    char* functional[10];
    fun = functional;
    int i;
    char p = '^';
    char m = '*';
    char d = '/';
    char su = '+';
    char r = '-';
    char p1 = 'POW';
    char m1 = 'PROD';
    char d1 = 'DIVI';
    char s1 = 'SUMA';
    char r1 = 'REST';

    if (functional == "^")
    {
        this->opfuncional(functional, su, s1);
        return functional;
    }
    else if (infix == "*")
    {
        this->opfuncional(functional, su, s1);
        return functional;
    }
    else if (infix == "/")
    {
        this->opfuncional(functional, su, s1);
        return functional;
    }
    else if (infix == "+")
    {
        this->opfuncional(functional, su, s1);
        return functional;
    }
    else if (infix == "-")
    {
        this->opfuncional(functional, su, s1);
        return functional;
    }

    /*

    for (int i = 0; i < infix.length(); i++)
    {
        if ((infix[i] >= 'a' && infix[i] <= 'z')
            || (infix[i] >= 'A' && infix[i] <= 'Z'))
        {           
           functional += infix[i];
        }
        else if (infix[i] == '(')
        {
            s.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            s.push(infix[i]);
        }
        
        else if (esOperador(infix[i]))
        {
            if (infix[i] == '^')
            {
                this->opfuncional(infix[i]);
                s.push(infix[i]);
            }
            else if (infix[i] == '*')
            {
                this->opfuncional(infix[i]);
                s.push(infix[i]);
            }
            else if (infix[i] == '/')
            {
                this->opfuncional(infix[i]);
                s.push(infix[i]);
            }
            else if (infix[i] == '+')
            {
                this->opfuncional(infix[i]);
                s.push(infix[i]);
            }
            else if (infix[i] == '-')
            {
                this->opfuncional(infix[i]);
                s.push(infix[i]);
            }

            functional += infix[i];
        }
    }
    while (!s.empty())
    {   functional += s.top();
        s.pop();
    }*/
    return functional;
}