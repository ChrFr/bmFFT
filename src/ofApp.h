#pragma once
//#define OF_SOUND_PLAYER_OPENAL
//#undef OF_SOUND_PLAYER_FMOD
#include "ofMain.h"
#include "bmFFT.h"

#define BUFFER_SIZE 512
#define MAGNITUDE 8
#define N_BANDS 30

class ofApp : public ofBaseApp{

public:

	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	void audioReceived(float * input, int bufferSize, int nChannels);

private:
	float* samples;
	float* bandVolumes;
	int bufferCounter;

	ofSoundStream soundStream;
};