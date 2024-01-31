#include <ArduinoBLE.h>           //library for low power bluetooth

blSetUp()
{
  BLE.begin(); // begins
  BLE.available();
  bleDevice.connect();
}
customConnection(uuid) // connect with uuid
{
  BLE.scanForUuid(uuid);
}
 


setup() {   

  bool button;                                        //intitialize the button as a True or False
  int time = 5;                                       //hold for five seconds to turn off 
  pinMode(d5, OUTPUT)                                 // Button cable will be connected to d5
 

  BLE.setLocalName("Echo Walkers");                   //set the name of bluetooth device to Echo Walker 

}

void loop() {

  digitalWrite(d5, HIGH);                            // Button will be on, when pressed bluetooth will activate 
  serial.print("Button has been powered on");        // Button is on

  blSetup();                                          // setups the bluetooth device for ready to pair stage
  customConnection();

}
