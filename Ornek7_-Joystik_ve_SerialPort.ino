//-----------@Author by UlucFurkanVardar


//serial port idenin sol üstündeki büyüteç gibi olan sembolle açılıyor arduinoyu taktıktan sonra ona tıklayın olanlara bakalım.:)
const int BUTON_PIN = 2;
const int X_PIN = 0;
const int Y_PIN = 1;
          //pinlerimize anlamlı isimler vererek kodlumuza decam ediyoruz.
void setup() {
pinMode(BUTON_PIN, INPUT);
digitalWrite(BUTON_PIN, HIGH);
Serial.begin(9600);   
//serial portun başlangıç komutu bu olmadan serial port ile birlikte çalışamayız.
}

void loop() {
Serial.print("Dugme: ");          
Serial.println(digitalRead(BUTON_PIN));
Serial.print("\n");

Serial.print("X-Ekseni: ");
Serial.print(analogRead(X_PIN));
Serial.print("\n");

Serial.print("Y-Ekseni: ");
Serial.println(analogRead(Y_PIN));
Serial.print("\n\n");

//Serial print fonksiyonlarını kullanarak ekrana joystickten aldığımız bilgileri yazdık.
delay(500);
}
