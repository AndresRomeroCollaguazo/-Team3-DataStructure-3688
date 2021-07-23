#ifndef VECTOR_H
#define VECTOR_H


template <class T>
class Vector
{
private:
    int dim;
    T* vector;
public:
    Vector();
    Vector(int);
    T* reservar(int);
    void generar(int);
    void encerar();
    void imprimir();
    void setDim(int newDim);
    int getDim();
    void setVector(T* newVector);
    T* getVector();
    ~Vector();
};

template <class T>
Vector<T>::Vector() {
    dim = 0;
    vector = NULL;
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
    vector = new T[newDim];
    return vector;
}

template <class T>
void Vector<T>::encerar()
{
    for (int i = 0; i < dim; i++)
        *(vector + i) = 0;
}

template <class T>
void Vector<T>::generar(int elm)
{
    srand(time(NULL));
    for (int i = 0; i < elm; i++) {
        *(vector + i) = 1 + rand() % 999;
    }
}

template <class T>
void Vector<T>::imprimir()
{
    std::cout << "{";
    for (int i = 0; i < dim; i++)
        std::cout << *(vector + i) << " ";
    std::cout << "}" << std::endl;
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
    vector = newVector;
}

template <class T>
T* Vector<T>::getVector() {
    return vector;
}

template <class T>
Vector<T>::~Vector() {
}

#endif 

