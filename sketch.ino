// ==========================================
// Smart Traffic Light Controller
// Intern Name: Aniket Srivastava
// Board: Arduino Uno
// ==========================================

// Road A LEDs
const int A_RED = 2;
const int A_YELLOW = 3;
const int A_GREEN = 4;

// Road B LEDs
const int B_RED = 5;
const int B_YELLOW = 6;
const int B_GREEN = 7;

void setup() {
  // Set all LED pins as OUTPUT
  pinMode(A_RED, OUTPUT);
  pinMode(A_YELLOW, OUTPUT);
  pinMode(A_GREEN, OUTPUT);

  pinMode(B_RED, OUTPUT);
  pinMode(B_YELLOW, OUTPUT);
  pinMode(B_GREEN, OUTPUT);
}

void loop() {

  // ===============================
  // Road A GREEN | Road B RED
  // ===============================
  digitalWrite(A_GREEN, HIGH);
  digitalWrite(A_YELLOW, LOW);
  digitalWrite(A_RED, LOW);

  digitalWrite(B_GREEN, LOW);
  digitalWrite(B_YELLOW, LOW);
  digitalWrite(B_RED, HIGH);

  delay(10000); // 10 seconds

  // ===============================
  // Road A YELLOW | Road B RED
  // ===============================
  digitalWrite(A_GREEN, LOW);
  digitalWrite(A_YELLOW, HIGH);
  digitalWrite(A_RED, LOW);

  digitalWrite(B_GREEN, LOW);
  digitalWrite(B_YELLOW, LOW);
  digitalWrite(B_RED, HIGH);

  delay(2000); // 2 seconds

  // ===============================
  // Road A RED | Road B GREEN
  // ===============================
  digitalWrite(A_GREEN, LOW);
  digitalWrite(A_YELLOW, LOW);
  digitalWrite(A_RED, HIGH);

  digitalWrite(B_GREEN, HIGH);
  digitalWrite(B_YELLOW, LOW);
  digitalWrite(B_RED, LOW);

  delay(10000); // 10 seconds

  // ===============================
  // Road A RED | Road B YELLOW
  // ===============================
  digitalWrite(A_GREEN, LOW);
  digitalWrite(A_YELLOW, LOW);
  digitalWrite(A_RED, HIGH);

  digitalWrite(B_GREEN, LOW);
  digitalWrite(B_YELLOW, HIGH);
  digitalWrite(B_RED, LOW);

  delay(2000); // 2 seconds
}