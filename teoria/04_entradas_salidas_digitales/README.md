<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/banners/banner-entradas-salidas-digitales.jpg" alt="Banner entradas y salidas digitales en Arduino" style="width: 100%;">

# Entradas y Salidas Digitales en Arduino

## Contenido
- <a href="#qué-son-las-entradas-y-salidas-digitales">¿Qué son las entradas y salidas digitales?</a>
- <a href="#configuración-de-pines">Configuración de pines</a>
- <a href="#lectura-de-entradas-digitales">Lectura de entradas digitales</a>
- <a href="#escritura-de-salidas-digitales">Escritura de salidas digitales</a>
- <a href="#ejemplos-prácticos">Ejemplos prácticos</a>
- <a href="#consejos-para-probar-tus-circuitos">Consejos para probar tus circuitos</a>

---

## ¿Qué son las entradas y salidas digitales?

Los pines digitales del Arduino permiten **leer o enviar señales eléctricas** que solo pueden tener dos estados:  
- **ALTO (HIGH):** equivalente a 5V (1 lógico).  
- **BAJO (LOW):** equivalente a 0V (0 lógico).

Dependiendo de cómo se configuren, estos pines pueden funcionar como **entradas** (reciben señales) o **salidas** (envían señales).

<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/raw/main/presentaciones/pines-digitales-arduino.png" alt="Pines digitales en Arduino" style="width: 100%;">

*Imagen 1. Pines digitales en una placa Arduino UNO.*

---

## Configuración de pines

En el bloque `setup()` se define si cada pin será de entrada o salida usando la función `pinMode()`:

```cpp
pinMode(pin, modo);
```

- **pin:** número del pin digital.  
- **modo:** puede ser `INPUT`, `OUTPUT` o `INPUT_PULLUP`.

Ejemplo:
```cpp
pinMode(2, INPUT);   // Configura el pin 2 como entrada
pinMode(13, OUTPUT); // Configura el pin 13 como salida
```

---

## Lectura de entradas digitales

Para leer el estado de un pin configurado como entrada, se usa la función:

```cpp
digitalRead(pin);
```

Esta función devuelve **HIGH** o **LOW**, dependiendo del nivel de voltaje detectado.

Ejemplo:
```cpp
int estado = digitalRead(2);
if (estado == HIGH) {
  digitalWrite(13, HIGH); // Enciende el LED si el pulsador está presionado
} else {
  digitalWrite(13, LOW);
}
```

*Ejemplo 1. Lectura de un pulsador y encendido de LED.*

---

## Escritura de salidas digitales

Para enviar una señal (encender o apagar un componente), se usa la función:

```cpp
digitalWrite(pin, valor);
```

Donde **valor** puede ser `HIGH` (encendido) o `LOW` (apagado).

Ejemplo:
```cpp
digitalWrite(13, HIGH); // Enciende el LED
delay(1000);            // Espera 1 segundo
digitalWrite(13, LOW);  // Apaga el LED
delay(1000);
```

*Ejemplo 2. Encendido y apagado de un LED usando salidas digitales.*

---

## Ejemplos prácticos

### 🔹 Ejemplo 1: Encender un LED con un pulsador
```cpp
int boton = 2;
int led = 13;
int estado;

void setup() {
  pinMode(boton, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  estado = digitalRead(boton);
  if (estado == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
```

### 🔹 Ejemplo 2: Activar un buzzer cuando se presione un botón
```cpp
int boton = 4;
int buzzer = 8;

void setup() {
  pinMode(boton, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  if (digitalRead(boton) == HIGH) {
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }
}
```

### 🔹 Ejemplo 3: Suiche escalera con dos pulsadores
Este proyecto simula un **suiche escalera** con Arduino, donde dos pulsadores controlan el encendido y apagado de un LED desde distintos puntos, como en un sistema de iluminación de pasillo o escalera.

```cpp
int boton1 = 2;
int boton2 = 3;
int led = 13;
bool estado = LOW;

void setup() {
  pinMode(boton1, INPUT);
  pinMode(boton2, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(boton1) == HIGH || digitalRead(boton2) == HIGH) {
    estado = !estado;        // Cambia el estado del LED
    digitalWrite(led, estado);
    delay(300);              // Evita rebotes de los pulsadores
  }
}
```

<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/raw/main/presentaciones/suiche-escalera.png" alt="Circuito suiche escalera con Arduino" style="width: 100%;">

*Imagen 2. Suiche escalera con Arduino y dos pulsadores.*

---

## Consejos para probar tus circuitos

- **Usa resistencias en los botones:** evita cortocircuitos usando resistencias de 10 kΩ como *pull-down* o *pull-up*.  
- **Evita el rebote de señal:** usa un pequeño `delay(50)` después de leer un botón.  
- **Verifica el GND:** todos los componentes deben compartir la misma referencia de tierra.  
- **Usa LEDs con resistencias de 220 Ω o 330 Ω** para protegerlos.  
- **Simula antes de armar:** plataformas como [Tinkercad](https://www.tinkercad.com/) te permiten probar tus circuitos en línea.

---

## Enlaces

- <a href="https://www.arduino.cc/en/Tutorial/DigitalPins">Tutorial oficial sobre pines digitales</a>  
- <a href="https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/">Referencia de `digitalRead()`</a>  
- <a href="https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/">Referencia de `digitalWrite()`</a>