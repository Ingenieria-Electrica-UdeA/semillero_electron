<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/banners/banner-encendido-led.jpg" style="max-width: 100%;" alt="Banner encendido de LED">

## Contenido
- <a href="#introduccion">Introducción</a>
- <a href="#materiales">Materiales</a>
- <a href="#código">Código</a>
- <a href="#montaje">Montaje</a>
- <a href="#resultados">Resultados</a>

### Introducción
Este proyecto consiste en la implementación de un circuito simple que permita el encendido y apagado de un LED mediante una placa Arduino. El objetivo es ver el funcionamiento de las salidas digitales y tiempo de espera entre un estado y otro.
#### Materiales
- 1 placa Arduino UNO o similar.
- Cable de datos para Arduino.
- 1 Protoboard.
- 2 cables de conexión Macho-Macho.
- 1 resistencia 330 Ω o 220 Ω.
- 1 LED (cualquier color).
- 
### Código

```cpp
int LED=13;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}
```
### Montaje
<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/montaje-encendido-led.png" style="max-width: 100%;" alt="Montaje encendido de LED">

### Resultados

<a href="https://www.tinkercad.com/things/g3XPS7vd6mC-encendido-de-led">Ver proyecto en Tinkercad</a>

