// Pins assignment
const int hall_pin = A0;
const int direction_pin = 3; //PWM compatible pin

// These variable contains the values read from the pins
int hall_value = 0;
int output_level = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(hall_pin, INPUT);
  pinMode(direction_pin, OUTPUT);
  Serial.begin(9600);

  analogWrite(direction_pin, output_level);
}

int calculate_Veff(float voltage){
  float max_voltage = 5; //V
  return 255*voltage/max_voltage;
}

void loop() {
  analogWrite(direction_pin,output_level); 
  Serial.print("Direction:HIGH\nPWM: 240\t");
  delay(3000);
  //analogWrite(direction_pin,128);
  //Serial.print("PWM: 128\t");
  delay(3000);
  //analogWrite(direction_pin,10);
  //Serial.print("PWM: 10\n");
  delay(3000);
  //digitalWrite(direction_pin, LOW);
  //analogWrite(direction_pin,240);
  //Serial.print("Direction:LOW\nPWM: 240\t"); //GREEN
  delay(3000);
  //analogWrite(direction_pin,128);
  Serial.print("PWM: 128\t");
  delay(3000);
  //analogWrite(direction_pin,10);
  Serial.print("PWM: 10\n");
  delay(3000);
  hall_value = analogRead(hall_pin);
  //if(hall_value > 700){  
  //  analogWrite(direction_pin, output_level);
    
  //  digitalWrite(brake_pin,LOW);
  //  delay(8);
  //}else{
  //  analogWrite(direction_pin, output_level);
  //  digitalWrite(direction_pin,HIGH);
  //  digitalWrite(brake_pin,LOW);
  //}
  //Serial.print(hall_value);
  //Serial.print("\n");
}
