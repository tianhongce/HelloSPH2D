#pragma once
#include "Vector2D.h"
#include <vector>

using namespace std;

class Particle
{
public:
	Particle();
	Particle(Vector2D a);
	~Particle();

public:
	Vector2D position;
	Vector2D velocity;
	Vector2D acceleration;

	Vector2D pressure;
	Vector2D viscosity;
	Vector2D gravity;
	Vector2D surface;

	float density;

	vector<Particle*> neighbors;

};

