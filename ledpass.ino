int led=1;
int buttonpin=2;
int buttonpin2=3;
int buttonpin3=4;
int buttonpin4=5;
int buttonstate1=0;
int buttonstate2=0;
int buttonstate3=0;
int buttonstate4=0;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(buttonpin,INPUT);
pinMode(buttonpin2,INPUT);
pinMode(buttonpin3,INPUT);
pinMode(buttonpin4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstate1=digitalRead(buttonpin);
  buttonstate2=digitalRead(buttonpin2);
  buttonstate3=digitalRead(buttonpin3);
  buttonstate4=digitalRead(buttonpin4);
if(buttonstate1==HIGH && buttonstate4==HIGH 
  && buttonstate3==LOW && buttonstate2==LOW)
{
  digitalWrite(led,HIGH);
}
else
{
  digitalWrite(led,LOW);
}
}