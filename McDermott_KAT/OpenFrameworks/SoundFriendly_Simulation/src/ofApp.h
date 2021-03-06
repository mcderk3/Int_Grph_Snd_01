#pragma once

#include "ofMain.h"
#include "ofxSimpleTimer.h"
#include "ofxSerial.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		bool		bSendSerialMessage;			// a flag for sending serial
		char		bytesRead[3];				// data from serial, we will be trying to read 3
		char		bytesReadString[4];			// a string needs a null terminator, so we need 3 + 1 bytes
		int			nBytesRead;					// how much did we read?
		int			nTimesRead;					// how many times did we read?
		float		readTime;					// when did we last read?

		ofSerial	serial;
		ofImage bgImage;
		ofTrueTypeFont font;

		ofxSimpleTimer timer1 ;
		ofx::IO::SerialDevice device;

		float getNormalizedProgress ( ) ;

       		ofColor color1;
       		ofColor fontColor;
            int pitchRandom;
       		string pitchValue;
       		string timerValue;
       		std::string text;

    		void timer1CompleteHandler( int &args ) ;
            void timer1StartedHandler( int &args ) ;





};
