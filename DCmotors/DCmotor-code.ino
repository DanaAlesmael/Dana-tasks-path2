
// Motor A
int enA = 9;
int in1 = 8;
int in2 = 7;

// Motor B
int enB = 3;
int in3 = 5;
int in4 = 4;

int pin1 = A2;  
int pin2 = A1;


// Motor Speed Values - Start at zero
int MotorSpeed1 = 0;
int MotorSpeed2 = 0;

void setup()
{
  // Set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  // Set Motor A forward
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

 // Set Motor B forward

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  
  // Read the values from the potentiometers
  MotorSpeed1 = analogRead(pin1); 
  MotorSpeed2 = analogRead(pin2);
  
  // Convert to range of 0-255
  MotorSpeed1 = map(MotorSpeed1, 0, 1023, 0, 255);
  MotorSpeed2 = map(MotorSpeed2, 0, 1023, 0, 255);  
    
  // Set the motor speeds
  analogWrite(enA, MotorSpeed1);
  analogWrite(enB, MotorSpeed2);
  
}
