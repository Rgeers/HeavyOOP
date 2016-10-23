#pragma once


#include "ofMain.h"
#include "Particle.h"

class ThirdParticle : public Particle {
	public:
		ThirdParticle(int startX, int startY);

		virtual void setColors(ofColor inner, ofColor center, ofColor outer);
		virtual void move();
		void update();


};

