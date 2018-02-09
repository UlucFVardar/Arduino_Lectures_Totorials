//-----------@Author by UlucFurkanVardar

const int LED = 9 ;
//Const belli bir veri yapısındaki değiştkeni sabit olarak atamak için kullanılır.
//Hiç bir şekilde program içerisinde değiştirilemez.
//tek başına veri yapısı int, float, double, boolean tipindeki veri yapıları kod içerisinde değiştirilebilir.

void setup() {                   //void setup kısmı ilk açılışta ilk yapılacak düzenlemelerin olduğu bir nevi backround işleridir.
  pinMode(LED, OUTPUT);      //bu kısımda 13. pinimizi bir dijital çıkış olrak ayarladık.
}

void loop() {                   //void loop kısmı ise programımız içerisinde yapılması gerekenleri kapsar.
  //ve sürekli olarak bu komut satırları kontrol edilir ve uygulanır.
  digitalWrite(LED, HIGH); //kırmızıLED adlı değişken yani 9 , 9.pine HIGH voltaj gönderilir.
  delay(1000);                    //bir saniye bekleme ardından
  digitalWrite(LED, LOW);  // bu güç kapatılır.
  delay(1000);                    // tekrar bir saniye beklenir
}


//bu kod sayesinde 13 numaralı pine bağlı olan led birer saniye aralıklarla yanıp sönecektir.


