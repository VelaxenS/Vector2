#include <iostream>
#include "vector.h"


using namespace std;

int main() {

	vector2 vector_1(3.0, 4.0);
	vector2 vector_2(5.0, 12.0);

	cout << "dot product is : " << vector_1.dotP(vector_2)<< endl;
	cout << "angle between : " << vector_1.angleB(vector_2) << endl;
	cout << (vector_1.addV(vector_2)).x << ", " << (vector_1.addV(vector_2)).y << endl;
	cout << (vector_1.subtractV(vector_2)).x << ", " << (vector_1.subtractV(vector_2)).y << endl;

	return 0;



}