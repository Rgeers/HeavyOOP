#include "ThirdParticle.h"

ThirdParticle::ThirdParticle(int startX, int startY) : Particle(startX, startY) {
	//Radius zou echt overdreven groot moeten zijn, doet 'ie niet
	radius = ofRandom(900, 1000);
	position = ofPoint(startX,
		startY);

	
	speed = ofVec2f(ofRandom(-5, 5),
		ofRandom(-5, 5));

	innerColour = ofColor(ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225));
	outerColour = ofColor(ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225));
	centerColour = ofColor(ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225));
}

void ThirdParticle::setColours(ofColor center, ofColor inner, ofColor outer) {
	//Om te kijken of hij ook echt van kleur veranderd heb ik outer = outerColour gedaan - geen resultaat
	centerColour = center;
	innerColour = inner;
	outer = outerColour;
}

void ThirdParticle::move() {
	//Dit werkte wel in m'n eigen project file, ik weet niet waarom hij niet beweegt
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


void ThirdParticle::draw() {
	ofSetColor(outerColour);
	ofDrawCircle(position.x, position.y, radius * 2.0);

	ofSetColor(innerColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius * 0.25);
}


	void ThirdParticle::update() {
		innerColour = ofColor(ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225));
		outerColour = ofColor(ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225));
		centerColour = ofColor(ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225), ofRandom(0, 225));
}

