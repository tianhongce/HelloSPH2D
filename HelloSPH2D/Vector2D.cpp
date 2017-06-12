#include "Vector2D.h"


Vector2D::Vector2D()
{
}


Vector2D::~Vector2D()
{
}

Vector2D::Vector2D(float x, float y)
{
	this->x = x;
	this->y = y;
}

Vector2D::Vector2D(int x, int y)
{
	this->x = x;
	this->y = y;
}

Vector2D::Vector2D(Vector2D a, int b)
{
	this->x = a.x*b;
	this->y = a.y*b;
}

float distSquared(Vector2D a, Vector2D b)
{
	return (a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y);
}
float dist(Vector2D a, Vector2D b)
{
		return sqrt(distSquared(a, b));
}


Vector2D Vector2D::operator + (Vector2D a)
{
	return Vector2D(this->x + a.x, this->y + a.y);
}

Vector2D Vector2D::operator - (Vector2D a)
{
	return Vector2D(this->x - a.x, this->y - a.y);
}

Vector2D operator * (Vector2D a, int n)
{
	return Vector2D(a.x*n, a.y*n);
}

Vector2D operator / (Vector2D a, int n)
{
	return Vector2D(a.x/n, a.y/n);
}
