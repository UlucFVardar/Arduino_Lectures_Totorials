//-----------@Author by UlucFurkanVardar

const int trig =12;
const int echo= 11;
const int led1=10;
const int led2=9;
const int led3=8;
const int led4=7;
const int led5=6;
const int Buzzer=5;
                  //sabit kalmasını istediğimiz değişkenlerimiz (pin numaralarımız)
int sure=0;
int mesafe=0;
                  //üzerinde işlem yapmak amacıyla oluşturduğumuz değişkenler.
void setup() {
pinMode(trig, OUTPUT);  //ultrosonik sensör yardımıyla bir ses dalgası yollayacağımız pin
pinMode(echo, INPUT);   //yolladığımız dalganın geri dönüşünde bize uyarı verecek olan pin
Serial.begin(9600);     //serial monütör başlangıcı
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(Buzzer,OUTPUT);
}

void loop() {
digitalWrite(trig, HIGH);       //bir dalga gönderiyoruz.
delayMicroseconds(1000);        //biraz bekliyoruz.
digitalWrite(trig, LOW);        //dalga oluşumunu durduruyoruz
sure = pulseIn(echo, HIGH);     //pulseIn fonksiyonu bize aldığı parametro olan echo pinindeki dalga geri gelişinin ne kadar sürdüğünü geri döndürüyor.
mesafe = (sure/2) / 29.1;       //bu süre gidiş ve geliş için ayrıca sesin havada iletilme hızı olan 29.1 e böldüğümüzde bulduğumuz sayı cisimin sensörden olan uzaklığına eşit olacak.
Serial.print("Mesafe: ");       
Serial.print(mesafe);
Serial.println(" cm");          //print fonksiyonları ile birlikte serial porta bu mesafe bilgisini yazıyoruz.
if(mesafe>40)     {digitalWrite(led1,HIGH); digitalWrite(led2,LOW);  digitalWrite(led3,LOW);  digitalWrite(led4,LOW);  digitalWrite(led5,LOW);  digitalWrite(Buzzer,LOW);}
else if(mesafe>30){digitalWrite(led1,HIGH); digitalWrite(led2,HIGH); digitalWrite(led3,LOW);  digitalWrite(led4,LOW);  digitalWrite(led5,LOW);  digitalWrite(Buzzer,LOW);}
else if(mesafe>20){digitalWrite(led1,HIGH); digitalWrite(led2,HIGH); digitalWrite(led3,HIGH); digitalWrite(led5,LOW);  digitalWrite(led4,LOW);  digitalWrite(Buzzer,LOW);}
else if(mesafe>10){digitalWrite(led1,HIGH); digitalWrite(led2,HIGH); digitalWrite(led3,HIGH); digitalWrite(led4,HIGH); digitalWrite(led5,LOW);  digitalWrite(Buzzer,LOW); }
else if(mesafe>5) {digitalWrite(led1,HIGH); digitalWrite(led2,HIGH); digitalWrite(led3,HIGH); digitalWrite(led4,HIGH); digitalWrite(led5,HIGH); digitalWrite(Buzzer,HIGH); }
else              {digitalWrite(led1,HIGH); digitalWrite(led2,HIGH); digitalWrite(led3,HIGH); digitalWrite(led4,HIGH); digitalWrite(led5,HIGH); digitalWrite(Buzzer,HIGH);}

delay(250);

}
