//
//  SoundManager.h
//  playAudioStream 
//
//  Created by Guillem Galimany on 27/3/17.
//
//

#pragma once

#include "ofMain.h"
#include <stdio.h>

#ifndef SoundManager_h
#define SoundManager_h

#include "Sample.h"


class SoundManager  {
    
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


#endif /* SoundManager_hp */
