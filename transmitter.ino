#include  <SPI.h> // SPI Arayüzünü dahil ettik.
#include "nRF24L01.h" // RF24 kütüpanelerini dahil ettik.
#include "RF24.h" // RF24 kütüpanelerini dahil ettik.
int msg[1]; //Göndereceğimiz mesaj değişkenini oluşturduk.
RF24 radio(8,9); //RF24 kütüphanesi tarafından kullanılacak olan 2 pinin 9. ve 10. pinlerin olduğunu belirttik.
const uint64_t pipe = 0xE8E8F0F0E1LL; // Pipe (kanal) tanımlamasını yaptık.
int SW1 = A5; // Buton'un bağlı olduğu pin (SWITCH1)

void setup(void){
 radio.begin(); // Kablosuz iletişimi başlattık.
 radio.openWritingPipe(pipe);} //Gönderim yapacağımız kanalın ID'sini tanımladık.

void loop(void){
 if (digitalRead(SW1) == HIGH){ //Eğer butona basılırsa.
 msg[0] = 111; //Mesaj değişkenine "1" yazılsın
 radio.write(msg, 1);}} //Sonra da bu mesaj gönderilsin.
