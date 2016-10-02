#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleSpawner.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		vector<Particle*> particles;
		ParticleSpawner spawner1;
		ParticleSpawner spawner2;
		ParticleSpawner spawner3;
};
