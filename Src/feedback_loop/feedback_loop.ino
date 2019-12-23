// Pins assignment
const int hall_pin = A0;
const int direction_pin = 3;
const int brake_pin = 4;
const int pwm_pin = 5;

// These variable contains the values read from the pins
int hall_value = 0;
float duty_cycle = 0.5; //90% duty cycle
float pulse = 2; //setting pulse to 2us. Delay function is in ms
float freq = 100; //pulsing frequency 

float tot_uptime = 0;
float tot_downtime = 0;
float uptime_interval = 0;
float downtime_interval = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(hall_pin, INPUT);
  pinMode(direction_pin, OUTPUT);
  pinMode(brake_pin, OUTPUT);
  pinMode(pwm_pin, OUTPUT);
  
  Serial.begin(9600);

  digitalWrite(pwm_pin, HIGH);
  digitalWrite(direction_pin, HIGH);
  digitalWrite(brake_pin, LOW);

  tot_uptime = pulse * duty_cycle;
  tot_downtime = pulse - tot_uptime;
  uptime_interval = tot_uptime / freq;
  downtime_interval = tot_downtime / freq;
  //Serial.print(uptime_interval);
  //Serial.print("\n");
  //Serial.print(downtime_interval);
  //Serial.print("\n");
}

void loop() {
  hall_value = analogRead(hall_pin);
  //tone(direction_pin,500);
  //if(hall_value > 920){
    //digitalWrite(pwm_pin,LOW);
    //digitalWrite(direction_pin,HIGH);
    //digitalWrite(brake_pin,HIGH);
    //delay(0.1);
    
  //}else 
  if(hall_value > 700){
    
    digitalWrite(pwm_pin,HIGH);
    digitalWrite(direction_pin,LOW);
    digitalWrite(brake_pin,LOW);
    delay(8);
  }else{
    digitalWrite(pwm_pin,HIGH);
    digitalWrite(direction_pin,HIGH);
    digitalWrite(brake_pin,LOW);
  }
  Serial.print(hall_value);
  Serial.print("\n");
}
