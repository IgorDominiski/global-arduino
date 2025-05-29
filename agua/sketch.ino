#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define LED_VERDE 2
#define LED_AMARELO 3
#define LED_VERMELHO 4
#define BUZZER 5

#define SENSOR_CHUVA A1
#define POTENCIOMETRO A0

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  lcd.init();
  lcd.backlight();

  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  lcd.setCursor(0, 0);
  lcd.print("   Projeto Chuva");
  lcd.setCursor(0, 1);
  lcd.print("   Iniciando...");
  delay(2000);
  lcd.clear();

  // Testa LEDs
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_AMARELO, HIGH);
  digitalWrite(LED_VERMELHO, HIGH);
  delay(1000);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);
}

void loop() {
  int valorChuva = analogRead(SENSOR_CHUVA);      // 0 = muita água, 1023 = seco
  int valorPot = analogRead(POTENCIOMETRO);       // 0 a 1023

  // Mapeia valor do potenciômetro para definir limite de chuva forte
  int limite = map(valorPot, 0, 1023, 200, 800);

  // Mostra valores no LCD
  lcd.setCursor(0, 0);
  lcd.print("Chuva: ");
  lcd.print(valorChuva);
  lcd.print("    ");

  lcd.setCursor(0, 1);
  lcd.print("Pot: ");
  lcd.print(valorPot);
  lcd.print("     ");

  lcd.setCursor(0, 2);
  lcd.print("Limite: ");
  lcd.print(limite);
  lcd.print("    ");

  lcd.setCursor(0, 3);
  lcd.print("Nivel: ");

  if (valorChuva < limite) {
    // CHUVA FORTE
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(BUZZER, HIGH);
    lcd.print("CHUVA FORTE  ");
  }
  else if (valorChuva < (limite + 200)) {
    // CHUVA FRACA
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AMARELO, HIGH);
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(BUZZER, LOW);
    lcd.print("Chuva fraca ");
  }
  else {
    // SECO
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(BUZZER, LOW);
    lcd.print("Seco        ");
  }

  delay(1000);
}
