#pragma once
class Vector
{
private:
	int vector_1[10];
public:
	Vector(int[10]);
	Vector() =default;
	
public:
	int* getVector_1();
	void setVector_1(int[10]);
	~Vector();
};

