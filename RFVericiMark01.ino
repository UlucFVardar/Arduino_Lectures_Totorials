//-----------@Author by UlucFurkanVardar

#include <SPI.h>  
#include "RF24.h"    // gerekli kütüphaneler tanımlandı.

int veri=0;          // göndereceğimiz bilgiyi tutan değişkeni oluşturduk.

RF24 myRadio (7, 8);         // myRadio adında bir RF24 objesi oluşturduk.
byte addresses[][6] = {"0"}; // konuşucağımız adresi belirledik.

void setup()                
{
  Serial.begin(115200);
  delay(1000);
  myRadio.begin();  
  myRadio.setChannel(115);                        
  myRadio.setPALevel(RF24_PA_MAX);              
  myRadio.setDataRate( RF24_250KBPS ) ; 
  myRadio.openWritingPipe( addresses[0]);
  delay(1000);
  
  pinMode(2,INPUT); // buton kullanacağımız için 2.pini INPUT pini olarak belittik.
}

void loop()
{       


  
    if(digitalRead(2)==LOW){veri=1;}    //butonumuza eğer basıldıysa gönderdiğimiz veriyi 1 e eşitledik.
    else                   {veri=2;}    //diğer durumda yani basılmadığı durumda ise 2 ye eşitledik
     Serial.print ("if dışında göndermeden önce");
     Serial.println(veri);
     myRadio.write(&veri, sizeof(veri)); // bu komut satırı ise bilgiyi dönermemize yarıyor.
}

