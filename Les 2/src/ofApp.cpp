#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	part1 = Particle();
}

//--------------------------------------------------------------
void ofApp::update()
{
	part1.move();
}

//--------------------------------------------------------------
void ofApp::draw()
{
	for (int i = 0; i < 100; i++) {
		part1.draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{

}
