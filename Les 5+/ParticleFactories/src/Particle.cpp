#include "Particle.h"

Particle::Particle(int startX, int startY) {
    position = ofPoint(startX,
                       startY);


    speed = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));

    innerColour = ofColor(31, 127, 255, 127);
    outerColour = ofColor(128, 255, 255, 15);

	//dieTime = false;
}

void Particle::setColours(ofColor center, ofColor inner, ofColor outer) {
    centerColour = center;
    innerColour = inner;
    outerColour = outer;
}

void Particle::move() {
    position += speed;
	timeAlive++;

	//if (timeAlive >= time2Die)
	//{
		//dieTime = true;
	//}

}


void Particle::draw() {
	if (timeAlive < time2Die) {


		ofSetColor(outerColour);
		ofDrawCircle(position.x, position.y, radius * 2.0);

		ofSetColor(innerColour);
		ofDrawCircle(position.x, position.y, radius);

		ofSetColor(centerColour);
		ofDrawCircle(position.x, position.y, radius * 0.25);

	}
}

bool Particle::dieTime() {
	return timeAlive >= time2Die;
}
