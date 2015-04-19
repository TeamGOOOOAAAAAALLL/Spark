#include "SparkButton/SparkButton.h"

SparkButton b = SparkButton();

// The code in setup() runs once when the device is powered on or reset. Used for setting up states, modes, etc
void setup() {
    // Tell b to get everything ready to go
    b.begin();
    Spark.function("score", scoreAlert);
}

void loop() {

}


int scoreAlert(String command)
{
    for (uint16_t j=0; j<30; j++)
    {
        for (uint16_t i=1; i<=11; i++)
        {
            b.ledOn(i, 255, 0, 0);
            delay(25);
            b.ledOff(i);   
        }
    }
   return 1;
}