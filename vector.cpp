#include <iostream>
#include "vector.h"


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

bool vector2::isEqual(vector2 vector) {

	if (this->x == vector.x && this->y == vector.y) {

		return true;
	}
	else {
		return false;
	}
}

vector2 vector2::perpendicular() {

	vector2 newVect(y, -x);

	return newVect;

}

void vector2::set(double nx, double ny) {

	this->x = nx;
	this->y = ny;

}

vector2 vector2::multiply(vector2 v1, vector2 v2) {

	vector2 newVect(v1.x * v2.x, v1.y * v2.y);

	return newVect;
}

