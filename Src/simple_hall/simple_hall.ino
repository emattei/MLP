const int hall_pin = A0;
int hall_value = 0;



void setup() {
  // put your setup code here, to run once:
  pinMode(hall_pin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    hall_value = analogRead(hall_pin);
    Serial.print(hall_value);
    Serial.print("\n");
}
