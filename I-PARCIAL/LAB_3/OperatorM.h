#pragma once
#include<iostream>
using namespace std;
class OperatorM
{
  private:

  public:
   
	  OperatorM();
	  float forFiveHundred(float);
	  float forFiveHundred(int);
	  float forFiveHundred(double);

	  float operator +(float);
	  float operator *(float);
	  float operator -(float);
};

