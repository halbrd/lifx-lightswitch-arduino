#include <ESL8266WiFi.h>

const char[] WiFi_SSIDs = {
  "SSID1",
  "SSID2"
};
const char[] WiFi_passwords = {
  "password1",
  "password2"
};

void setup() {
  Serial.begin(115200);
  delay(10);

  Serial.println("=== Connecting to WiFi ===");

  const int WIFI_TIMEOUT = 10000;

  Serial.print("Trying first choice: " ); Serial.println(WiFi_SSIDs[0]);
  delay(WIFI_TIMEOUT);

  int SSID_index = 1;
  while (WiFi.status() != WL_CONNECTED) {
    // TODO: check if we've run out of options
    Serial.print("Connection to "); Serial.print(WiFi_SSIDs[SSID_index - 1]); Serial.print(" failed; falling back to "); Serial.println()


  }
}
