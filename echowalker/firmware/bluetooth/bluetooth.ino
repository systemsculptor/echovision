
setup() {   
  BLE.begin(); // begins
  BLE.setDeviceName(EchoWalkersv1);
  BLE.advertise(); //Advertises SSID
  BLE.setconnectable(true); //Allows BLE to connect
 
}

void loop() {
 if (BLE.connected()) {
    BLE.stopAdvertise;}
   

}
