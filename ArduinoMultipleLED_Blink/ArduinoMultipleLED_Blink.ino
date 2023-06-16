int led1=1;
int led2=2;
int led3=3;
int led4=4;

void setup() 
{
// pinMode(pin,mode);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);

}

void loop() 
{
digitalWrite(led1,HIGH);
delay(200);
digitalWrite(led1,LOW);
delay(200);
digitalWrite(led2,HIGH);
delay(200);
digitalWrite(led2,LOW);
delay(200);
digitalWrite(led3,HIGH);
delay(200);
digitalWrite(led3,LOW);
delay(200);
digitalWrite(led4,HIGH);
delay(200);
digitalWrite(led4,LOW);
delay(200);
}
