#pragma once


#include "ofMain.h"

class Particle {
    public:
        Particle(int startX, int startY);

        virtual void move();

        void draw();

		bool dieTime();

        void setColours(ofColor center, ofColor inner, ofColor outer);

    protected:
        ofPoint position;
		//deze verandert nooit. Hij wordt maar 1x toegewezen en blijft altijd die grootte - daarom constant.
        const float radius = ofRandom(10, 50);
        ofVec2f speed;
        long lifetime;
		int timeAlive = 0;
		//Deze verandert ook nooit. Ze leven maar 250 lang, gaat nooit veranderen.
		const int time2Die = 250;

        ofColor centerColour;
        ofColor innerColour;
        ofColor outerColour;

};

