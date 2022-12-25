void setup() {
  Serial.begin(115200);
  // Serial.begin();

}

void loop() {
  Serial.println("Hello world from Ardunio!"); // write a string
	delay(1000);
  // if(Serial.available() > 0) {
	// 	char data = Serial.read();
	// 	char str[2];
	// 	str[0] = data;
	// 	str[1] = '\0';
	// 	Serial.print(str);
	// }
}


