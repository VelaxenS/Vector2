#ifndef VECTOR_H
#define VECTOR_H

class vector2 {


public:

	vector2(double x, double y);

	double x;
	double y;
	double magnitude;
	double dotPVal;
	double angle;

	double mag();
	double dotP(vector2 vector);
	double angleB(vector2 vector);
	vector2 addV(vector2 vector);
	vector2 subtractV(vector2 vector);
	vector2 perpendicular();
	bool isEqual(vector2 vector);
	void set(double nx, double ny);


};


#endif
