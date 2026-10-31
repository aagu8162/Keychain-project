#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Fonts/FreeSerifBoldItalic9pt7b.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3D

#define BUTTON_PIN 2
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int page = 0;
const int totpage = 3;

bool lastButtonState = HIGH;



void setup() {
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }

  delay(2000);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(1, 1);
  display.println(F("Starting..."));
  display.display();
  delay(1500);


}

void loop() {
  bool currentButtonState = digitalRead(BUTTON_PIN);

  if (lastButtonState == HIGH && currentButtonState == LOW) {
    page = (page + 1) % totpage;
    delay(50);
  }

  lastButtonState = currentButtonState;

  display.clearDisplay();
  display.setCursor(0, 0);

  switch (page) {
    case 0:
    display.setFont(&FreeSerifBoldItalic9pt7b);
    display.setTextSize(2);
    display.setCursor(30, 40);
    display.println(F("LEARN"));
    break;

    case 1:
    display.setFont(&FreeSerifBoldItalic9pt7b);
    display.setTextSize(2);
    display.setCursor(30, 40);
    display.println(F("ADAPT"));
    break;
    
    case 2:
    display.setFont(&FreeSerifBoldItalic9pt7b);
    display.setTextSize(2);
    display.setCursor(26, 40);
    display.println(F("EVOLVE"));
    break;

  }

  display.display();
  delay(50);
  

}























