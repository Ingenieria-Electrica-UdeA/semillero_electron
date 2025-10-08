<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/banners/banner-fotocelda.jpg" style="max-width: 100%;" alt="Banner fotocelda">

## Contenido
- <a href="#introduccion">Introducción</a>
- <a href="#materiales">Materiales</a>
- <a href="#código">Código</a>
- <a href="#montaje">Montaje</a>
- <a href="#resultados">Resultados</a>

### Introducción
El proyecto consiste en encender un LED automáticamente cuando una fotocelda detecta baja iluminación, usando un Arduino para medir la luz ambiental y activar el LED según el nivel detectado.

### Materiales
- 1 placa Arduino UNO o similar.
- 1 cable de datos para Arduino.
- 1 protoboard.
- 4 cables de conexión Macho-Macho.
- 1 resistencia 220 Ω.
- 1 LED.
- 1 fotocelda.

### Código
```cpp
int fotocelda=A1;
int LED=13;
int intensidad_luz;
int limite=900;

void setup() {              
  pinMode(fotocelda,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  intensidad_luz=analogRead(A1);
  if (intensidad_luz>limite){
    digitalWrite(LED,HIGH);
  }
  else{
    digitalWrite(LED,LOW);
  }
  Serial.println(intensidad_luz);
}
```

### Montaje
<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/montaje-fotocelda.png" style="max-width: 100%;" alt="Montaje encendido de LED con Fotocelda">

### Resultados
<a href="https://www.tinkercad.com/things/bx9GM4XhHRl-led-con-fotocelda">Ver proyecto en Tinkercad</a>
