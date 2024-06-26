
const int tempsensorpin=A0;
const int buzzerpin=4;
const float temperatureThreshold=8.2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzerpin,OUTPUT);
digitalWrite(buzzerpin,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue=analogRead(tempsensorpin);
float temperature=sensorValue*(3.0/1023.0)*10;
Serial.print("Temperature : ");
Serial.print(temperature);
Serial.println("*c");
if(temperature>temperatureThreshold)
{
  digitalWrite(buzzerpin,HIGH);
}
else 
{
  digitalWrite(buzzerpin,LOW);
}
}

