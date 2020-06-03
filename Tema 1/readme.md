# Tema 1: Introducción y conceptos

### Arquitectura Von Neumann

Un computador consa de 3 bloques fundamentales unidos mediante buses: CPU, Memoria principal y unidades de E/S

La CPU o procesador contiene una serie de registros en los que se almacenan los datos generados a partir de las operaciones de la ALU (Unidad Aritmético-Lógica) y una unidad de control que actúa como un puntero que permite recorrer los registros

La memoria principal contiene datos e instrucciones. Los datos los maneja el procesador tras haberlos cargado en los registros y la unidad de control se encarga de las instrucciones.

Las unidades de entrada y salida suelen ser las encargadas de transferir la información de los periféricos a la memoria principal.


#### Buses

Para conectar cada elemento contamos con distintos buses:
 - **Datos**:
  - Transporta datos entre las unidades.
   - El nº de hilos guarda relación con la longitud de palabra del
computador.
   - Suele ser *bidireccional*: los mismos hilos transfieren información en
uno u otro sentido, en instantes diferentes.   
 - **Direcciones**:
  - Transporta la dirección de la posición de memoria o del periférico
que interviene en el tráfico de información.
  - Es *unidireccional*.
 - **Control**:
  - Es *bidireccional*.
  - Transporta señales de control y de estado para:
    - Indicar el sentido de una transferencia de datos.
    - Temporizar eventos.
    - Transmitir señales de petición y de reconocimiento, p.ej. de
interrupción.

##### Formas de interconexión
 - Bus doble: El tráfico entre E/S y memoria principal se realiza a través del procesador.
 - Bus único: El bus del sistema sólo puede utilizarse para una transferencia cada vez. Es más lento pero tiene un menor coste.

Como los dispositivos pueden tener distintas velocidades puede llegar a darse un cuello de botella cuando un elemento es mucho más rápido o lento que otro.



### Periféricos

 Son tanto las unidades o dispositivos a través de los que el procesador se comunica con el mundo exterior, como los dispositivos que almacenan información.

 Podemos diferenciarlos entre dispositivos de entrada, de salida y mixtos:
  - Entrada: Ratón, teclado, lector cd, ...
  - Salida: Pantalla, impresora, altavoces, ...
  - Mixto: Pantalla táctil, tarjeta de red, ...

Un dispositivo de interfaz humana es aquél que proporciona un método de interacción con un dispositivo electrónico a un humano mediante la entrada o salida de interacción.

Periféricos: Pueden no interactuar con un humano. Son hardware.
Dispositivo de interfaz humana: Interactúa con un humano. Hardware o software.


La interfaz es la encargada de mediar entre la máquina y el humano. Transforma las señales para que el sistema lo entienda y viceversa.

Interfaz física: formada por componentes electrónicos (adaptadores, conectores, etc). Parte hardware de la interfaz.

Interfaz lógica: conjunto de instrucciones que entiende el periférico, datos que proporciona a la unidad básica. Parte software de la interfaz.

Los dispositivos de almacenamiento solventan el problema de la volatilidad y pequeña capacidad de la memoria interna. Son dispositivos bidireccionales (E/S).

Los dispositivos de comunicaciones intercambian información con otros computadores o terminales de datos. Transmiten datos a través de líneas de comunicación y redes de diferente tipo. Son dispositivos bidireccionales o mixtas (E/S).

### Clasificación


### Controladoras de periféricos

Al contar con una gran cantidad de dispositivos se necesita un subsistema encargado de atenderlos y establecer la comunicación con el sistema.

La parte electrónica es la controladora del periférico. Interpreta órdenes que le llegan del procesador, para recibir/enviar datos, y para generar las señales de control para gestionar la parte mecánica (y así captar los datos si es entrada, o escribir los datos si es salida).

La parte electrónica tiene sensores para recoger la información: elementos opto-electrónicos, detectores de posición, etc.

 
