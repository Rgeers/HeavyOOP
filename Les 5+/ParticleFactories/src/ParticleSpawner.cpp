#include "ParticleSpawner.h"
#include "CurvingParticle.h"
#include "ThirdParticle.h"


void ParticleSpawner::setOrigin(int x,int y) {
	particleAmount = 0;
	maxParticles = 50;
	originX = x;
	originY = y;
}

void ParticleSpawner::setCurvingParticleRatio(float ratio) {
	curvingParticleRatio = ratio;
}

void ParticleSpawner::setColors(ofColor innerColor, ofColor centerColor, ofColor outerColor) {

}

Particle* ParticleSpawner::emit() {
	
	if (particleAmount <= maxParticles) {
		Particle* newParticle;
		int chooseParticle = ofRandom(3);
		if (chooseParticle == 0) {
			newParticle = new CurvingParticle(originX, originY);
		}
		else if (chooseParticle == 1) {
			newParticle = new Particle(originX, originY);
		}
		else {
			newParticle = new ThirdParticle(originX, originY);
		}
		//particleAmount++;
		return newParticle;
	}
	

}