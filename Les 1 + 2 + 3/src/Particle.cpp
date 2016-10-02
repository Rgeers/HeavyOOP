#include "Particle.h"

Particle::Particle() {
	radius = ofRandom(0, 20);
	position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 2);

	//speed = ofVec2f(0.001f, 0.001f);
	 speed = ofVec2f(ofRandom(-1, 1), ofRandom(-1, 1));
	// speed.x en speed.y kunnen het aanpassen

	innerColour = ofColor(ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225));
	outerColour = ofColor(ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225));
}

void Particle::setup() {

}

void Particle::move() {
//Hoe krijg ik hier de huidige screen width en height? Elke keer dat ik die gebruikt hebt roept hij dat ik die floats niet mag converten.
	float screenWidth = 500;
	float screenHeight = 500;
	if (position.x > screenWidth || position.x < 0) {
		speed.x = -speed.x;
	}
	if (position.y > screenHeight || position.y < 0) {
		speed.y = -speed.y;
	}
	
	position.x += speed.x;
	position.y += speed.y;
}

void Particle::draw() {
	ofSetColor(outerColour);
	ofDrawCircle(position.x, position.y, radius * 2);

	ofSetColor(innerColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius *0.25);
}