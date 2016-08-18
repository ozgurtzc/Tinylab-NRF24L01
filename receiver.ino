#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h"
int msg[1];
RF24 radio(8,9);
const uint64_t pipe = 0xE8E8F0F0E1LL;
int 1 = 13;
int 2 = 12;
int 3 = 11;

int a;
void setup(void){
 Serial.begin(9600);
 radio.begin();
 radio.openReadingPipe(1,pipe);
 radio.startListening();
 pinMode(LED1, OUTPUT);}

void loop(void){
 if (radio.available()){
   bool done = false;    
   while (!done){
     done = radio.read(msg, 1);      
     Serial.println(msg[0]);
     if (msg[0] == 111){
     delay(10);
     for(a = 0; a < 4; a++) {
     Serial.print(a, digitalWrite(LEDa, HIGH);}
     else {digitalWrite(LED1, LOW);}
     delay(10);}}
 else{Serial.println("No radio available");}}
