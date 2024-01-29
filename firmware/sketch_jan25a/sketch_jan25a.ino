#include <ArduinoBLE.h>



setup() {

  bool button;
  pinMode(d5, OUTPUT)
 

  BLE.setLocalName("Echo Walkers");

}

void loop() {
  serial.begin("First line run loop successful. ")
  serial.begin(300);

  digitalWrite(d5, LOW)

  int time = 5; 
  bool button;

  int but = d5;
  

  if(button == true)
  {
    digitalWrite(d5, HIGH);
    serial.print("Bluetooth library Intializiation")
    BLE.Begin()
    serial.print("Scanning for periphials ")
    BLE.Scan()
   
    }

  if(BLE.connected() == true) 
  {
    serial.print("The bluetooth device has successfully paired ");


  }

  if(button == false)
  {
    BLE.stopScan();
    
  }
  else {
    digitalWrite(d5, HIGH)
  }
  







  serial.print("Distance is" + distance + "Length is " + length + "Time is" + time )
}
