/*
 * Basic Networking
 * 
 * Connects to a wireless networking using the given ssid and password and prints
 * out the IP addresses received via the serial interface.
 */

#include <ESP8266WiFi.h>
const char * ssid = "ssid"; // put your ssid (network name) here
const char * password = "password"; // put your network password here

void setup() {

  Serial.begin(9600);
  
  WiFi.begin(ssid, password);
  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print('.');
  }
  Serial.print('\n');
  Serial.print("IP Address is: "); Serial.println(WiFi.localIP());

}

void loop() {


  
}
