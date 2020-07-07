# Preguntas tema 3

1. ¿Qué es una interfaz?:
<ol type="a">
  <li>nexo de conexión que facilita la
comunicación entre dos dispositivos</li>
  <li>firmware de un disposivo</li>
  <li>controlador del dispositivo (driver)</li>
  <li>programa que maneja las interrupciones de los dispositivos</li>
</ol>

Solución: (a) Es aquél que permite la communicación entre los dispositivos e incluye driver del disposivo, adaptador del host y controladora.

2. Podemos dividir el modelo de interfaz en:
<ol type="a">
  <li>Capa hardware y software</li>
  <li>Capa física, de protocolo y de enlace</li>
  <li>Modelo de dispositivo y modelo de instructiones</li>
  <li>ninguna de las anteriores</li>
</ol>

Solución: (d) Lo podemos dividir en física, protocolo, modelo de dispositivo y modelo de instrucciones.

3. Los pasos desde que un dispositivo genera datos hasta que los podemos usar son:
<ol type="a">
  <li>Se detecta la señal en el dispositivo y la controladora manda los datos, pasan a través del adaptador y el controlador del dispositivo las traduce para el sistema operativo</li>
  <li>Se detecta la señal en la capa física, la capa de protocolo manda los datos, la capa de enlace las traduce para el sistema operativo</li>
  <li>El modelo de disposivo genera la señal y la manda, el modelo de instrucciones traduce la señal a instrucciones máquina</li>
  <li>Ninguna de las anteriores</li>
</ol>

Solución: (a) La interfaz es la encargada de comunicar los dispositivos entre sí. Para ello incluye principalmente el device driver, host adapter y controller.

4. Las ranuras para tarjetas de expansión:
<ol type="a">
  <li>También conocidas como ranuras PCI-E, permiten conectar una tarjeta gráfica</li>
  <li>Permiten añadir módulos RAM</li>
  <li>Sirven para añadir un mayor número de puertos USB a la placa base</li>
  <li>Ninguna de las anteriores</li>
</ol>

Solución: (d) Existen varios tipos con distintas tecnologías y permiten conectar multitud de dispositivos distintos.

5. Las ranuras PCI-Express se suelen usar para conectar:
<ol type="a">
  <li>Tarjetas gráficas</li>
  <li>Adaptadores de red wifi</li>
  <li>Discos duros M.2</li>
  <li>Todas son correctas</li>
</ol>

Solución: (d) Son ranuras con un gran ancho de banda y compatibilidad a nivel de software con PCI, lo que las hace ideales para los casos anteriores.

6. En los disposivos de almacenamiento antiguos se usaba un cable IDE para:
<ol type="a">
  <li>Alimentar al dispositivo</li>
  <li>Seleccionar entre maestro o esclavo entre varios discos</li>
  <li>Conectar el disposivo con el sistema</li>
  <li>Alimentar el disposivo y conectarlo al sistema</li>
</ol>

Solución: (c) El cable mólex es el encargado de suplir la energia necesaria para su funcionamiento y mediante otros conectores auxiliares se configura el maestro-esclavo.

7. Diferencias entre SATA y PATA:
<ol type="a">
  <li>Velocidad y refrigeración</li>
  <li>Uniformidad, no existe relación maestro-esclavo</li>
  <li>SATA tiene una mejor detección y corrección de errores</li>
  <li>Todas son correctas</li>
</ol>

Solución: (d) SATA es la renovación de PATA, mejora los aspectos de IDE y la configuración de los discos se da en el sistema, en vez de tener una interfaz en cada unidad.

8. SCSI es:
<ol type="a">
  <li>un conector cuyo objetivo es presentar una interfaz independiente de la unidad básica para conectar dispositivos</li>
  <li>un conector que permite la conexión de dispositivos entrada</li>
  <li>una interfaz más rápida que SATA para conectar discos individualmente</li>
  <li>una alternativa barata y más lenta que SAS</li>
</ol>

Solución: (a) Permite gestionar varios dispositivos de forma eficiente y es más eficaz que SATA a la hora de conectar varios discos.

9. ¿Qué son los conectores externos?:
<ol type="a">
  <li>Son conectores que se suelen situar en la parte posterior de la placa y permiten conectar periféricos externos</li>
  <li>Son aquellos en los que conectanos dispositivos que no necesitan de interfaz para comunicarse con el S.O.</li>
  <li>Igual que los internos, pero se sitúan en la parte posterior para un acceso más sencillo</li>
  <li>Son los que nos permiten encender el ordenador y reiniciarlo</li>
</ol>

Solución: (a) Sí que son conectores similares a los internos, pues sirven para conectar dispositivos, pero su propósito no es el mismo. Son los principales que permiten que el usuario pueda interactuar con el sistema.


10. Para configrar un RAID en el que tenemos dos discos de misma capacidad y queremos crear en uno de ellos una copia exacta del otro usaremos:
<ol type="a">
  <li>RAID 0</li>
  <li>RAID 1</li>
  <li>RAID 5</li>
  <li>RAID 10</li>
</ol>

Solución: (b) Con RAID 1 tenemos uno o más discos, siendo todos un espejo de los mismos. No ofrece mejoras de rendimiento pero es lo más útil si lo importante es la seguridad de los datos.

11. Imagina que tenemos un centro de datos en el que tendremos varias tipos de unidades de almacenamiento interconectados y un varios ordenadores accediendo a ellas, siendo prioritario el rápido acceso a los datos y la escalada ¿qué protocolo de almacenamiento en red usarías?:
<ol type="a">
  <li>SSA</li>
  <li>SAN</li>
  <li>NAS</li>
  <li>DAS</li>
</ol>

Solución: (b)  SAN ofrece una capa de abstracción entre los dispositivos de almacenamiento y los servidores. También permite que se puedan añadir nuevos dispositivos al sistema y puede operar con SSA y NAS.
