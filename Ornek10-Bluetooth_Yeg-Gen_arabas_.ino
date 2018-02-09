//-----------@Author by UlucFurkanVardar
//Appinventor isik adlı proje!!

const int in1 = 11;//SOL
const int in2 = 10;//SOL
const int in3 = 5;
const int in4 = 6;
char tus;

void setup(){
Serial.begin(9600);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);

}
void loop(){
  if (Serial.available() > 0) {
  tus = (char)Serial.read();

Serial.println(tus);
if( tus == 'I' ){
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);

}
else if( tus == 'R' ){
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);



}
else if( tus == 'L' ){
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);


}
else if( tus == 'G' ){
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
}
else if( tus == 'S' ){
 digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
}
else{
  digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
}

}

}

//app inventor Kullanarak uzaktan kumandalı araba yapmamıza yardımcı olan kod.
