<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/banners/banner-componentes-basicos-arduino.jpg" alt="Banner componentes básicos de Arduino" style="width: 100%;">


## Contenido

- <a href="#protoboard">Protoboard</a>
- <a href="#cables-jumper">Cables jumper</a>
- <a href="#leds">LEDs</a>
- <a href="#resistencias">Resistencias</a>
- <a href="#potenciómetros">Potenciómetros</a>
- <a href="#pulsadores">Pulsadores</a>
- <a href="#sensores">Sensores</a>

## Protoboard
Una protoboard es una placa que permite realizar conexiones rápidas y sin soldadura, gracias a una serie de orificios conectados entre sí internamente. Se compone principalmente de tres partes: los buses de alimentación, el canal central y las pistas de conexión.

<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/partes-protoboard.jpg" alt="Partes de la protoboard" style="width: 100%;">

*Imagen #. Partes de la protoboard.*

- ### Buses de alimentación
    Los buses de alimentación están ubicados en los bordes de la protoboard y se utilizan para distribuir el voltaje positivo y negativo a lo largo del circuito. Normalmente están marcados con líneas rojas (positivo) y azules o negras (negativo) para facilitar la identificación de las conexiones. Todos los orificios a lo largo de una misma fila están conectados horizontalmente.

    <img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/protoboard-buses.png" alt="Bus de alimentación positivo de la protoboard" style="width: 100%;">

    *Imagen #. Bus de alimentación positivo de la protoboard.*

- ### Canal central
    El canal central separa las dos secciones principales de la protoboard. Este espacio permite insertar circuitos integrados (ICs) u otros componentes de tal forma que sus pines queden conectados a las pistas de cada lado, evitando cortocircuitos entre ellos.

    <img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/protoboard-canal-central.png" alt="Uso del canal central de la protoboard" style="width: 100%;">

    *Imagen #. Uso del canal central de la protoboard.*

- ### Pistas
    Cada pista de conexión consta de cinco orificios que están eléctricamente conectados entre sí. Esto significa que al insertar un pin o un cable en cualquier orificio, este estará conectado automáticamente a los otros cuatro de la misma pista. Este diseño facilita la construcción de circuitos temporales y prototipos, ya que elimina la necesidad de soldadura.

    <img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/protoboard-pistas.png" alt="Ejemplo de pista de la protoboard" style="width: 100%;">

    *Imagen #. Ejemplo de pista de la protoboard.*

## Cables jumper
Los cables jumper son cables flexibles utilizados para conectar diferentes componentes en circuitos electrónicos. Se emplean principalmente en protoboards y permiten realizar conexiones temporales entre distintos elementos, como microcontroladores, sensores y otros componentes. Los cables jumper vienen en tres tipos: macho-macho, macho-hembra y hembra-hembra, cada uno diseñado para adaptarse a diferentes necesidades de conexión.

- ### Cables jummper macho-macho
    Tienen pines metálicos en ambos extremos, lo que permite conectar directamente dos orificios en una protoboard o conectar un pin del Arduino a la protoboard u otro componente.

- ### Cables jummper macho-hembra
    Tienen un pin metálico en un extremo y un conector hembra en el otro. Se utilizan para conectar un pin de una placa de desarrollo, como Arduino, a un componente con un conector hembra, como un sensor o módulo, y son útiles para extender conexiones o adaptar diferentes tipos de conectores.

- ### Cables jummper hembra-hembra
    Cuentan con conectores hembra en ambos extremos, ideales para conectar entre sí componentes con pines macho, como módulos o sensores, o para extender la longitud de una conexión uniendo dos cables macho-macho.

## LEDs
Los diodos LED (Light Emitting Diodes) son componentes electrónicos que emiten luz cuando una corriente eléctrica pasa a través de ellos. A diferencia de las bombillas incandescentes, los LEDs son más eficientes energéticamente, duran más tiempo y son más pequeños. 

Los LEDs tienen dos pines: el ánodo (positivo) y el cátodo (negativo). Se debe conectar el ánodo al lado positivo de la fuente de alimentación y el cátodo al negativo, ya que los LEDs solo permiten el flujo de corriente en una dirección. Además, los LEDs requieren resistencias en serie para limitar la corriente y evitar que se quemen.

<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/led-partes.png" alt="Partes de un LED">

*Imagen #. Partes de un LED.*

Los LEDs vienen en diversos colores y tamaños, y se utilizan en aplicaciones como indicadores de estado, pantallas y alumbrado.

<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/led-colores.png" alt="LEDs de diferentes colores">

*Imagen #. LEDs de diferentes colores.*

## Resistencias
## Potenciómetros
## Pulsadores
## Sensores

