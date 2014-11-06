// ATMEL ATTINY45 / ARDUINO
//ATtiny 85 pin out 
//                 +-\/-+
// Ain0 (D 5) PB5 1|    |8 Vcc
// Ain3 (D 3) PB3 2|    |7 PB2 (D 2) Ain1
// Ain2 (D 4) PB4 3|    |6 PB1 (D 1) pwm1
//            GND 4|    |5 PB0 (D 0) pwm0
//                 +----+


  int ledPin = 1;    // LED connected to digital pin 9
  int potnPin = 2;   // Pin de lectura del potenciómetro
  int value = 0;
 void setup()  {
   pinMode(ledPin, OUTPUT);
   pinMode(potnPin, INPUT);

 }

 void loop()  {
     value = analogRead(potnPin)/4;
     analogWrite(ledPin, value);

 }
