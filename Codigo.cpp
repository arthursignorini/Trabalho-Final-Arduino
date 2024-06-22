#include <Servo.h>

int distancia = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

Servo servo_9;

void setup()
{
  servo_9.attach(9, 500, 2500);
  servo_9.write(0); // Lixeira começa fechada
}

void loop()
{
  distancia = 0.01723 * readUltrasonicDistance(7, 6);
  if (distancia <= 50) {
    servo_9.write(90); // Abre a lixeira
    delay(3000); // Espera por 3000 milissegundos
    servo_9.write(0); // Fecha a lixeira
  }
}
