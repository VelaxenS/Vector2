#include <iostream>
#include "vector.h"


using namespace std;

int main() {

	vector2 vector_1(3.0, 4.0);
	vector2 vector_2(5.0, 12.0);

	// Returning the value of dot product of vector_1 and vector_2
	cout << "dot product is : " << vector_1.dotP(vector_2)<< endl;


	// Returning the angle between vector_1 and vector_2
	cout << "angle between : " << vector_1.angleB(vector_2) << endl;

	// Checking if vector_1 and vector_2 are equal, returns true or false
	cout << vector_1.isEqual(vector_2) << endl;


	// Returning perpendicular of a vector
	vector2 vector_1_perp = vector_1.perpendicular();
	cout << vector_1_perp.x << ", " << vector_1_perp.y << endl;


	// Altering the x and y values of a desired vector
	vector_1.set(6.0, 8.0);
	cout << vector_1.x << " ," << vector_1.y << endl;

	vector_1.addV(vector_2);

	cout << vector_1.x << ", " << vector_1.y;

	return 0;
}