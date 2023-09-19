int led=2;
int sen=3;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(sen,INPUT);
  delay(10000);
  Serial.begin(9600); 
  Serial.print("PIR sensor ready");
}

void loop()
{
  if (digitalRead(sen)==1){
    digitalWrite(led,HIGH);
    Serial.print("Motion detected");
 }

 else if (digitalRead(sen)==0){
    digitalWrite(led,LOW);
 }
    
}
