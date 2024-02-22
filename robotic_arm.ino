#include <Servo.h>

Servo s1[6];

float angle[6];
String str;




void setup() {
  s1[0].attach(D1);
  s1[1].attach(D2);
  s1[2].attach(D3);
  s1[3].attach(D4);
  s1[4].attach(D5);
  s1[5].attach(D6);

  
  s1[0].write(0);
  s1[1].write(0);
  s1[2].write(0);
  s1[3].write(0);
  s1[4].write(0);
  s1[5].write(0);
  
  Serial.begin(9600);
}

void loop() {
  
  Serial.println("Enter the Angles: ");
  
    while(Serial.available() == 0){
    }
  	str = Serial.readStringUntil('\n');
  Serial.println(str);
  
  	int i=0;
    char *ptr = strtok(const_cast<char*>(str.c_str()), ",");
 	while (ptr != NULL && i<6) {
    angle[i++] = atof(ptr);
    ptr = strtok(NULL, ",");
         
  }
  for(int i=0; i<6;i++){
    s1[i].write(angle[i]);
    Serial.println(angle[i]);
  }
  
}
