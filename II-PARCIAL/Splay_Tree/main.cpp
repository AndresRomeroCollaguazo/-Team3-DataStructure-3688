/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Proyecto Diccionario Ingles-Español
Fecha creación: 30/07/2021
Fecha de modificación: 1/08/2021 */
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "Splay.h"
#include "Nodo.h"
using namespace std;
 
int main()
{
    Splay<int> st;
    int vector[10] = {9,8,7,6,5,4,3,2,1,0};
    Nodo<int>* root;
    root = NULL;
    const int length = 10;
    int i;
    //for(i = 0; i < length; i++)
      //  root = st.Insert(vector[i], root);
    //cout<<"\nInOrder: \n";
    //st.InOrder(root);
    int input, choice;
    while(1)
    {
        cout<<"\nSplay Tree Operations\n";
        cout<<"1. Insertar "<<endl;
        cout<<"2. Eliminar"<<endl;
        cout<<"3. Buscar"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingrese su opción: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Ingrese el valor: ";
            cin>>input;
            root = st.Insert(input, root);
            cout<<"\nDespues de insertar: "<<input<<endl;
            st.InOrder(root);
            break;
        case 2:
            cout<<"Ingrese el valor a eliminar: ";
            cin>>input;
            root = st.Delete(input, root);
            cout<<"\nDespues de eliminar: "<<input<<endl;
            st.InOrder(root);
            break;
        case 3:
            cout<<"Ingrese el valor a buscar: ";
            cin>>input;
            root = st.Search(input, root);
            cout<<"\nDespues de buscar "<<input<<endl;
            st.InOrder(root);
            break;
 
        case 4:
            exit(1);
        default:
            cout<<"\nNo se puede ingresar! \n";
        }
    }
    cout<<"\n";
    return 0;
}