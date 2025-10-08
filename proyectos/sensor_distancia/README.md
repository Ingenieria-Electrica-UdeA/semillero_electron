<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/banners/banner-sensor-distancia-hcsr04.jpg" style="max-width: 100%;" alt="Banner sensor de distancia">

## Contenido
- <a href="#introduccion">Introducción</a>
- <a href="#materiales">Materiales</a>
- <a href="#código">Código</a>
- <a href="#montaje">Montaje</a>
- <a href="#resultados">Resultados</a>

### Introducción


### Materiales
- 1 placa Arduino UNO o similar.
- 1 cable de datos para Arduino.
- 1 protoboard.
- 4 cables de conexión Macho-Macho.
- 1 sensor de ultrasonido HC-SR04.

### Código

```cpp
int Disparo=10;
int Eco=9;
long Duracion; 
long Distancia;  

void setup() {                
  Serial.begin (9600);  
  pinMode(Eco, INPUT);     
  pinMode(Disparo, OUTPUT);    
} 

void loop() {
  digitalWrite(Disparo,LOW);
  delay(4);
  digitalWrite(Disparo,HIGH);
  delay(10);
  digitalWrite(Disparo,LOW);
  Duracion=pulseIn(Eco,HIGH);
  Distancia=Duracion/58;
  Serial.println(Distancia);
  delay(1000);
} 
```

### Montaje
<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/montaje-ultrasonido.png" style="max-width: 100%;" alt="Montaje sensor de distancia">

### Resultados

<a href="https://www.tinkercad.com/things/ehjvjYwgGb5-sensor-ultrasonido-hc-sr04">Ver proyecto en Tinkercad</a>
