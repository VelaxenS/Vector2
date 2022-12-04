#include <iostream>
#include "vector.h"


vector2::vector2(float x, float y) : x(x), y(y) {

}


void vector2::addV(const vector2 &vector) {

	this->x = this->x + vector.x;
	this->y = this->y + vector.y;
}


void vector2::subtractV(const vector2 &vector) {

	this->x = this->x - vector.y;
	this->y = this->y - vector.y;
}

float vector2::mag() {

	return sqrt(pow(x, 2) + pow(y, 2));
}

float vector2::dotP(const vector2 &vector) {

	return this->x * vector.x + this->y * vector.y;
}

float vector2::angleB(vector2 vector) {

	double angle = acos(this->dotP(vector)/(this->mag() * vector.mag()));

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

void vector2::set(float nx, float ny) {

	this->x = nx;
	this->y = ny;

}

vector2 vector2::multiply(vector2 v1, vector2 v2) {

	vector2 newVect(v1.x * v2.x, v1.y * v2.y);

	return newVect;
}

