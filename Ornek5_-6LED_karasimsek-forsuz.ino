//-----------@Author by UlucFurkanVardar

const int Led1=3; 
const int Led2=4; 
const int Led3=5; 
const int Led4=6; 
void setup() {                 //void setup kısmı ilk açılışta ilk yapılacak düzenlemelerin olduğu bir nevi backround işleridir.
pinMode(Led2,OUTPUT);  
pinMode(Led3,OUTPUT); 
pinMode(Led4,OUTPUT); 
}
void loop() {                   //void loop kısmı ise programımız içerisinde yapılması gerekenleri kapsar.
                                //ve sürekli olarak bu komut satırları kontrol edilir ve uygulanır.
digitalWrite(Led1,HIGH);
delay(200);
digitalWrite(Led2,HIGH);
delay(200);
digitalWrite(Led3,HIGH);
delay(200);
digitalWrite(Led4,HIGH);
delay(200);

                        // 200 milisaniyeyede bir ledler sırayla yanacak.
digitalWrite(Led1,LOW);
delay(200);
digitalWrite(Led2,LOW);
delay(200);
digitalWrite(Led3,LOW);
delay(200);
digitalWrite(Led4,LOW);
delay(200);
                        // 200 milisaniyeyede bir ledler sırayla sönecek.
}


//bu kod sayesinde 4 adet led sırayla yanıp sönecek ve karaşimşek devresi oluşacak.
