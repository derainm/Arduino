  #include <SoftwareSerial.h>
  SoftwareSerial NodeMCU(D5,D6);
void setup() {
  // put your setup code here, to run once:
  pinMode(D5,INPUT);
  pinMode(D6,OUTPUT);
Serial.begin(115200);
    NodeMCU.begin(115200);     
}

void loop() {
  // put your main code here, to run repeatedly:
          String content = "";
          char character;
          while(NodeMCU.available()>0) {
          character = NodeMCU.read();
          content += character;
          }
      if(content!="")
      {
        Serial.println(content);
      }
}
