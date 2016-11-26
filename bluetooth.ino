 #include <SoftwareSerial.h>// import the serial library

SoftwareSerial bt(10, 11); // RX, TX
int ledpin=8;
int BluetoothData; // the data given from Computer

void setup() {
  // put your setup code here, to run once:
  bt.begin(9600);
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   if (bt.available()){
    BluetoothData=bt.read();
    if(BluetoothData=='a'){
      digitalWrite(ledpin,1);
   }
    if (BluetoothData=='s'){
      digitalWrite(ledpin,0);
  }
}
delay(100);// prepare for next data ...
}
