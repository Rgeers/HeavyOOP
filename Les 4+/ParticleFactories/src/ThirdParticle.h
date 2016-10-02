#pragma once


#include "ofMain.h"
#include "Particle.h"

class ThirdParticle : public Particle {
	public:
		ThirdParticle(int startX, int startY);

		virtual void move();
		void draw();
		void setColours(ofColor center, ofColor inner, ofColor outer);
		void update();

	protected:
		ofPoint position;
		float radius;
		ofVec2f speed;
		long lifetime;

		ofColor centerColour;
		ofColor innerColour;
		ofColor outerColour;

};

