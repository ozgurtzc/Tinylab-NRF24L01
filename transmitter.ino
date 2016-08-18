#include  <SPI.h> // To include SPI of interface
#include "nRF24L01.h" // To include RF24 libraries
#include "RF24.h" // To include RF24 libraries
int msg[1]; // We have created a variable message we send .
RF24 radio(8,9); //We defined use by RF24 library of 8. and 9. pın.
const uint64_t pipe = 0xE8E8F0F0E1LL; // To defined pipe
int SW4 = A5; // The pin is connected to the button (SWITCH4)

void setup(void){
 radio.begin(); // We start wireless communication.
 radio.openWritingPipe(pipe);} // We define the ID channel will make shipping .

void loop(void){
 if (digitalRead(SW1) == HIGH){ // If the button is pressed .
 msg[0] = 111; // Messages are written to the variable "1"
 radio.write(msg, 1);}} // Then send this message.
