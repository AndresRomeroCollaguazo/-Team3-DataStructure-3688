#pragma once
#include <cstdlib> // calloc, malloc, realloc
#include <functional>
#include <algorithm>
#include <iostream>
#include <time.h>

template<class T>
class Vector
{
public:
	Vector();
	Vector(int);
	T* reservar(int newDim);
	void encerar();
	void imprimir();
	void agregar( T valor);
	void generar(int elm);
	T obtener(int);
	int obtener_tamanio();
	void rellenar(int n, std::function<T()>generador);
	void ordenar(std::function<bool(T a, T b)> comparador);
	void recorrer(std::function<void(T elemento)> iterador);
    void directInsecion(std::function<bool (T , T , T)> iterator);
	void radix(std::function<int (T* , T)> iterator);
	void ordenamientoInsercionBinaria();
	void naturalSort(std::function<bool (T , T)> iterator);
	T* mezclaDirectaAux(T* );
	void ordenarArregloPorSeleccion();
	void ordenamientoGnome(int );
	void ordenamientoBurbuja(int i);
	void mezclaDirectaAux2(T* );
	void heapSort();
	void heapify(T*, int , int);
	T* begin();
	T* end();
	void setDim(int newDim);
	int getDim();
	void shell();
	void setVector(T* newVector);
	T* getVector();
	void directSort();
private:
	T* dato = nullptr;
	T* vect = nullptr;
	int dim;
	int tamanio{0};
};

template <class T>
void Vector<T>::directSort(){
	int actual = 0 , mas_pequeno = 0, j = 0 , temp = 0;
    for (actual = 0; actual < tamanio - 1; actual++)
    {
        mas_pequeno = actual;
        for (j = actual + 1; j < tamanio; j++)
            if ( *( dato + j ) < *( dato + mas_pequeno ) )
                mas_pequeno = j;
            temp = *( dato + actual );
            *( dato + actual ) = *( dato + mas_pequeno );
            *( dato + mas_pequeno ) = temp;
    }
}

template <class T>
void Vector<T>::shell(){
    int i, j, inc, temp;
    for(inc = 1 ; inc < tamanio ; inc = inc*3+1);
    while (inc > 0)
    {
        for (i = inc; i < tamanio; i++)
        {
            j = i;
            temp = dato[i];
            while ((j >= inc) && (dato[j-inc] > temp))
            {
                dato[j] = dato[j - inc];
                j = j - inc;
            }
            dato[j] = temp;
        } 
        inc/= 2;
    }
} 

template <class T>
void Vector<T>::heapify(T* arr, int n, int root)
{
    int largest = root; 
    int l = 2*root + 1; 
    int r = 2*root + 2; 
    if (l < n && *( arr + l ) > *( dato + largest ))
        largest = l;
    if (r < n && *( arr + r ) > *( arr + largest ) )
        largest = r;
    if (largest != root)
    {
        std::swap(*( arr + root ), *( arr + largest ));
        heapify(arr, n, largest);
    }
}

template <class T>
void Vector<T>::heapSort()
{
    for (int i = tamanio / 2 - 1; i >= 0; i--)
        heapify(dato, tamanio, i);

    for (int i = tamanio - 1 ; i >= 0; i--)
    {
        std::swap(*( dato + 0 ), *(dato + i) );
        heapify(dato, i, 0);
    }
}

template <class T>
void Vector<T>::ordenarArregloPorSeleccion()
{
	int minimo = 0;
	int aux = 0;
	for (int i = 0; i < tamanio; i++)
	{
		minimo = *(dato+i);
		aux= i;
		
		for (int j = i + 1; j < tamanio; j++)
		{
			if (minimo> *(dato + j)) {
				minimo = *(dato + j);
				aux = j;
				*(dato + aux) = *(dato + i);
				*(dato + i) = minimo;
				
			}
		}
	
	
	}
}

template <class T>
void Vector<T>::setDim(int newDim) {
    dim = newDim;
}

template <class T>
int Vector<T>::getDim() {
    return dim;
}

template <class T>
void Vector<T>::setVector(T* newVector) {
    vect = newVector;
}

template <class T>
T* Vector<T>::getVector() {
    return vect;
}

template<class T>
Vector<T>::Vector()
{
	dato = (T*)malloc(0);
}

