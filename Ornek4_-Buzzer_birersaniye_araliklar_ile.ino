//-----------@Author by UlucFurkanVardar

const int Buzzer=9; 


void setup() {                 //void setup kısmı ilk açılışta ilk yapılacak düzenlemelerin olduğu bir nevi backround işleridir.
pinMode(Buzzer,OUTPUT);        //bu kısımda 2. pinimizi bir dijital çıkış olrak ayarladık.
}

void loop() {                   //void loop kısmı ise programımız içerisinde yapılması gerekenleri kapsar.
                                //ve sürekli olarak bu komut satırları kontrol edilir ve uygulanır.
digitalWrite(Buzzer,HIGH);      //Buzeer adlı değişken yani 9 , 9.pine HIGH voltaj gönderilir.
delay(1000);                    //bir saniye bekleme ardından 
digitalWrite(Buzzer,LOW);       // bu güç kapatılır.
delay(1000);                    // tekrar bir saniye beklenir 
}


//bu kod sayesinde 9 numaralı pine bağlı olan BUzzer birer saniye aralıklarla melodi çalacaktır.
