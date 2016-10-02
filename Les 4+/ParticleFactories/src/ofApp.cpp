#include "ofApp.h"
#include "ParticleSpawner.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(ofColor::black);

	spawner1 = ParticleSpawner();
	spawner1.setOrigin(100, 100);
	spawner1.setCurvingParticleRatio(0.1);

	spawner2 = ParticleSpawner();
	spawner2.setOrigin(400, 400);
	spawner2.setCurvingParticleRatio(0.8);

	spawner3 = ParticleSpawner();
	spawner3.setOrigin(250, 250);
	spawner3.setCurvingParticleRatio(0.6);
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < particles.size(); ++i) {
		particles[i] -> move();
	}

	Particle* freshParticle = spawner1.emit();
	particles.push_back(freshParticle);
	Particle* freshParticle2 = spawner2.emit();
	particles.push_back(freshParticle2);
	Particle* freshParticle3 = spawner3.emit();
	particles.push_back(freshParticle3);
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < particles.size(); ++i) {
		particles[i] -> draw();
	}
}
