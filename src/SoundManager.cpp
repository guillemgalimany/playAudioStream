//
//  SoundManager.cpp
//  playAudioStream 
//
//  Created by Guillem Galimany on 27/3/17.
//
//

#include "SoundManager.h"




//--------------------------------------------------------------
void SoundManager::setup(){
    
    ofSoundStreamListDevices();
    
    
    ofBackground(255,255,255);
    ofSetFrameRate(30);
    
    audio1 = new float[256];
    audio2 = new float[256];
    audio3 = new float[256];
    audio4 = new float[256];
    
    int sampleRate = 44100;
    
    
    sample1.load("Guitar.wav"); // supports mono or stereo .wav files
    sample1.setLooping(true);
    sample1.play();
    sample1.setSpeed(2);
    
    
    sample2.load("GuitarLent.wav"); // supports mono or stereo .wav files
    sample2.setLooping(true);
    sample2.play();
    sample2.setSpeed(2);
    
    
    sample3.load("HornsMig.wav"); // supports mono or stereo .wav files
    sample3.setLooping(true);
    sample3.play();
    sample3.setSpeed(2);
    
    
    sample4.load("HornsRapid.wav"); // supports mono or stereo .wav files
    sample4.setLooping(true);
    sample4.play();
    sample4.setSpeed(2);
    
    
    
    ofSoundStreamSetup2(4, 0, this, sampleRate, 256, 4, 2);

    
    
    /*
     
     Implemented this function in openFrameworks/sound/ofSoundStream.cpp:
     
     void ofSoundStreamSetup2(int nOutputChannels, int nInputChannels, ofBaseApp * appPtr, int sampleRate, int bufferSize, int nBuffers, int devID){
     systemSoundStream.setDeviceID(devID);
     systemSoundStream.setup(appPtr, nOutputChannels, nInputChannels, sampleRate, bufferSize, nBuffers);
     
     }
     
     */
    
}

//--------------------------------------------------------------
void SoundManager::exit(){
    ofSoundStreamStop();
    ofSoundStreamClose();
    delete audio1;
    delete audio2;
    delete audio3;
    delete audio4;
    
    
}

//--------------------------------------------------------------
void SoundManager::update(){
    
    
    
}

void SoundManager::draw(){
    
    
    
}
//--------------------------------------------------------------

void SoundManager::audioRequested 	(float * output, int bufferSize, int nChannels){
    
    for (int i = 0; i < bufferSize; i++)
    {
        audio1[i] = output[i*nChannels    ] = sample1.update();
        audio2[i] = output[i*nChannels + 1] = sample2.update();
        audio3[i] = output[i*nChannels + 2] = sample3.update();
        audio4[i] = output[i*nChannels + 3] = sample4.update();
        
    }
    
    
}

