#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 
// Initialize the LCD with I2C address 0x27 and size 16x2 
LiquidCrystal_I2C lcd(0x27, 16, 2); 
int red = 0,  green = 0,  blue = 0; 
void setup() { 
// Start serial communication 
  Serial.begin(9600); 
  // Initialize sensor pins 
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT); 
  pinMode(11, OUTPUT); 
  pinMode(12, OUTPUT); 
  pinMode(10, INPUT); 
  // Set initial state of the pins 
  digitalWrite(8, HIGH); 
  digitalWrite(9, HIGH); 
  // Initialize LCD 
  lcd.init(); 
  lcd.backlight(); 
  // Initial message on LCD 
  lcd.print("Color Sensor Test"); 
23 
delay(2000); // Display for 2 seconds 
lcd.clear(); 
} 
void loop() { 
// Start measuring the color values 
digitalWrite(11, LOW); // Set LED pin for red color 
digitalWrite(12, LOW); // Set LED pin for green color 
red = pulseIn(10, digitalRead(10) == HIGH ? LOW : HIGH); // Measure red 
digitalWrite(12, HIGH); // Set LED pin for blue color 
blue = pulseIn(10, digitalRead(10) == HIGH ? LOW : HIGH); // Measure blue 
digitalWrite(11, HIGH); // Set LED pin for green color 
green = pulseIn(10, digitalRead(10) == HIGH ? LOW : HIGH); // Measure green 
// Clear LCD for new readings 
lcd.clear(); 
// Determine the color based on calibrated pulse values 
  if (red < 50 && green < 50 && blue > 200) { 
    Serial.println("Blue Color"); 
    lcd.print("Blue Color"); 
  }  
  else if (red > 200 && green < 50 && blue < 50) { 
    Serial.println("Red Color"); 
    lcd.print("Red Color"); 
  } 
  else if (green > 200 && red < 50 && blue < 50) { 
    Serial.println("Green Color"); 
    lcd.print("Green Color"); 
  } 
  else if (red > 200 && green > 200 && blue < 50) { 
    Serial.println("Yellow Color"); 
    lcd.print("Yellow Color"); 
  } 
  else if (red > 200 && green < 50 && blue > 150) { 
    Serial.println("Pink Color"); 
    lcd.print("Pink Color"); 
  } 
  else if (red > 150 && green > 50 && blue < 50) { 
    Serial.println("Orange Color"); 
    lcd.print("Orange Color"); 
  } 
  else if (red > 50 && green < 50 && blue > 200) { 
    Serial.println("Purple Color"); 
    lcd.print("Purple Color"); 
  } 
  else if (red > 100 && green > 50 && blue < 50) { 
    Serial.println("Brown Color");
    lcd.print("Brown Color"); 
  } 
  else if (red > 200 && green > 200 && blue > 200) { 
    Serial.println("White Color"); 
    lcd.print("White Color"); 
  } 
  else if (red > 50 && green > 50 && blue > 50 && red < 200 && green < 200 && blue 
< 200) { 
    Serial.println("Grey Color"); 
    lcd.print("Grey Color"); 
  } 
  else if (red > 200 && green > 150 && blue < 50) { 
    Serial.println("Gold Color"); 
    lcd.print("Gold Color"); 
  } 
  else if (red > 200 && green > 200 && blue > 200 && red + green + blue > 500) { 
    Serial.println("Silver Color"); 
    lcd.print("Silver Color"); 
  } 
  else if (red > 100 && green < 100 && blue > 100) { 
    Serial.println("Violet Color"); 
    lcd.print("Violet Color"); 
  } 
  else { 
    Serial.println("No Clear Color"); 
    lcd.print("No Clear Color"); 
  } 
  // Delay before the next colour reading 
  delay(500); 
} 
