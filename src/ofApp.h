#pragma once

#include "ofMain.h"
#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "Sample.h"

class ofApp : public ofBaseApp{
    
public:
    
    
    void setup();
    void update();
    void draw();
    void exit();
    
    void audioRequested 	(float * input, int bufferSize, int nChannels);
    
    
    int		bufferSamples;
    
    float 	* audio1;
    float   * audio2;
    float   * audio3;
    float   * audio4;
    
    
    Sample sample1;
    Sample sample2;
    Sample sample3;
    Sample sample4;
    
};

#endif

