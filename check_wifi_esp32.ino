#include <WiFi.h>
#include <PubSubClient.h>
#define TOPIC "sara&"
#define LED 13
WiFiClient espClient;
PubSubClient mqtt(espClient);
const char* mqtt_server = "broker.emqx.io";  //broker.emqx.io" //IP
int a =0;
void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
  Serial.println("check_wifi");
  WiFi.mode(WIFI_STA);
  WiFi.begin("Ooredoo _M30_3E7A","682016@@");
  while (WiFi.status() != WL_CONNECTED) {
    delay(100);
    digitalWrite(LED,LOW);
    Serial.println("...echec");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  delay(100);
    digitalWrite(LED,HIGH);
  delay(1000);
  mqtt.setServer(mqtt_server, 1883);
 

}

void loop() {
  a=random(0,50);
  String data=String(a);
  if (mqtt.connected()) {
   // publish 
   mqtt.publish(TOPIC,data.c_str());
   delay(1000);
    mqtt.loop();}
    else {
  while (!mqtt.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Attempt to connect
    if (mqtt.connect("oha")) {
      Serial.println("connected");
      // Once connected, publish an announcement...
    } else {
      Serial.print("failed, rc=");
      Serial.print(mqtt.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }}



}
