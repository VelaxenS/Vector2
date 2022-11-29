#include <iostream>
#include "vector.h"


using namespace std;

vector2::vector2(double x, double y) : iComp(x), jComp(y) {

}


vector2 vector2::addV(vector2 vector) {

	double sumVectX = vector.iComp + iComp;
	double sumVectY = vector.jComp + jComp;
	vector2 newVect(sumVectX, sumVectY);

	return newVect;

}

vector2 vector2::subtractV(vector2 vector) {

	double sumVectX = iComp - vector.iComp;
	double sumVectY = jComp - vector.jComp;
	vector2 newVect(sumVectX, sumVectY);

	return newVect;
}

double vector2::mag() {

	double magnitude = sqrt(pow(iComp, 2) + pow(jComp, 2));

	return magnitude;

}

double vector2::dotP(vector2 vector) {

	double dotPVal = vector.iComp * iComp + vector.jComp * jComp;

	return dotPVal;

}

double vector2::angleB(vector2 vector) {

	double angle = acos(this->dotP(vector)/(mag() * vector.mag()));

	return angle * 180/3.1415;
}