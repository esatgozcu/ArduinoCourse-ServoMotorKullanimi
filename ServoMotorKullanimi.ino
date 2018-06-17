#include <Servo.h>                // Servo kütüphanesini dahil ediyoruz

Servo motor;                      // Bir örnek oluşturuyoruz.

void setup() {

  motor.attach(6);                // 9. pwm pinini ayarlıyoruz.
}

void loop() {

  for(int aci=0; aci<=180; aci++){

    motor.write(aci);
    delay(10);
  }
  for(int aci=180; aci>=0; aci--){

    motor.write(aci);
    delay(10);
  }
}
