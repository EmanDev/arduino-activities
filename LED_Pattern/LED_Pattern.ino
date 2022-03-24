/*
 *  EmanDev
 *  BSEE 3A
 *  MICROPROCESSOR SYSTEM
 *  LED PATTERN
 */

/*
 * For Loop Syntax
 * for (initialization; condition; increment) {
 *   // statement(s);
 * }
 */
// Globals
int start = 1500;
int one_transition = 1000;
int transition = 2000;
int led_blink = 500;

void setup() {
  // put your setup code here, to run once:
  for (int i = 3; i < 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  delay(start);

  // Triple Blink
  for (int i = 1; i < 15; i++) {
    digitalWrite(i - 1, HIGH);
    digitalWrite(i, HIGH);
    digitalWrite(i + 1, HIGH);
    delay(led_blink);
    digitalWrite(i - 1, LOW);
    digitalWrite(i, LOW);
    digitalWrite(i + 1, LOW);
  }

  delay(one_transition);
  for (int i = 3; i < 13; i++) {
    digitalWrite(i, LOW);
  }
  delay(transition);

  // LED Fill
  for (int i = 12; i > 2; i--) {
    for (int j = 3; j < i + 1; j++) {
      digitalWrite(j, HIGH);
      delay(led_blink);
      digitalWrite(j, LOW);
    }
    digitalWrite(i, HIGH);
  }

  delay(one_transition);
  for (int i = 3; i < 13; i++) {
    digitalWrite(i, LOW);
  }
  delay(transition);

  // Blink nth (LED) times
  for (int i = 3; i < 13; i++) {
    for (int j = 0; j < i - 2; j++) {
      digitalWrite(i, HIGH);
      delay(led_blink / (i - 1) * 4);
      digitalWrite(i, LOW);
      delay(led_blink / (i - 1) * 4);
    }
  }

  delay(one_transition);
  for (int i = 3; i < 13; i++) {
    digitalWrite(i, LOW);
  }
  delay(transition);

  // Fill Both Ways
  for (int i = 3; i < 8; i++) {
    digitalWrite(i, HIGH);
    digitalWrite(15 - i, HIGH);
    delay(led_blink);
  }
  for (int i = 7; i > 2; i--) {
    digitalWrite(i, LOW);
    digitalWrite(15 - i, LOW);
    delay(led_blink);
  }

  delay(one_transition);
  for (int i = 3; i < 13; i++) {
    digitalWrite(i, LOW);
  }
  delay(transition);

  // Falling sands
  int falling_sand = 100;
  for (int i = 3; i < 13; i++) {
    digitalWrite(i, HIGH);
    delay(falling_sand);
  }
  for (int i = 3; i < 13; i++) {
    digitalWrite(i, LOW);
    delay(falling_sand);
  }

  // delay transition at the end because we initialized a delay var start
}
