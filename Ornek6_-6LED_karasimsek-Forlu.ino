//-----------@Author by UlucFurkanVardar
const int Ledler[]={2,3,4,5,6,7,8}; //bir array tanıkladık ve bu arrayin her bin indexinde bizim lederimizin bağlı olduğu pinlerin sayıları yazıyor.
int i=0;     //counter
void setup() {                 //void setup kısmı ilk açılışta ilk yapılacak düzenlemelerin olduğu bir nevi backround işleridir.
for( i=0 ; i<7 ; i++ ){
  pinMode(Ledler[i],OUTPUT); 
  }
}
void loop() {                   //void loop kısmı ise programımız içerisinde yapılması gerekenleri kapsar.
                                //ve sürekli olarak bu komut satırları kontrol edilir ve uygulanır.  
      for( i=0 ; i<7 ; i++ ){        
        digitalWrite(Ledler[i],HIGH);
        delay(100);      
      }      
      for( i=6 ; i>=0 ; i-- ){       
        digitalWrite(Ledler[i],LOW);
        delay(100);
     
      }
}


//bu kod sayesinde 6 adet led sırayla yanıp sönecek ve karaşimşek devresi oluşacak.
