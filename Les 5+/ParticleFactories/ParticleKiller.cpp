#include "ParticleKiller.h"

//niks in deze void verandert, het checkt alleen maar hetzelfde, elke keer weer, daarom kan hij constant zijn.
const void ParticleKiller::killThem(vector<Particle*>& particles) {
	for (vector<Particle*>::iterator it = particles.begin(); it != particles.end();) {
		if ((*it)->dieTime()) {
			delete *it;
			it = particles.erase(it);
		}
		else {
			++it;
		}
	}
}