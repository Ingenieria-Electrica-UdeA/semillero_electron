<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/banners/banner-suiche-escalera-led.jpg" style="max-width: 100%;" alt="Banner suiche escalera">

## Contenido
- <a href="#introduccion">Introducción</a>
- <a href="#materiales">Materiales</a>
- <a href="#código">Código</a>
- <a href="#montaje">Montaje</a>
- <a href="#resultados">Resultados</a>

### Introducción
Este proyecto simula un suiche escalera con Arduino, donde dos pulsadores controlan el encendido y apagado de un LED desde distintos puntos, como en un sistema de iluminación de pasillo o escalera.

### Materiales
- 1 placa Arduino UNO o similar.
- 1 cable de datos para Arduino.
- 1 protoboard.
- 7 cables de conexión Macho-Macho.
- 3 resistencias 220 Ω.
- 1 LED.
- 2 pulsadores.


### Código
```cpp
int Suiche1=13;
int Suiche2=12;
int Bombillo=7;
int Estado1;
int Estado2;
int EstadoBombillo;

void setup(){
  pinMode(Suiche1,INPUT);
  pinMode(Suiche2,INPUT);
  pinMode(Bombillo,OUTPUT);
}

void loop(){
  Estado1=digitalRead(Suiche1);
  Estado2=digitalRead(Suiche2);
  EstadoBombillo=digitalRead(Bombillo);
  if (Estado1==0 || Estado2==0){
  	digitalWrite(Bombillo,!EstadoBombillo);
  }
  delay(500);
}
```

### Montaje
<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/montaje-escalera-led.png" style="max-width: 100%;" alt="Montaje suiche escalera con LED">

### Resultados
<a href="https://www.tinkercad.com/things/jnYh8jwMDCn-suiche-escalera-con-led">Ver proyecto en Tinkercad</a>
