#include "ParticleSpawner.h"
#include "CurvingParticle.h"
#include "ThirdParticle.h"


void ParticleSpawner::setOrigin(int x,int y) {
	originX = x;
	originY = y;
}

void ParticleSpawner::setCurvingParticleRatio(float ratio) {
	curvingParticleRatio = ratio;
}

void ParticleSpawner::setColors(ofColor innerColor, ofColor outerColor) {

}

Particle* ParticleSpawner::emit() {
	Particle* newParticle;
	int chooseParticle = ofRandom(3);
	if (chooseParticle == 0) {
		printf("First");
		newParticle = new CurvingParticle(originX, originY);
	}
	else if(chooseParticle == 1) {
		printf("Second");
		newParticle = new Particle(originX, originY);
	}
	else {
		printf("Third");
		newParticle = new ThirdParticle(originX, originY);
	}
	
	return newParticle;

}