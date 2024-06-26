
const int tempsensorpin=A0;
int ledred=3;
int ledorange=4;
int ledyellow=5;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledred,OUTPUT);
 pinMode(ledorange,OUTPUT);
  pinMode(ledyellow,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue=analogRead(tempsensorpin);
float temperature=sensorValue*(3.0/1023.0)*10;
Serial.print("Temperature : ");
Serial.print(temperature);
Serial.println("*c");
if(temperature<=4)
{
digitalWrite(ledyellow,HIGH);
  digitalWrite(ledred,LOW);
  digitalWrite(ledorange,LOW);
}
else if(temperature<=6&&temperature>=4) 
{
  digitalWrite(ledred,LOW);
 digitalWrite(ledorange,HIGH);
  digitalWrite(ledyellow,LOW);
}
  else
  {
    digitalWrite(ledred,HIGH);
    digitalWrite(ledyellow,LOW);
    digitalWrite(ledorange,LOW);
}

}
