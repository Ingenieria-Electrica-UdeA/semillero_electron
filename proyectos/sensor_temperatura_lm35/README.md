<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/banners/banner-sensor-temperatura-lm35.jpg" style="max-width: 100%;" alt="Banner semáforo">

## Contenido
- <a href="#introduccion">Introducción</a>
- <a href="#materiales">Materiales</a>
- <a href="#código">Código</a>
- <a href="#montaje">Montaje</a>
- <a href="#resultados">Resultados</a>

### Introducción
Este proyecto consiste en la implementación de un sistema de medición de temperatura utilizando un sensor de temperatura LM35 y una placa Arduino. El objetivo es monitorear la temperatura, utilizando el LM35 para obtener lecturas precisas en grados Celsius (°C).

### Materiales
- 1 placa Arduino UNO o similar.
- 1 cable de datos para Arduino.
- 1 protoboard.
- 3 cables de conexión Macho-Macho.
- 1 sensor de temperatura LM35

### Código
```cpp
int LM35=A0;
float Temperatura;

void setup(){
  Serial.begin (9600);
  pinMode(LM35,INPUT);
}
 
void loop(){
  Temperatura=(analogRead(LM35)*(0.49))-50;
  Serial.println(Temperatura);
  delay (500); 
}
```

### Montaje
<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/montaje-sensor-temperatura-lm35.png" style="max-width: 100%;" alt="Montaje sensor de temperatura LM35">

### Resultados
<a href="https://www.tinkercad.com/things/gQyc4Pgcb5D-sensor-de-temperatura-lm35">Ver proyecto en Tinkercad</a>