template <class T>
void Vector<T>::generar(int elm)
{
    srand(time(NULL));
    for (int i = 0; i < elm; i++) {
        *(vect + i) = 1 + rand() % 99;
    }
}

template <class T>
void Vector<T>::imprimir()
{
    std::cout << "[";
    for (int i = 0; i < dim; i++)
        std::cout << *(vect + i) << " ";
    std::cout << "]" << std::endl;
}

template <class T>
Vector<T>::Vector(int newDim) {
    dim = newDim;
    reservar(dim);
    encerar();
}

template <class T>
T* Vector<T>::reservar(int newDim) {
    dim = newDim;
    vect = new T[newDim];
    return vect;
}

template <class T>
void Vector<T>::encerar()
{
    for (int i = 0; i < dim; i++)
        *(vect + i) = 0;
}

template<class T>
void Vector<T>::agregar(T valor)
{
	dato = (T*)realloc(dato, sizeof(T) * (tamanio + 1));
	*(dato + tamanio) = valor;
	tamanio++;
}

template<class T>
T Vector<T>::obtener(int indice)
{
	return *(dato + indice);
}

template<class T>
int Vector<T>::obtener_tamanio()
{
	return tamanio;
}

template<class T>
void Vector<T>::rellenar(int n, std::function<T()> generador)
{
	for (int i = 0; i < n; i++)
	{
		int valor = generador();
		agregar(valor);
	}
}

template<class T>
void Vector<T>::ordenar(std::function<bool(T a, T b)> comparador)
{
	for (int i = 0; i < tamanio; i++)
	{
		for (int j = 0; j < tamanio; j++)
		{
			T a = *(dato + i);
			T b = *(dato + j);

			if (comparador(a, b))
			{
				*(dato + i) = b;
				*(dato + j) = a;
			}
		}
	}
}

template<class T>
void Vector<T>::recorrer(std::function<void(T elemento)> iterador)
{
	for (int i = 0; i < tamanio; i++)
	{
		T valor = *(dato + i);
		iterador(valor);
	}
}
template<class T>
T* Vector<T>::begin()
{
	return dato;
}

template<class T>
T* Vector<T>::end()
{
	return (dato + tamanio);
}

template<class T>
void Vector<T>::directInsecion(std::function<bool (T a , T b, T c)> iterator){
    for (int i = 1; i < tamanio ; i++)
    {
        T v = *(dato + i);
        T j = i - 1;
        while (iterator(j , *(dato + j) , v))
        {
            *(dato+j + 1) = *(dato + j);
            j--;
        }
        *(dato+j + 1) = v;
    }   
}

template<class T>
void Vector<T>::radix(std::function<int (T* a, T b)> iterator){
    T max = iterator(dato, tamanio);
    for (T place = 1; max / place > 0; place *= 10)
        {
		T* output = new T[tamanio];
        T* count = new T[10];
        for (int i = 0; i < 10; ++i)
            *(count+i) = 0;
        for (int i = 0; i < tamanio; i++)
            *(count+((*(dato+i) / place) % 10)) = *(count+((*(dato+i) / place) % 10)) + 1;
        for (int i = 1; i < 10; i++)
            *(count+i) += *(count+(i - 1));
        for (int i = tamanio - 1; i >= 0; i--) {
        *(output+(*(count+((*(dato+i) / place) % 10)) - 1)) = *(dato+i);
        *(count+((*(dato+i) / place) % 10))= *(count+((*(dato+i) / place) % 10)) - 1;
        }
        for (int i = 0; i < tamanio; i++)
        *(dato+i) = *(output+i);
		}
}

template<class T>
void Vector<T>::naturalSort(std::function<bool (T a , T b)> iterator){
    T izquierda = 0 , izq = 0 , derecha = tamanio -1 , der =derecha;
	bool ordenado = false ;
	do{
		ordenado = true ;
		izquierda = 0;
	    while(iterator(izquierda,derecha)){
            izq = izquierda;
			while(izq < derecha && *(dato + izq) <= *(dato + izq + 1)){
				izq++;
			}
			der = izq + 1;
			while(derecha == derecha - 1 || der < derecha && *(dato+der)<=*(dato + 1)){
				der++;
			}
			if(der <= derecha){
				mezclaDirectaAux2(dato);
				ordenado = false ;
			}
			izquierda = izq;
		}
	}while (!ordenado);
}

