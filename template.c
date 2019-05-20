#include <Arduino.h>
#include <vector>
#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiAP.h>
#include <WebServer.h>
#include "KBProTime.h"
#include "BluetoothSerial.h"

using namespace std;

KBProTime kbprotime;
BluetoothSerial SerialBT;
typedef int Number;
typedef int Boolean;
${VARIABLE}

${FUNCTION}

void setup()
{
  ${SETUP_CODE}
  ${BLOCKSETUP}
}
void loop()
{
  ${LOOP_CODE}
  ${LOOP_EXT_CODE}
}
