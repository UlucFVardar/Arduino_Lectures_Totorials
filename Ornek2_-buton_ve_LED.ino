//-----------@Author by UlucFurkanVardar

const int LED=3; 
const int Button=7;
//pinlerimizin numaralarını kullanmak yerine bir sabit değişken kullanarak isimlendirdik.

void setup() {                   //void setup kısmı ilk açılışta ilk yapılacak düzenlemelerin olduğu bir nevi backround işleridir.
pinMode(LED,OUTPUT);             //bu kısımda 9. pinimizi bir dijital çıkış olrak ayarladık.
pinMode(Button,INPUT);           //2. pinimizi bir input pini olarak set ettik.
}

void loop() {                   //void loop kısmı ise programımız içerisinde yapılması gerekenleri kapsar.
                                //ve sürekli olarak bu komut satırları kontrol edilir ve uygulanır.
if(digitalRead(Button)==LOW){   //bir if yapısıyla kontrol yapıp butona basılıp basılmadığını kontrol ediyoruz.
  digitalWrite(LED,HIGH);       //eğer butona basılı ise ledimiz yanacak.
  }
else{
  digitalWrite(LED,LOW);        //aksi halde ledimiz kapanıyor.
  }

}


//bu kod sayesinde 9 numaralı pine takılı olan led butona basılı tutulduğu sürece yanıyor olacak aksi halde sönecek ,!!buton tipine göre görev tam tersi olaiblir.
