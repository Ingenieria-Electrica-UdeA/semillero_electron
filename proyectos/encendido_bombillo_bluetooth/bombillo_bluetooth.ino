  #include <SoftwareSerial.h>
  
SoftwareSerial BTSerial(10, 11); // RX, TX

int LED = 4;

void setup() {
  pinMode(LED, OUTPUT);
    digitalWrite(LED,LOW);
  Serial.begin(9600); // Serial para el monitor serial
  BTSerial.begin(9600); // Serial para el módulo Bluetooth
  Serial.println("Esperando conexión Bluetooth...");
}

void loop() {
  if (BTSerial.available()) {
    char comando = BTSerial.read(); // Lee el comando enviado
    if (comando == '1') {
      digitalWrite(LED, HIGH); // Enciende el LED
      Serial.println("LED encendido");
    } else if (comando == '0') {
      digitalWrite(LED, LOW); // Apaga el LED
      Serial.println("LED apagado");
    }
  }
  if (Serial.available()) {
    char datos = Serial.read();
    BTSerial.write(datos);
  }
}
