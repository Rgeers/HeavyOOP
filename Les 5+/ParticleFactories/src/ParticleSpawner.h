#pragma once
#include "Particle.h"
class ParticleSpawner
{
public:
	void setOrigin(int x, int y);
	void setCurvingParticleRatio(float ratio);
	void setColors(ofColor innerColor, ofColor centerColor, ofColor outerColor);
	Particle* emit();

private:
	int originX;
	int originY;
	int maxParticles = 50;
	int particleAmount;
	float curvingParticleRatio;
	ofColor inner;
	ofColor outer;
public:
};

