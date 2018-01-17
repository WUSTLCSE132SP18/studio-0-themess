    /* helloworld
 *
 * output simple hello message
 *
 */

void setup() {
  Serial.begin(9600);
  Serial.println("Hello, world!");
  pinMode(13,OUTPUT);
}

void loop() {
  double n = millis();
  delay(1000);
  Serial.print(n/1000);
  Serial.println(" seconds have elapsed."); 
  digitalWrite(13, HIGH);
  delay (1000);
  digitalWrite(13, LOW);
  Serial.print(n/1000 + 1);
  Serial.println(" seconds have elapsed.");
}
