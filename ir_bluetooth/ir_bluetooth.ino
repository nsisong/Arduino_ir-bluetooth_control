#include <IRremote.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(11, 12);
const int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;

int pin_num = 8;
int pin[] = {3, 4, 5, 6, 7, 8, 9, 10};

void ir_crtl(){
  // receive ir and decode the ir for control

}
void bluetooth_ctrl(){
  // receive bluetooth commans via softwareSerial for contral

}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);
  irrecv.enableIRIn();
  
  for (int i = 0; i < pin_num; i++){
    pinMode(pin[i], OUTPUT);
  }

  
}

void loop() {
  // put your main code here, to run repeatedly:

}
