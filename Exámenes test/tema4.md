# Preguntas tema 4

1. **El origen del término parche se debe a:**
<ol type="a">
  <li>Los apodados piratas del valle del silicio denominaban así a sus ajustes en programas en honor al ojo del pirata</li>
  <li>Para corregir las tarjetas perforadas se usaba un parche para cubrir los agujeros</li>
  <li>su uso para cubrir las tarjetas del sol y que no se deteroriaran</li>
  <li>se usaba para incrustar bichos (bugs) en los circuitos a modo de amenaza</li>
</ol>

Solución: (b) Tristemente las usaban para corregir las tarjetas, aunque creo que todas las otras opciones son igualmente válidas.

2. **¿Qué ocurre desde que pulsas una tecla de un teclado hasta que la ves escrita en la pantalla?:**
<ol type="a">
  <li>Se detecta la señal, el controlador envía el código y una solicitud de interrupción, el sistema evalúa la solicitud y pasa el código a la CPU</li>
  <li>Se detecta la señal y el controlador manda el código a la CPU</li>
  <li>La CPU evalúa constantemente el estado del periférico y procesa todas las señales de forma paralela</li>
  <li>Una interfaz recoge en un buffer las teclas pulsadas y las transmite al controlador del disposivo</li>
</ol>

Solución: (a) Necesitamos el controlador para transmitir las señales, el adaptador por el cual viajan y el controlador del disposivo para que podamos procesarlas.

3. **Los teclados de PC generan códigos de barrido de 8 bits al pulsar y soltar una tecla, ¿a qué puerto se envían dichos códigos?:**
<ol type="a">
  <li>9h</li>
  <li>60h</li>
  <li>21h</li>
  <li>80h</li>
</ol>

Solución: (b) Se envía el código a la 60h y se activa la interrrupción 9h y dependiendo de la tecla o combinación de teclas pulsadas se realiza una función específica.

4. **Los DPI (dots per inch) de un ratón son el número de elementos que detecta por unidad de longitud. Dicha medida corresponde a:**
<ol type="a">
  <li>la precisión de un ratón</li>
  <li>la sensibilidad de un ratón</li>
  <li>la velocidad de un ratón</li>
  <li>la resolución de un ratón</li>
</ol>

Solución: (d) La precisión s se determina por los componentes del disposivo y la sensibilidad es una opción software que determina la correspondencia entre el movimiento del ratón y el del puntero en la pantalla.

5. **¿En qué casos es mejor sustituir un ratón por un digitalizador?:**
<ol type="a">
  <li>En los que el usuario presenta problemas de tunel carpiano</li>
  <li>En aquellos que se necesita de más precisión que la mínima teórica que ofrece un ratón</li>
  <li>En aquellos que no se dispone de mucho espacio para el recorrido del ratón</li>
  <li>No es mejor sustiturlo en ningún caso</li>
</ol>

Solución: (b) Las tabletas digitalizadoras ofrecen de una mayor precisión y resolución, por lo que son más aptas para tareas como el dibujo y diseño.


6. **En una tablet o smartphone podemos diferenciar los distintos tipos de pantalla:**
<ol type="a">
  <li>Resistiva, capacitiva y electromagnética</li>
  <li>Resistiva, capacitiva, de contactos y electromagnética</li>
  <li>Resistiva y capacitiva</li>
  <li>Interactiva</li>
</ol>

Solución: (c) Aunque en estos tiempos podríamos decir que sólo resistiva, pues ofrece una tecnología más eficaz y eficiente, a pesar de tener un mayor coste.

7. **¿Qué es la norma Twain?:**
<ol type="a">
  <li>Una interfaz normalizada que los programas de aplicación puedan usar cualquier escáner independientemente de su hardware</li>
  <li>Una fórmula que mide la resolución de un escáner</li>
  <li>Una normalización del proceso que deben seguir todos los escáneres para convertir las imágenes a digital</li>
  <li>Una tecnología que permite detectar los carácteres de un documento (OCR)</li>
</ol>

Solución: (a) Una interfaz que ofrece una serie de instrucciones estándar que cada driver es capaz de traducir para su propio hardware.

8. **¿Cómo funcionan los lectores de códigos de barras?:**
<ol type="a">
  <li>Un láser toma imágenes del código que luego un procesador de imágenes interpreta</li>
  <li>Un láser lee el código y lo transforma en señales eléctricas</li>
  <li>Un láser nos ayuda a alinear el sensor fotométrico que recoge las barras y las transforma en binario</li>
  <li>Ninguna de las anteriores es correcta</li>
</ol>

Solución: (b) El láser genera señales eléctricas que después se transforman a un código digital único.

9. **¿Qué ventajas tiene el uso de smart cards frente a tarjetas magnéticas?**
<ol type="a">
  <li>Son más resistentes ya que el chip no se borra</li>
  <li>Permiten la compra contactless</li>
  <li>Funcionan como un sistema embebido</li>
  <li>Todas las anteriores</li>
</ol>

Solución: (c) No son más resistentes, puesto que también se puede estropear el chip y quedar inutilizables. Una tarjeta contactless funciona sin contacto gracias al NFC, no al chip.

10. **¿Qué son los dispositivos de entrada biométricos?**
<ol type="a">
  <li>Dispositivos que usan los biólogos</li>
  <li>Dispositivos que usan una técnicas para identificar a las personas</li>
  <li>Dispositivos que usan las personas para mejorar sus sentidos (sonotone)</li>
  <li>Dispositivos que se usan en la medicina para estudios (TAC, IRM, ...)</li>
</ol>

Solución: (b) Usan sensores capaces de reconocer características individuales de cada persona
