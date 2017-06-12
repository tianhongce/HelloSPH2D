#include "SPH.h"


SPH::SPH()
{

}


SPH::~SPH()
{
}

void SPH::initFluid()
{
	Particle *p;

	for (float i = 0; i <= 0.4; i = i + 1)
	{
		for (float j = 0; j <= 0.6; j = j + 1)
		{
			p = new Particle(Vector2D(i, j));
			addParticle(p);
		}
	}
}

void SPH::addParticle(Particle *a)
{
	this->particles.push_back(a);
}
vector<Particle*> SPH::getParticles()
{
	return this->particles;
}