<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/banners/banner-programacion-arduino.jpg" alt="Banner conceptos de programación en Arduino" style="width: 100%;">

# Conceptos de Programación en Arduino

## Contenido
- <a href="#estructura-básica-de-un-programa">Estructura básica de un programa</a>
- <a href="#variables-y-tipos-de-datos">Variables y tipos de datos</a>
- <a href="#operadores">Operadores</a>
- <a href="#control-de-flujo">Control de flujo</a>
- <a href="#funciones">Funciones</a>
- <a href="#ejemplo-práctico">Ejemplo práctico</a>
- <a href="#consejos-para-programar">Consejos para programar</a>

## Estructura básica de un programa

Todo programa en Arduino se compone de **dos funciones principales**: `setup()` y `loop()`.

- **setup():**  
  Se ejecuta una sola vez al iniciar el programa. Aquí se configuran los pines de entrada y salida, la comunicación serial y cualquier otra inicialización necesaria.

- **loop():**  
  Se ejecuta de forma continua (en bucle). Aquí se colocan las instrucciones que deben repetirse mientras la placa esté encendida.

```cpp
void setup() {
  pinMode(13, OUTPUT);  // Configura el pin 13 como salida
}

void loop() {
  digitalWrite(13, HIGH); // Enciende el LED
  delay(1000);            // Espera 1 segundo
  digitalWrite(13, LOW);  // Apaga el LED
  delay(1000);            // Espera 1 segundo
}
```

*Ejemplo 1. Programa básico para hacer parpadear un LED.*

## Variables y tipos de datos

Las **variables** se utilizan para almacenar información que puede cambiar durante la ejecución del programa.  
Cada variable debe declararse con un **tipo de dato**, que define qué tipo de información puede contener.

| Tipo de dato | Descripción | Ejemplo |
|---------------|--------------|----------|
| `int` | Números enteros | `int contador = 0;` |
| `float` | Números decimales | `float temperatura = 23.5;` |
| `char` | Un solo carácter | `char letra = 'A';` |
| `bool` | Verdadero o falso | `bool estado = true;` |

## Operadores

Los **operadores** permiten realizar cálculos o comparaciones.  
Algunos de los más comunes son:

| Tipo | Operadores | Ejemplo | Descripción |
|------|-------------|----------|--------------|
| Aritméticos | `+`, `-`, `*`, `/`, `%` | `x = a + b;` | Suma, resta, multiplicación, división, módulo |
| Relacionales | `==`, `!=`, `>`, `<`, `>=`, `<=` | `if (x > 10)` | Comparan valores |
| Lógicos | &&, \|\|, ! | `if (a > 0 && b > 0)` | AND, OR, NOT |


## Control de flujo

Permite que el programa tome **decisiones** o repita **bloques de código** según ciertas condiciones.

### Condicionales
```cpp
if (sensorLuz < 300) {
  digitalWrite(LED, HIGH);  // Enciende el LED si hay poca luz
} else {
  digitalWrite(LED, LOW);   // Apaga el LED si hay suficiente luz
}
```

### Ciclos

- **for:** Se usa cuando se conoce el número de repeticiones.
```cpp
for (int i = 0; i < 5; i++) {
  digitalWrite(LED, HIGH);
  delay(200);
  digitalWrite(LED, LOW);
  delay(200);
}
```

- **while:** Se ejecuta mientras una condición sea verdadera.
```cpp
while (sensorDistancia < 10) {
  digitalWrite(LED, HIGH);
}
```

## Funciones

Las **funciones** permiten organizar el código en bloques que pueden reutilizarse.  
Por ejemplo, para encender y apagar un LED con una sola línea de código:

```cpp
void encenderLED() {
  digitalWrite(13, HIGH);
}

void apagarLED() {
  digitalWrite(13, LOW);
}
```

Estas funciones pueden llamarse dentro del `loop()`:
```cpp
void loop() {
  encenderLED();
  delay(1000);
  apagarLED();
  delay(1000);
}
```


## Ejemplo práctico

Programa que enciende un LED cuando un pulsador es presionado:

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

*Ejemplo 2. Encender un LED con un pulsador.*

## Consejos para programar

- **Comenta tu código:** Usa `//` para explicar qué hace cada línea.  
- **Usa nombres claros:** Por ejemplo, `sensorLuz` en lugar de `x`.  
- **Prueba paso a paso:** No cargues programas largos sin probar las partes pequeñas primero.  
- **Guarda tus versiones:** Crea copias cuando hagas cambios importantes.  
- **Lee el Monitor Serial:** Es tu herramienta para verificar valores en tiempo real.

## Enlaces

- <a href="https://www.arduino.cc/reference/en/">Funciones de Arduino</a>  
- <a href="https://www.arduino.cc/en/Tutorial/BuiltInExamples">Ejemplos oficiales de Arduino</a>  