#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author Ankit Patel
 * @date 23 feb 2026
 *
 * @details
 * Measures distance using HC-SR04 ultrasonic sensor
 * and displays structured output via Serial Monitor.
 */

int trigPin=9;
int echoPin=10;

void setup() {
    Serial.begin(9600);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin,INPUT);
}

void loop() {
    digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(echoPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);

    long time=pulseIn(echoPin,HIGH);
    int distance=time*0.34/2;
    Serial.print("distance: ");
    Serial.println(distance);
    Serial.println("cm");
    delay(500);

}