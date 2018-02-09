
//-----------@Author by UlucFurkanVardar
#include <SPI.h>
#include "RF24.h"      //gerekli kütüphaneleri ekledik

RF24 myRadio (7, 8);   // myRadio adında bir RF24 objesi oluşturduk

byte addresses[][6] = {"0"};
int veri = 0;

void setup()
{
  Serial.begin(115200);
  delay(1000);
  pinMode(10, OUTPUT);
  myRadio.begin();
  myRadio.setChannel(115);                     //   -------------------------------------
  myRadio.setPALevel(RF24_PA_MAX);             //   |   Address(adres): 0               |
  myRadio.setDataRate( RF24_250KBPS ) ;        //   |   Chanell(kanal): 155   |PİPE|    |
  myRadio.openReadingPipe(1, addresses[0]);    //   |   Data Rate: 250Kbps              |
  myRadio.startListening();                    //   -------------------------------------
  delay(1000);
}

void loop()
{

  if ( myRadio.available()) { 
    myRadio.read( &veri, sizeof(veri) ) ;     //kalandan veri okuma  // ALICI VERİSİ=GÖNDERİCİ VERİSİ
     Serial.print ("if içinde");
     Serial.println(veri);
   
    if (veri == 1) {
      digitalWrite(10, HIGH); //veri değerlendirilmesi
    }
    else {
      digitalWrite(10, LOW);
    }
  }

}


//alıcı olarak kullanılabilecek bir kod örneği RF24L01 modülü ile