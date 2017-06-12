#pragma once
#include "Vector2D.h"
#include "Particle.h"

#define PI 3.141592657f

class SPH
{
public:
	SPH();
	~SPH();
	void initFluid();
public:
	float kernel;
	int numParticle;
public:
	//kernel function
	float poly6(float r2){ return 315.0f / (64.0f * PI * pow(kernel, 9)) * pow(kernel*kernel - r2, 3); }
	float spiky(float r){ return -45.0f / (PI * pow(kernel, 6)) * (kernel - r) * (kernel - r); }
	float visco(float r){ return 45.0f / (PI * pow(kernel, 6)) * (kernel - r); }

public:
	void simulate();

	vector<Particle*> particles;
	void addParticle(Particle *a);
	vector<Particle*> getParticles();
};

