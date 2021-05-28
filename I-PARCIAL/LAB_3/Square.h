#pragma once

#include<iostream>
using namespace std;
class Square {
private:

public:
	Square();
	float mesuares(float, float);
	float mesuares(float);
	float mesuares(double);

	float operator -(float);
	float operator *(float);
	float operator /(float);

};
