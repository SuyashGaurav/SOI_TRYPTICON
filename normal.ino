//#include <Servo.h>
#include <NewPing.h>
#define MLa 9
#define MLb 8
#define MRa 11
#define MRb 10
#define trigpin 7
#define echopin 6
#define trigpin2 3
#define echopin2 4
bool movestraight =false;
#define maximum_distance 200
#define maximum_distance2 200
int distance =100;
NewPing sonar1(trigpin,echopin,maximum_distance), sonar2(trigpin2,echopin2,maximum_distance2);

//Servo my_servo;


void setup() {
  // put your setup code here, to run once:
  pinMode(MLa,OUTPUT);
  pinMode(MLb,OUTPUT);
  pinMode(MRa,OUTPUT);
  pinMode(MRb,OUTPUT);
  //my_servo.attach(7);
  //my_servo.write(115);
  delay(1000);
  Serial.begin(9600);
  

}
void moveforward()
{
    digitalWrite(MRa,HIGH);
    digitalWrite(MRb,LOW);
    digitalWrite(MLa,HIGH);
    digitalWrite(MLb,LOW);
    }


void moveleft()
{
    digitalWrite(MRa,HIGH);
    digitalWrite(MRb,LOW);
    digitalWrite(MLa,LOW);
    digitalWrite(MLb,HIGH);
    delay(1000);
}

void moveright()
{
    digitalWrite(MRa,LOW);
    digitalWrite(MRb,HIGH);
    digitalWrite(MLa,HIGH);
    digitalWrite(MLb,LOW);
    delay(1000);
}
void moverighta()
{
    digitalWrite(MRa,LOW);
    digitalWrite(MRb,HIGH);
    digitalWrite(MLa,HIGH);
    digitalWrite(MLb,LOW);
    delay(500);
}
int distance1()
{
    delay(50);
    int cm=sonar1.ping_cm();
      return cm;
}
int distance2()
{
    delay(50);
    int cm=sonar2.ping_cm();
      return cm;
}


void loop() {
   float distance1i=distance1();
    float distance2i=distance2();
    Serial.println(distance1i);
    Serial.print("distance");
    Serial.println(distance2i);
    
  
    if(distance1i<9 && distance1i!=0){
     if(distance2i<15){
        moveright();
      }
     else{
        moveleft();
     }
      
    }
    else if(distance2i<5){
        moverighta();
    }
    else{ 
      moveforward();
    }
}
