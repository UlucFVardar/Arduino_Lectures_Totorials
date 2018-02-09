//-----------@Author by UlucFurkanVardar

const int LED=5; // sadece ve sadece analog olan pinler yazılabilir.
const int Buzzer=6;

const int POTANSIYOMETRE=A0;
//pinlerimizin numaralarını kullanmak yerine vir sabit değişken kullanarak isimlendirdik.
int potansiyoMetredenOkunanDeger=0;
int cevrilmisDeger=0;
void setup() {                   //void setup kısmı ilk açılışta ilk yapılacak düzenlemelerin olduğu bir nevi backround işleridir.
pinMode(LED,OUTPUT);             //bu kısımda LED. pinimizi bir dijital çıkış olrak ayarladık.
pinMode(Buzzer,OUTPUT);             //bu kısımda Buzzer. pinimizi bir dijital çıkış olrak ayarladık.
}
void loop() {       
  potansiyoMetredenOkunanDeger=analogRead(POTANSIYOMETRE);            
//potansiyo metreden okuduğumuz değerler 0 ile 1023 arasındaki tüm değerlerdir.
//yani tam olarak 1024 tane değer vardır bu bizim ölçüm hassasiyetimizi çözünürlüğümüz verir.

//ancak biz ANALOGwrite komutunu kullanarak ledimize ancak 0 ila 255 değerleri arasında bir değer verebilirz bu kısmdaki çözünürlüğümüz 256dır.
// bu sebeble bu 0-1023 aralığını doğru bir şekilde 0-255 aralığına scale etmeliyiz.
cevrilmisDeger=map(potansiyoMetredenOkunanDeger,0,1023,0,255);
analogWrite(LED,cevrilmisDeger);
analogWrite(Buzzer,cevrilmisDeger);


}

// map komutunun kullanımı   ||| newvalue = map(oldvalue, rance1start,rance1end, rance2start, rance2end);

//bu kod sayesinde 9 numaralı pine takılı olan led potansiyometrenin ne kadar çevrili olduğuna bağlı olarak parlaklığı değişecek.
