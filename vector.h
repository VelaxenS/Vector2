#ifndef VECTOR_H
#define VECTOR_H

class vector2 {


public:

	vector2(float x, float y);

	float x;
	float y;

	void addV(const vector2 &vector);

	void subtractV(const vector2 &vector);

	float mag();

	float dotP(const vector2 &vector);

	float angleB(vector2 vector);

	vector2 perpendicular();

	bool isEqual(vector2 vector);

	void set(float nx, float ny);

	vector2 multiply(vector2 v1, vector2 v2);

};
#endif