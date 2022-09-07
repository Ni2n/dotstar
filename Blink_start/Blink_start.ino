#include <FastLED.h>


#define NUM_LEDS 11


#define DATA_PIN 3
#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];



//DarkRed=DarkBlue
//Red=Blue
//Pink=MidnightBlue



void setup() { 

     FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
    // FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
    // FastLED.addLeds<SK9822, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
}


void Blue() //Blue 8-9,7-10, 3-4-5-6, 
{
  leds[8]=CRGB(175,125,31);
  leds[9]=CRGB(175,125,31);
  FastLED.show();
  delay(600);
 
  leds[10]=CRGB(175,125,31);
  leds[7]=CRGB(175,125,31);
  FastLED.show();
  delay(500);

  leds[3]=CRGB(255,255,200);
  FastLED.show();
  delay(450);
  leds[4]=CRGB(175,125,31);
  FastLED.show();
  delay(400);
  leds[5]=CRGB(175,125,31);
  FastLED.show();
  delay(440);
  leds[6]=CRGB(255,255,200);
  FastLED.show();
  delay(420);

  leds[0]=CRGB(255,255,200);
  FastLED.show();
  delay(400);

  leds[1]=CRGB(175,125,31);
  FastLED.show();
  delay(300);

  leds[2]=CRGB(255,255,200);
  FastLED.show();
  delay(200); 

  }

  
void White ()
{
  leds[1]=CRGB(255,255,255);
leds[2]=CRGB(255,255,255);
FastLED.show();
delay(200);

leds[4]=CRGB(255,255,255);
leds[3]=CRGB(255,255,255);
FastLED.show();
delay(250);

leds[9]=CRGB(255,255,255);
leds[10]=CRGB(255,255,255);
FastLED.show();
delay(300);


leds[7]=CRGB(255,255,255);
leds[8]=CRGB(255,255,255);
FastLED.show();
delay(200);

leds[6]=CRGB(255,255,255);
leds[5]=CRGB(255,255,255);
FastLED.show();
delay(100); 

leds[0]=CRGB(255,255,255);
FastLED.show();
delay(70);

  }
  
void White_V2() //3-4-5-6,rest

{

 for (int a=0; a<11; a++)
    {
  
  for (int b=3; b<7; b++)
  {
    leds[b]=CRGB::White;
    FastLED.show();
    delay(300);
    }
    
  for (int c=0; c<3; c++){  
    
    for (int d=7; d<11; d++)
    {
    leds[d]=CRGB::White; 
    FastLED.show();
    }
    leds[c]=CRGB::White;
    FastLED.show();
    }
  }
    delay(200); 
                   
  }

void Gradient_Red() {


leds[0]=CRGB(10,10,255); 
leds[6]=CRGB(10,10,255); 
leds[7]=CRGB(10,10,255); 
leds[5]=CRGB(30,30,255);
leds[8]=CRGB(30,30,255);
leds[1]=CRGB(50,50,255);
leds[4]=CRGB(50,50,255);
leds[9]=CRGB(50,50,255);
leds[2]=CRGB(70,70,250);
leds[3]=CRGB(70,70,250);
leds[10]=CRGB(70,70,250);

FastLED.show();
delay(800);

for(int i=0; i<11; i++){
  leds[i]=CRGB::Black;
  FastLED.show();
  delay(200);
  
}

  }


 void Gradient_Red_Blink(){
    
    
leds[0]=CRGB(10,10,255); 
leds[6]=CRGB(10,10,255); 
leds[7]=CRGB(10,10,255); 
leds[5]=CRGB(30,30,255);
leds[8]=CRGB(30,30,255);
leds[1]=CRGB(50,50,255);
leds[4]=CRGB(50,50,255);
leds[9]=CRGB(50,50,255);
leds[2]=CRGB(70,70,250);
leds[3]=CRGB(70,70,250);
leds[10]=CRGB(70,70,250);

FastLED.show();
delay(2000);

leds[0]=CRGB::Black;
leds[6]=CRGB::Black; 
leds[7]=CRGB::Black; 
leds[5]=CRGB::Black;
leds[8]=CRGB::Black;
leds[1]=CRGB::Black;
leds[4]=CRGB::Black;
leds[9]=CRGB::Black;
leds[2]=CRGB::Black;
leds[3]=CRGB::Black;
leds[10]=CRGB::Black;
FastLED.show();
delay(800);

}
  
void Gradient_White()

  {

    
    
leds[0]=CRGB(255,255,255); 
leds[6]=CRGB(255,255,255); 
leds[7]=CRGB(255,255,255); 
leds[5]=CRGB(255,255,220);
leds[8]=CRGB(255,255,220);
leds[1]=CRGB(255,255,200);
leds[4]=CRGB(255,255,200);
leds[9]=CRGB(255,255,200);
leds[2]=CRGB(255,255,190);
leds[3]=CRGB(255,255,190);
leds[10]=CRGB(255,255,190);

FastLED.show();
delay(2000);

for(int i=0; i<11; i++){
  leds[i]=CRGB::Black;
  FastLED.show();
  delay(1000);
  
   }}
void loop() 
{ 

  //Blue();
  //White();
  //White_V2();
  //Gradient_Red();
  Gradient_Red_Blink();
  //Gradient_White();
}

    
    
