#pragma once
#include <math.h>

class Vector2D
{
public:
	Vector2D();
	Vector2D(float x, float y);
	Vector2D(int x, int y);
	Vector2D(Vector2D a, int b);
	~Vector2D();

public:
	float x;
	float y;

public:
	Vector2D operator + (Vector2D a);
	Vector2D operator - (Vector2D a);

	friend Vector2D operator * (Vector2D a, int n);
	friend Vector2D operator / (Vector2D a, int n);

	friend float distSquared(Vector2D a, Vector2D b);
	friend float dist(Vector2D a, Vector2D b);

};

