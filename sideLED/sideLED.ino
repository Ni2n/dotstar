#include <FastLED.h>

#define NUM_LEDS 28
#define DATA_PIN 3
#define CLOCK_PIN 13
#define BRIGHTNESS  100
#define LED_TYPE    APA102

CRGB leds[NUM_LEDS];

void setup() {

FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS); 
FastLED.setBrightness(BRIGHTNESS);
}

void V1 ()
{

for (int i=0; i<27; i++){
  
leds[i]=CRGB::White;
FastLED.show();
delay(200);
leds[i]=CRGB::Black;

    }
}

void V2 () {

    leds[0]=CRGB::WhiteSmoke;
    leds[1]=CRGB::WhiteSmoke;
    leds[2]=CRGB::WhiteSmoke;
    leds[3]=CRGB::WhiteSmoke;
    leds[4]=CRGB::WhiteSmoke;
    leds[5]=CRGB::WhiteSmoke;
    leds[6]=CRGB::WhiteSmoke;
    leds[7]=CRGB::WhiteSmoke;
    leds[8]=CRGB::WhiteSmoke;
    leds[9]=CRGB::WhiteSmoke;
    leds[10]=CRGB::WhiteSmoke;
    leds[11]=CRGB::WhiteSmoke;
    leds[12]=CRGB::WhiteSmoke;
    leds[13]=CRGB::WhiteSmoke;
    leds[14]=CRGB::WhiteSmoke;
    leds[15]=CRGB::WhiteSmoke;
    leds[16]=CRGB::WhiteSmoke;
    leds[17]=CRGB::WhiteSmoke;
    leds[18]=CRGB::WhiteSmoke;
    leds[19]=CRGB::WhiteSmoke;
    leds[20]=CRGB::WhiteSmoke;
    leds[21]=CRGB::WhiteSmoke;
    leds[22]=CRGB::WhiteSmoke;
    leds[23]=CRGB::WhiteSmoke;
    leds[24]=CRGB::WhiteSmoke;
    leds[25]=CRGB::WhiteSmoke;
    leds[26]=CRGB::WhiteSmoke;
    leds[27]=CRGB::WhiteSmoke;
    leds[28]=CRGB::WhiteSmoke;
    FastLED.show();
    delay(200);

    for(int i=0; i<27; i++){
        leds[i]=CRGB::Black;
        FastLED.show();
        delay(100);
    }}

void V3(){

    leds[0]=CRGB::OrangeRed;
    leds[1]=CRGB::OrangeRed;
    leds[2]=CRGB::OrangeRed;
    leds[3]=CRGB::OrangeRed;
    leds[4]=CRGB::OrangeRed;
    leds[5]=CRGB::OrangeRed;
    leds[6]=CRGB::OrangeRed;
    leds[7]=CRGB::OrangeRed;
    leds[8]=CRGB::OrangeRed;
    leds[9]=CRGB::OrangeRed;
    leds[10]=CRGB::Crimson;
    leds[11]=CRGB::Crimson;
    leds[12]=CRGB::Crimson;
    leds[13]=CRGB::Crimson;
    leds[14]=CRGB::Crimson;
    leds[15]=CRGB::Crimson;
    leds[16]=CRGB::Crimson;
    leds[17]=CRGB::Crimson;
    leds[18]=CRGB::Crimson;
    leds[19]=CRGB::BlueViolet;
    leds[20]=CRGB::BlueViolet;
    leds[21]=CRGB::BlueViolet;
    leds[22]=CRGB::BlueViolet;
    leds[23]=CRGB::BlueViolet;
    leds[24]=CRGB::BlueViolet;
    leds[25]=CRGB::BlueViolet;
    leds[26]=CRGB::BlueViolet;
    leds[27]=CRGB::BlueViolet;
    leds[28]=CRGB::BlueViolet;
    FastLED.show();
    delay(300);

        for(int i=0; i<=27; i++){
        leds[i]=CRGB::Black;
        FastLED.show();
        delay(200);
    }}

void V4(){

        for (int a =0; a<=27; a++){
            for(int b=0; b<=3; b++){
                leds[b]=CRGB(120,255,50);
                FastLED.show();}
            for(int c=3; c<=8; c++){
                leds[c]=CRGB(120,255,100);
                FastLED.show();
            }
            for (int d=8; d<=17;d++){
                leds[d]=CRGB(160,255,160);
                FastLED.show();
            }
            for(int e=17; e<=22; e++){
                leds[e]=CRGB(170,255,170);
                FastLED.show();
            }
            for(int f=22; f<=28; f++){
            leds[f]=CRGB(180,255,190);
            FastLED.show();
            }


        }

    }

void V5(){
for(int i=14; i<=17; i++){
    leds[i]=CRGB::GhostWhite;
    FastLED.show();
}
delay(500);
for (int k=17; k<=21; k++){
    leds[k]=CRGB::GhostWhite;
    FastLED.show();
}
for (int j=11; j<=13; j++){
    leds[j]=CRGB::GhostWhite;
    FastLED.show();
}
delay(500);
for (int m=8; m<12; m++){
    leds[m]=CRGB::GhostWhite;
    FastLED.show();
}
for (int n=21; n<23; n++){
    leds[n]=CRGB::GhostWhite;
    FastLED.show();
}
delay(500);
for(int g=23; g<28; g++) 
{
leds[g]=CRGB::GhostWhite;
FastLED.show();}
for(int s=0; s<=8; s++) 
{
leds[s]=CRGB::GhostWhite;
FastLED.show();}
}

void V6 ()
{

for (int i=0; i<=27; i++){
  
leds[i]=CRGB(0,100,255);
FastLED.show();
delay(70);
leds[i]=CRGB::Black;

    }
}

void V7 ()
{

for (int i=0; i<=27; i++){
  
leds[i]=CRGB(255,0,150);
FastLED.show();
delay(300);

    }
}

void loop() {

V1();
V2();
V3();
V4();
V5();
V6();
V7();
}
