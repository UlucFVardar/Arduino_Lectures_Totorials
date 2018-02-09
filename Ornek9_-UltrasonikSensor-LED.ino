//-----------@Author by UlucFurkanVardar

const int trig =2;
const int echo= 3;
                  //sabit kalmasını istediğimiz değişkenlerimiz (pin numaralarımız)
int sure=0;
int mesafe=0;
                  //üzerinde işlem yapmak amacıyla oluşturduğumuz değişkenler.
void setup() {
pinMode(trig, OUTPUT);  //ultrosonik sensör yardımıyla bir ses dalgası yollayacağımız pin
pinMode(echo, INPUT);   //yolladığımız dalganın geri dönüşünde bize uyarı verecek olan pin
Serial.begin(9600);     //serial monütör başlangıcı
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
delay(250);
}