template <class T>
T* Vector<T>::mezclaDirectaAux(T* arr){
    T i , j , k ;
	if(tamanio > 1){
		T nElementosIzq = (sizeof(arr)/4) / 2 ;
		T nElementosDer = tamanio - nElementosIzq;
		T* aElementosIzq = new T[nElementosIzq];
		T* aElementosDer = new T[nElementosDer];
		for( i = 0 ; i < nElementosIzq ; i++){
			*(aElementosIzq+i) = *(arr + i);
		}
		for (i = nElementosIzq; i < nElementosIzq + nElementosDer ; i++){
			*(aElementosDer + i - nElementosIzq) = *(arr + i);
		}
		aElementosIzq = mezclaDirectaAux(aElementosIzq);
		aElementosDer = mezclaDirectaAux(aElementosDer);
		i = 0;
		j = 0;
		k = 0;
		while((sizeof(aElementosIzq)/4)!= j && (sizeof(aElementosDer)/4)!= k){
			if(*(aElementosIzq + j) < *(aElementosDer + k)){
				*(arr + i) = *(aElementosIzq+ j);
				i++;
				j++;
			} else {
				*(arr + i) = *(aElementosDer + k);
				i++;
				k++;
			}
		}
		while ((sizeof(aElementosIzq)/4)!= j)
		{
			*(arr + i) = *(aElementosIzq + j);
			i++;
			j++;
		}
		while((sizeof(aElementosDer)/4)!= k){
			*(arr + i) = *(aElementosDer + k);
			i++;
			k++;
		}
	}
	return arr;
}

template <class T>
void Vector<T>::mezclaDirectaAux2(T* arr){
    T i , j , k ;
	if(tamanio > 1){
		T nElementosIzq = (sizeof(arr)/4) / 2 ;
		T nElementosDer = tamanio - nElementosIzq;
		T* aElementosIzq = new T[nElementosIzq];
		T* aElementosDer = new T[nElementosDer];
		for( i = 0 ; i < nElementosIzq ; i++){
			*(aElementosIzq+i) = *(arr + i);
		}
		for (i = nElementosIzq; i < nElementosIzq + nElementosDer ; i++){
			*(aElementosDer + i - nElementosIzq) = *(arr + i);
		}
		aElementosIzq = mezclaDirectaAux(aElementosIzq);
		aElementosDer = mezclaDirectaAux(aElementosDer);
		i = 0;
		j = 0;
		k = 0;
		while((sizeof(aElementosIzq)/4)!= j && (sizeof(aElementosDer)/4)!= k){
			if(*(aElementosIzq + j) < *(aElementosDer + k)){
				*(arr + i) = *(aElementosIzq+ j);
				i++;
				j++;
			} else {
				*(arr + i) = *(aElementosDer + k);
				i++;
				k++;
			}
		}
		while ((sizeof(aElementosIzq)/4)!= j)
		{
			*(arr + i) = *(aElementosIzq + j);
			i++;
			j++;
		}
		while((sizeof(aElementosDer)/4)!= k){
			*(arr + i) = *(aElementosDer + k);
			i++;
			k++;
		}
	}
}

template<class T>
void Vector<T>::ordenamientoInsercionBinaria()
{
	int j;
	T aux, izq, der, m;
	for (int i = 1; i < tamanio; i++)
	{
		aux = *(dato+i);
		izq = 0;
		der = i - 1;
		while (izq <= der)
		{
			m = ((izq + der) / 2);
			if (aux < *(dato+m))
				der = m - 1;
			else
				izq = m + 1;
		}
		j = i - 1;
		while (j >= izq)
		{
			*(dato+j + 1) = *(dato+j);
			j = j - 1;
		}
		*(dato+izq) = aux;
	}
}
template<class T>
void Vector<T>::ordenamientoBurbuja(int i)
{
	int i_b = i;
	while ((i_b > 0) && (*(dato+i_b) < *(dato+i_b - 1))) {
		int t = *(dato+i_b - 1);
		*(dato+i_b - 1) = *(dato+i_b);
		*(dato+i_b) = t;
		i_b--;
	}
}
template<class T>
void Vector<T>::ordenamientoGnome(int p)
{
	for (int i_i = 0; i_i < p; i_i++) {
		ordenamientoBurbuja(i_i);
	}
}



















