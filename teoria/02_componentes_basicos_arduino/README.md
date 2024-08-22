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

<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/partes-protoboard.jpg" alt="Partes de la protoboard">

*Imagen 1. Partes de la protoboard.*

- ### Buses de alimentación
    Los buses de alimentación están ubicados en los bordes de la protoboard y se utilizan para distribuir el voltaje positivo y negativo a lo largo del circuito. Normalmente están marcados con líneas rojas (positivo) y azules o negras (negativo) para facilitar la identificación de las conexiones. Todos los orificios a lo largo de una misma fila están conectados horizontalmente.

    <img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/protoboard-buses.png" alt="Bus de alimentación positivo de la protoboard">

    *Imagen 2. Bus de alimentación positivo de la protoboard.*

- ### Canal central
    El canal central separa las dos secciones principales de la protoboard. Este espacio permite insertar circuitos integrados (ICs) u otros componentes de tal forma que sus pines queden conectados a las pistas de cada lado, evitando cortocircuitos entre ellos.

    <img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/protoboard-canal-central.png" alt="Uso del canal central de la protoboard">

    *Imagen 3. Uso del canal central de la protoboard.*

- ### Pistas
    Cada pista de conexión consta de cinco orificios que están eléctricamente conectados entre sí. Esto significa que al insertar un pin o un cable en cualquier orificio, este estará conectado automáticamente a los otros cuatro de la misma pista. Este diseño facilita la construcción de circuitos temporales y prototipos, ya que elimina la necesidad de soldadura.

    <img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/protoboard-pistas.png" alt="Ejemplo de pista de la protoboard">

    *Imagen 4. Ejemplo de pista de la protoboard.*

## Cables jumper
Los cables jumper son cables flexibles utilizados para conectar diferentes componentes en circuitos electrónicos. Se emplean principalmente en protoboards y permiten realizar conexiones temporales entre distintos elementos, como microcontroladores, sensores y otros componentes. Los cables jumper vienen en tres tipos: macho-macho, macho-hembra y hembra-hembra, cada uno diseñado para adaptarse a diferentes necesidades de conexión.

- ### Cables jummper macho-macho
    Tienen pines metálicos en ambos extremos, lo que permite conectar directamente dos orificios en una protoboard o conectar un pin del Arduino a la protoboard u otro componente.
        
    <img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/jumper-macho-macho.png" alt="Cables jumper macho-macho">

    *Imagen 5. Cables jumper macho-macho.*

- ### Cables jummper macho-hembra
    Tienen un pin metálico en un extremo y un conector hembra en el otro. Se utilizan para conectar un pin de una placa de desarrollo, como Arduino, a un componente con un conector hembra, como un sensor o módulo, y son útiles para extender conexiones o adaptar diferentes tipos de conectores.
     
     <img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/jumper-macho-hembra.png" alt="Cables jumper macho-hembra">

    *Imagen 6. Cables jumper macho-hembra.*

- ### Cables jummper hembra-hembra
    Cuentan con conectores hembra en ambos extremos, ideales para conectar entre sí componentes con pines macho, como módulos o sensores, o para extender la longitud de una conexión uniendo dos cables macho-macho.

    <img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/jumper-hembra-hembra.png" alt="Cables jumper hembra-hembra">

    *Imagen 7. Cables jumper hembra-hembra.*

## LEDs
Los diodos LED (Light Emitting Diodes) son componentes electrónicos que emiten luz cuando una corriente eléctrica pasa a través de ellos. A diferencia de las bombillas incandescentes, los LEDs son más eficientes energéticamente, duran más tiempo y son más pequeños.

Tienen dos pines: el ánodo (positivo) y el cátodo (negativo). Se debe conectar el ánodo al lado positivo de la fuente de alimentación y el cátodo al negativo, ya que los LEDs solo permiten el flujo de corriente en una dirección. Además, los LEDs requieren resistencias en serie para limitar la corriente y evitar que se quemen.

<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/led-partes.png" alt="Partes de un LED">

*Imagen 8. Partes de un LED.*

Vienen en diversos colores y tamaños, y se utilizan en aplicaciones como indicadores de estado, pantallas y alumbrado.

<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/led-colores.png" alt="LEDs de diferentes colores">

*Imagen 9. LEDs de diferentes colores.*

## Resistencias
Son componentes electrónicos pasivos (consumen o disipan energía) que limitan el flujo de corriente en un circuito. Su principal función es proteger otros componentes, como LEDs o transistores, evitando que reciban demasiada corriente, lo que podría dañarlos.

<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/resistencia-4-bandas.png" alt="Resistencia de 4 bandas">

*Imagen 10. Resistencia de 4 bandas.*

 Las resistencias se miden en ohmios (Ω), y su valor determina cuánto restringen la corriente. Están formadas por un material resistivo, generalmente carbono o metal, y su valor de resistencia está indicado por un código de colores en su cuerpo.


<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/tabla-calcular-resistencias.png" alt="Resistencia de 4 bandas">

*Imagen 11. Tabla para calcular valor de una resistencia.*

## Potenciómetros
Son resistencias variables que permiten ajustar manualmente el nivel de resistencia en un circuito. Constan de tres terminales: dos terminales fijos conectados a los extremos de una resistencia fija y un tercer terminal, llamado cursor o wiper, que se desliza a lo largo de la resistencia fija, variando la resistencia entre el cursor y los otros dos terminales. Se utilizan en una amplia variedad de aplicaciones donde se necesita un control ajustable de resistencia.

<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/potenciometro.png" alt="Potenciómetro">

*Imagen 12. Potenciómetro.*

## Pulsadores
Son dispositivos de control que actúan como interruptores momentáneos en un circuito eléctrico. Funcionan permitiendo el paso de corriente solo mientras están presionados, y se abren automáticamente cuando se suelta la presión, interrumpiendo el flujo de corriente. Se utilizan en aplicaciones donde se necesita una acción temporal, como activar una función, encender o apagar dispositivos brevemente, o enviar señales de entrada a un sistema. Son comunes en botones de encendido, timbres, teclados y controles remotos.

<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/pulsador.png" alt="Pulsador">

*Imagen 13. Pulsador.*

## Sensores
Son dispositivos que detectan cambios en el entorno físico y convierten esa información en señales eléctricas que pueden ser interpretadas por un sistema, como un microcontrolador o una computadora. Existen diversos tipos de sensores, cada uno diseñado para medir diferentes variables, como temperatura, luz, humedad, presión, movimiento, proximidad, etc. Por ejemplo, un sensor de temperatura mide el calor y envía una señal que representa la temperatura medida, mientras que un sensor de luz mide la intensidad lumínica y envía una señal correspondiente.

<img src="https://github.com/Ingenieria-Electrica-UdeA/banco_imagenes/blob/main/presentaciones/sensores-arduino.png" alt="Diferentes sensores para Arduino">

*Imagen 14. Diferentes sensores para Arduino.*