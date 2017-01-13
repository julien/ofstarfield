#pragma once

#include "ofMain.h"
#include "star.h"

class ofApp : public ofBaseApp {

public:
    void setup();
    void update();
    void draw();
    void mouseMoved(int x, int y);

    unsigned const int NUM_STARS = 2000;
    vector<Star*> stars;
    float speed;
    ofVec3f rotation;
};
