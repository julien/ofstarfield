#include "ofMain.h"
#include "ofApp.h"

int main() {

    ofGLFWWindowSettings settings;
    settings.width = 1200;
    settings.height = 900;
    settings.title = " ";
    settings.resizable = false;

    ofCreateWindow(settings);

	ofRunApp(new ofApp());

}
