# Preguntas tema 1

1. ¿Qué ventajas ofrece una interconexión mediante bus único?:
 <ol type="a">
   <li>Al estar todos los componentes en el mismo bus la transmisión de información es más rápida.</li>
   <li>Un sólo bus reduce el coste de fabricación y la complejidad.</li>
   <li>Todas son correctas</li>
   <li>Ninguna es correcta</li>
 </ol>

 Solución: (b) Tener un sólo bus reduce el coste, pero reduce la velocidad ya que sólo una unidad puede tener el control en cada momento.

2. El famoso cuello de botella se da cuando:

<ol type="a">
  <li>La controladora de E/S está muy saturada al controlar varios dispositivos.</li>
  <li>La caché de los dispositivos tiene tamaños muy distintos.</li>
  <li>El procesador tiene pocos registros.</li>
  <li>La diferencia entre la velocidad de los dispositivos es muy grande.</li>
</ol>

Solución: (d) Que un dispositivo sea más rápido que otro implica que este acabe antes su tarea y tenga que esperar la respuesta del otro, lo que reduce considerablemente la velocidad del sistema.


3. Un dispositivo de interfaz humana es:

<ol type="a">
  <li>Un periférico que interactúa con un humano.</li>
  <li>Un programa con interfaz que usa un humano.</li>
  <li>Un dispositivo hardware.</li>
  <li>Todas son correctas.</li>
</ol>

Solución: (d) Un dispositivo de interfaz humana es un dispositivo con el que un humano interactúa y puede ser hardware o software.

4. Dentro de la interfaz distinguir:

<ol type="a">
  <li>Interfaz física, interfaz electrónica e interfaz lógica.</li>
  <li>Interfaz física e interfaz lógica.</li>
  <li>Hardware, software y firmware.</li>
  <li>Interfaz física e interfaz funcional.</li>
</ol>

Solución: (b) La interfaz física está formada por los componentes electrónicos del dispositivo, es la parte hardware del mismo. La interfaz lógica, al contrario, es la encargada de tratar con los datos que maneja el dispositivo. Es la parte software del mismo.

5. Un adaptador de internet USB (interfaz para red inalámbrica) es:
<ol type="a">
  <li>Un dispositivo de entrada.</li>
  <li>Un dispositivo mixto.</li>
  <li>Un dispositivo de comunicaciones.</li>
  <li>Ninguna es correcta.</li>
</ol>

Solución: (c) Es un dispositivo de comunicaciones, ya que permite la comunicación entre otros dispositivos para la transmisión de datos.

6. En la parte hardware de un dispositivo podemos encontrar:
<ol type="a">
  <li>La interfaz fisica y los componentes.</li>
  <li>La interfaz física, los componentes y los fundamentos físicos.</li>
  <li>La interfaz física</li>
  <li>La interfaz física y electrónica</li>
</ol>

Solución: (a) Encontramos la interfaz física y los componentes del dispositivo.

7. El firmware de un dispositivo es:
<ol type="a">
  <li>La interfaz lógica del dispositivo.</li>
  <li>Una funcionalidad del SO que permite operar con el dispositivo.</li>
  <li>Una parte del dispositivo encargada de comunicarse con el S.O.</li>
  <li>Ninguna es correcta.</li>
</ol>

Solución: (d) La interfaz firmware se comunica tanto con el S.O. como con los programas de aplicación a través de interrupciones software.

8. En la controladora de un periférico la parte mecánica:
<ol type="a">
  <li>Está controlada por el procesador.</li>
  <li>Es la que transforma las órdenes del procesador.</li>
  <li>Genera señales de control para gestionar la parte electrónica.</li>
  <li>Ninguna es correcta.</li>
</ol>

Solución: (d) Es la que usa la parte electrónica para recibir la información que llega, pero es la parte electrónica la encargada de interpretar las órdenes.


9. En la E/S controlada por programa:
<ol type="a">
  <li>El dispositivo manda a una señal de control al programa indicando su estado.</li>
  <li>El procesador evalúa contínuamente el estado del dispositivo en busca de cambios.</li>
  <li>El programa maneja directamente el dispositivo a través de interrupciones.</li>
  <li>El S.O. controla la interacción entre el programa y el dispositivo mediante un sistema de interrupciones.</li>
</ol>

Solución: (b) El procesador pregunta constantemente al dispositivo si tiene listos los datos.


10. Para paliar la diferencia de velocidad entre los dispositivos, las controladoras pueden:
<ol type="a">
  <li>Recoger los datos del dispositivo en la interfaz de E/S</li>
  <li>usar E/S controlada por interrupciones.</li>
  <li>usar buffers con datos que coloca el procesador.</li>
  <li>overclockear el dispositivo.</li>
</ol>

Solución: (c) Se usan mecanismos de multiplexado para permitir que el procesador resuelva otros problemas mientras el dispositivo trabaja.
