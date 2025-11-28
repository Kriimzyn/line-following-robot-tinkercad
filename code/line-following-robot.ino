// -------------------------------------
// Motor Driver Pin Setup (L293D)
// -------------------------------------

// Left Motor (connected to 1Y and 2Y)
int ENA = 5;   // Enable for left motor (PWM capable)
int IN1 = 2;   // Motor left input 1 (L293D pin 2)
int IN2 = 3;   // Motor left input 2 (L293D pin 7)

// Right Motor (connected to 3Y and 4Y)
int ENB = 6;   // Enable for right motor (PWM capable)
int IN3 = 4;   // Motor right input 1 (L293D pin 10)
int IN4 = 7;   // Motor right input 2 (L293D pin 15)

void setup() {
  // -------------------------------------
  // Set all motor pins as outputs
  // -------------------------------------
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // -------------------------------------
  // Make sure all motors are OFF at start
  // -------------------------------------
  digitalWrite(ENA, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(ENB, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  Serial.begin(9600);
  Serial.println("Motor test starting...");
}

void loop() {

  // -------------------------------------
  // Test Left Motor (forward)
  // -------------------------------------
  Serial.println("Left motor forward");
  digitalWrite(ENA, HIGH);   // Enable motor
  digitalWrite(IN1, HIGH);   // Direction 1
  digitalWrite(IN2, LOW);    // Direction 2
  delay(1000);

  // Stop left motor
  Serial.println("Left motor stop");
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(1000);

  // -------------------------------------
  // Test Right Motor (forward)
  // -------------------------------------
  Serial.println("Right motor forward");
  digitalWrite(ENB, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(1000);

  // Stop right motor
  Serial.println("Right motor stop");
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(1000);

  // -------------------------------------
  // Both motors forward
  // -------------------------------------
  Serial.println("Both motors forward");
  digitalWrite(ENA, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(ENB, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(1500);

  // Stop everything
  Serial.println("All motors stop");
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(1500);
}
