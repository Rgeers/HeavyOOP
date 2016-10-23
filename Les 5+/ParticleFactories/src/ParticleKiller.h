#pragma once


#include "Particle.h"

class ParticleKiller {
public:
	//niks in deze void verandert, het checkt alleen maar hetzelfde, elke keer weer, daarom kan hij constant zijn.
	const void killThem(vector<Particle*>& particles);
};