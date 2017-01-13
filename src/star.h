#pragma once

class Star {
public:
    float x;
    float y;
    float z;
    int speed;
    float pz;

    Star() {
        int w = ofGetWidth();
        int h = ofGetHeight();

        x = ofRandom(-w, w);
        y = ofRandom(-h, h);
        z = w;

        pz = z;

        speed = (int) ofRandom(10, 60);
    }

    void update() {
        z -= speed;

        if (z < 1) {
            int w = ofGetWidth();
            int h = ofGetHeight();

            x = ofRandom(-w, w);
            y = ofRandom(-h, h);
            z = w;
            pz = z;
        }
    }

    void draw() {
        float sx = ofMap(x / z, 0, 1, 0, ofGetWidth());
        float sy = ofMap(y / z, 0, 1, 0, ofGetHeight());

        float r = ofMap(z, 0, ofGetWidth(), 6, 0.2);

        float px = ofMap(x / pz, 0, 1, 0, ofGetWidth());
        float py = ofMap(y / pz, 0, 1, 0, ofGetHeight());

        ofSetColor(ofColor::white);
        ofFill();
        ofDrawEllipse(sx, sy, r, r);

        ofSetColor(ofColor(255, 255, 255, 50));
        ofNoFill();
        ofDrawLine(px, py, sx, sy);
    }
};
