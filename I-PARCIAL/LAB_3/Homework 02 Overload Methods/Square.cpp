#include "Square.h"
#include<iostream>
#include"Square.h"

Square::Square() {

}
float Square::mesuares(float high, float width) {
	return high * width;
}
float Square::mesuares(float high) {
	return float(high + 60);
}
float Square::mesuares(double width) {
	return float(width - 60);
}
float Square::operator -(float high) {
	return high - 30;
}
float Square::operator *(float width) {
	return width * 100;
}
float Square::operator /(float high) {
	return high / 2;
}
