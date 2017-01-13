#include "ofApp.h"

void ofApp::setup() {

    for (unsigned int i = 0; i < NUM_STARS; i++) {
        stars.push_back(new Star());
    }
}

void ofApp::update() {

    speed = ofMap(mouseX, 0, ofGetWidth() / 2, 0, 20);

    for (unsigned int i = 0; i < NUM_STARS; i++) {
        Star *s = stars.at(i);
        // s->speed = speed;
        s->update();
    }

}

void ofApp::draw() {
    ofSetBackgroundColor(ofColor::black);

    ofPushMatrix();


    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    ofRotateZ(rotation.z);

    for (unsigned int i = 0; i < NUM_STARS; i++) {
        Star *s = stars.at(i);
        s->draw();
    }



    ofPopMatrix();

    rotation.z += 0.98;

}

void ofApp::mouseMoved(int x, int y) {

}


