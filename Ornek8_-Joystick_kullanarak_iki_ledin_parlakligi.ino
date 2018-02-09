//-----------@Author by UlucFurkanVardar


const int X_PIN = A0;
const int Y_PIN = A5;
const int LED1=9;
const int buzzer=6;

int degerB;
int degerL;
          //pinlerimize anlamlı isimler vererek kodlumuza devam ediyoruz.
void setup() {
pinMode(LED1, OUTPUT);
pinMode(buzzer, OUTPUT);

//pin MOdları ayarlandı.
}

void loop() {


  degerB=map(analogRead(X_PIN),0,1023,0,255);
  degerL=map(analogRead(Y_PIN),0,1023,0,255);
  analogWrite(LED1,degerL);
  analogWrite(buzzer,degerB);

    

}
