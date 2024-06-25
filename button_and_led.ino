int led1=2;
int buttonpin=3;
int buttonstate=0;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(buttonpin,INPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  buttonstate=digitalRead(buttonpin);
  if(buttonstate==HIGH)
  {
    digitalWrite(led1,LOW);
  }
  else{
    digitalWrite(led1,HIGH);
  }
  // put your main code here, to run repeatedly:

}
