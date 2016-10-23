#include "ThirdParticle.h"

ThirdParticle::ThirdParticle(int startX, int startY) : Particle(startX, startY) {
	position = ofPoint(startX,
		startY);

	
	speed = ofVec2f(ofRandom(-50, 50),
		ofRandom(-50, 50));

	innerColour = ofColor(ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225));
	outerColour = ofColor(ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225));
	centerColour = ofColor(ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225));
}

void ThirdParticle::setColors(ofColor inner, ofColor center, ofColor outer) {
	innerColour = inner;
	centerColour = center;
	outerColour = outer;
}
void ThirdParticle::move() {
	
	float screenWidth = (int)ofGetScreenWidth();
	float screenHeight = (int)ofGetScreenHeight();
	if (position.x > screenWidth || position.x < 0) {
		speed.x = -speed.x;
	}
	if (position.y > screenHeight || position.y < 0) {
		speed.y = -speed.y;
	}
	
	position.x += speed.x;
	position.y += speed.y;
	update();
	
}

void ThirdParticle::update() {
	innerColour = ofColor(ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225));
	outerColour = ofColor(ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225));
	centerColour = ofColor(ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225));
	setColors(innerColour, centerColour, outerColour);
}



