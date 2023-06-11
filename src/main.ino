#include <MozziGuts.h>
#include <Oscil.h> // oscillator template
#include <tables/sin2048_int8.h> // sine table for oscillator
#define DOOR_PIN 8
#define IGNITION_PIN 6
#define LED_PIN 13

// use: Oscil <table_size, update_rate> oscilName (wavetable), look in .h file of table #included above
Oscil <SIN2048_NUM_CELLS, AUDIO_RATE> aSin(SIN2048_DATA);

// control variable, use the smallest data size you can for anything used in audio
byte gain = 255;


void setup(){
  pinMode(DOOR_PIN, INPUT_PULLUP);    
  pinMode(IGNITION_PIN, INPUT);
  startMozzi(); // start with default control rate of 64
  aSin.setFreq(880); // set the frequency
}

bool alarmCondition(){
    if ( (digitalRead(IGNITION_PIN) == LOW) && (digitalRead(DOOR_PIN) == LOW) ) {
        digitalWrite(LED_PIN, HIGH);
        return true;
    }else{
        digitalWrite(LED_PIN, LOW);
        return false;
    }

}
void updateControl(){
  // as byte, this will automatically roll around to 255 when it passes 0
  if (not alarmCondition())
  {
      gain = 0;
      return;
  }
  gain = gain - 3 ;
}


int updateAudio(){
  return (aSin.next()* gain)>>8; // shift back to STANDARD audio range, like /256 but faster
}


void loop(){
  audioHook(); // required here
}
