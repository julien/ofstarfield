#include "ofApp.h"

void ofApp::setup() {

    for (unsigned int i = 0; i < NUM_STARS; i++) {
        stars.push_back(new Star());
    }
}

void ofApp::update() {

    speed = ofMap(mouseX, 0, ofGetWidth(), -1, 1);

    for (unsigned int i = 0; i < NUM_STARS; i++) {
        Star *s = stars.at(i);
        s->update();
    }

}

void ofApp::draw() {
    ofSetBackgroundColor(ofColor::black);

    ofPushMatrix();

    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    ofRotateZ(rotation.z * speed);

    for (unsigned int i = 0; i < NUM_STARS; i++) {
        Star *s = stars.at(i);
        s->drawLines = drawLines;
        s->draw();
    }
    ofPopMatrix();
    rotation.z += 0.98;

}

void ofApp::mouseMoved(int x, int y) {

}

void ofApp::mousePressed(int x, int y, int button) {
   drawLines = !drawLines;
}


