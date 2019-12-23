 //We are setting the duty cycle to 90% on a 2us pulse
  digitalWrite(direction_pin, LOW);
  digitalWrite(brake_pin, HIGH);
  digitalWrite(pwm_pin, LOW);
  
  float new_delay = pulse * (1-duty_cycle);  
  delay(new_delay);
  
  hall_value = analogRead(hall_pin);
  Serial.print(hall_value);
  Serial.print("\n");
  
  digitalWrite(direction_pin, HIGH);
  digitalWrite(brake_pin, LOW);
  digitalWrite(pwm_pin, HIGH);

  float new_delay_two = pulse - new_delay;
  delay(new_delay_two);
  
  hall_value = analogRead(hall_pin);
  Serial.print(hall_value);
  Serial.print("\n");
  
  // put your main code here, to run repeatedly:
  //Serial.print(digitalRead(direction_pin));
  //Serial.print("\n");
  //Serial.print(digitalRead(brake_pin));
  //Serial.print("\n");
  //Serial.print(digitalRead(pwm_pin));
  //Serial.print("\n");
  //String hall_message = "Hall effect is reading: " + hall_value;
  //Serial.print(hall_message + "\n");
  //String direction_message = "D: " + digitalRead(direction_pin);
  //String brake_message = "B: " + digitalRead(brake_pin);
  //String pwm_message = "P: " + digitalRead(pwm_pin);
  //Serial.print(direction_message + " " + brake_message + " " + pwm_message + "\n");
