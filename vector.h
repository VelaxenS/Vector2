#ifndef VECTOR_H
#define VECTOR_H

class vector2 {


public:

	vector2(float x, float y);

	/// <summary>
	/// X component of the vector.
	/// </summary>
	float x;

	/// <summary>
	/// Y component of the vector.
	/// </summary>
	float y;

	/// <summary>
	/// Adds the vector2 object and the input vector.(Does create a new vector, just alters the vector2 object.)
	/// </summary>
	/// <param name="vector"></param>
	void addV(const vector2 &vector);

	/// <summary>
	/// Subtract the vector2 object and the input vector.(Does create a new vector, just alters the vector2 object.)
	/// </summary>
	/// <param name="vector"></param>
	void subtractV(const vector2 &vector);

	/// <summary>
	/// Returns the magnitude of the vector2 object.
	/// </summary>
	/// <returns></returns>
	float mag();

	/// <summary>
	/// Returns the value of the dot product of the vector2 object and the input vector.
	/// </summary>
	/// <param name="vector"></param>
	/// <returns></returns>
	float dotP(const vector2 &vector);

	/// <summary>
	/// Returns the angle between the vector2 object and the input vector in degrees.
	/// </summary>
	/// <param name="vector"></param>
	/// <returns></returns>
	float angleB(vector2 vector);

	/// <summary>
	/// Returns the perpendicular of the vector2 object.
	/// </summary>
	/// <returns></returns>
	vector2 perpendicular();

	/// <summary>
	/// Checks if vector2 object's and the input vector's x and y components are the same or not.
	/// </summary>
	/// <param name="vector"></param>
	/// <returns></returns>
	bool isEqual(vector2 vector);

	/// <summary>
	/// Redefines the X and Y components of the vector2 object.
	/// </summary>
	/// <param name="nx"></param>
	/// <param name="ny"></param>
	void set(float nx, float ny);

	/// <summary>
	/// Returns a new vector which is the multiplication of the two input vectors
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	vector2 multiply(vector2 v1, vector2 v2);

};
#endif