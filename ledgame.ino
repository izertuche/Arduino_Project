int buttonState;
void setup() {
Serial.begin(9600);
delay(1000);
pinMode(13,OUTPUT); 
pinMode(12, OUTPUT); 
pinMode(11,OUTPUT); //red led
pinMode(10, OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,INPUT); //button
};

void loop() {
  buttonState = analogRead(8);
  Serial.println(buttonState);
  if (buttonState > 296){
    marquee();
  }
    else if (buttonState <= 296);{
      return;
    }
};

void marquee() { //function turns on and turns off leds one after another
digitalWrite(13, HIGH);
delay(75);
digitalWrite(13, LOW);
delay(75);
digitalWrite(12, HIGH);
delay(75);
digitalWrite(12, LOW);
delay(75);
digitalWrite(11, HIGH);
delay(75);
digitalWrite(11, LOW);
delay(75);
digitalWrite(10, HIGH);
delay(75);
digitalWrite(10, LOW);
delay(75);
digitalWrite(9, HIGH);
delay(75);
digitalWrite(9, LOW);
delay(75);
digitalWrite(10, HIGH);
delay(75);
digitalWrite(10, LOW);
delay(75);
digitalWrite(11, HIGH);
delay(75);
digitalWrite(11, LOW);
delay(75);
digitalWrite(12, HIGH);
delay(75);
digitalWrite(12, LOW);
delay(75);
}
;


