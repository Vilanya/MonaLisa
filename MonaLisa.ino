void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);

  
}

void loop() {
  bool sensor1 = digitalRead(4);
  bool sensor2 = digitalRead(5);
  bool sensor3 = digitalRead(6);
  bool alarm_on = false;
  
  if (sensor1 == HIGH)
  {
    Serial.println("Active");
    alarm_on = true;
    //Turn alarm on 
  }

  while (alarm_on == false)
  {
    if (sensor2 == HIGH)
    {
      Serial.println("Active");
      alarm_on = true;
      //Turn alarm on 
    }

    while (alarm_on == false)
    {
      if (sensor3 == HIGH)
      {
        Serial.println("Active");
        alarm_on = true;
        //Turn alarm on
      }
    }
  }

  delay (1000);
}
