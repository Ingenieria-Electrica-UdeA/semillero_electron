<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/banners/banner-semaforo.jpg" style="max-width: 100%;" alt="Banner semáforo">

## Contenido
- Introducción
- Materiales
- Código
- Montaje
- Resultados

### Introducción
Este proyecto consiste en la implementación de un sistema de semáforo utilizando una placa Arduino. El objetivo es simular el funcionamiento de un semáforo real, controlando las luces roja, amarilla y verde con temporizadores y ciclos.

### Materiales
- 1 placa Arduino UNO o similar
- Cable de datos para Arduino
- 1 Protoboard
- 4 cables de conexión Macho-Macho
- 3 resistencias 330 Ω o 220 Ω 
- 1 LED rojo
- 1 LED amarillo 
- 1 LED verde

### Código

```cpp
int LED_Rojo=10;
int LED_Amarillo=11;
int LED_Verde=12;
int i=0;

void setup (){
  pinMode(LED_Rojo,OUTPUT);
  pinMode(LED_Amarillo,OUTPUT);
  pinMode(LED_Verde,OUTPUT);
 }

void loop(){
digitalWrite(LED_Rojo,LOW);
digitalWrite(LED_Amarillo,LOW);
digitalWrite(LED_Verde,LOW);
delay(10);
digitalWrite(LED_Verde,HIGH);
delay(8000);
i=0;
while (i<5){
  digitalWrite(LED_Verde,LOW);
  delay(300);
  digitalWrite(LED_Verde,HIGH);
  delay(300);
  i=i+1;  
  }
digitalWrite(LED_Verde,LOW);
digitalWrite(LED_Amarillo,HIGH);
delay(2500);
digitalWrite(LED_Amarillo,LOW);
digitalWrite(LED_Rojo,HIGH);
delay(7000); 
}  
```

### Montaje
<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/montaje-semaforo.png" style="max-width: 100%;" alt="Montaje semáforo">