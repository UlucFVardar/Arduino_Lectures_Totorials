//-----------@Author by UlucFurkanVardar
//Appinventor isilkk adlı proje!!
const int KirmiziLED = 11;
const int SariLED = 10;
const int YesilLED = 9;
                          //ledlerimiz için kullanacaığımız pinleri isimlendirdik.
void setup() {
  Serial.begin(9600);
  pinMode(KirmiziLED,OUTPUT);
  pinMode(SariLED,OUTPUT);
  pinMode(YesilLED,OUTPUT);
}

void loop() {

  if (Serial.available() > 0) {     //eğer bluetooth modülü bağlı ise veya serial porttan ledleri istediğimiz gibi kullanabilirz.
    tus = (char)Serial.read();
    if(tus=='Y'){
      digitalWrite(KirmiziLED, LOW);
      digitalWrite(SariLED, LOW);
      digitalWrite(YesilLED, HIGH); 
      }
    else if (tus=='K'){
      digitalWrite(KirmiziLED, HIGH);
      digitalWrite(SariLED, LOW);
      digitalWrite(YesilLED, LOW); 
      }
    else if(tus=='S'){
      digitalWrite(KirmiziLED, LOW);
      digitalWrite(SariLED, HIGH);
      digitalWrite(YesilLED, LOW); 
      }
    else{
      digitalWrite(KirmiziLED, LOW);
      digitalWrite(SariLED, LOW);
      digitalWrite(YesilLED, LOW); 
      }
         
}

}

//bu kod appInventor üzerinden yazdığımız app ile birlikte gelen verilere göre ledlerimizi yakmamızı sağlar.
