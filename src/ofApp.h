#pragma once

#include "ofMain.h"
#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "Sample.h"
#include "SoundManager.h"

class ofApp : public ofBaseApp{
    
public:
    
    
    void setup();
    void update();
    void draw();
    
    SoundManager soundManager;
    
};

#endif

