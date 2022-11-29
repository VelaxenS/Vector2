#include <iostream>
#include "vector.h"


using namespace std;

vector2::vector2(double x, double y) : x(x), y(y) {

}


vector2 vector2::addV(vector2 vector) {

	double sumVectX = vector.x + x;
	double sumVectY = vector.y + y;
	vector2 newVect(sumVectX, sumVectY);

	return newVect;

}

vector2 vector2::subtractV(vector2 vector) {

	double sumVectX = x - vector.x;
	double sumVectY = y - vector.y;
	vector2 newVect(sumVectX, sumVectY);

	return newVect;
}

double vector2::mag() {

	double magnitude = sqrt(pow(x, 2) + pow(y, 2));

	return magnitude;

}

double vector2::dotP(vector2 vector) {

	double dotPVal = vector.x * x + vector.y * y;

	return dotPVal;

}

double vector2::angleB(vector2 vector) {

	double angle = acos(this->dotP(vector)/(mag() * vector.mag()));

	return angle * 180/3.1415;
}