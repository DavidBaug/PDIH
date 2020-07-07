# Preguntas tema 2

1. Existen interrupciones:
<ol type="a">
  <li>Hardware, software y BIOS</li>
  <li>Hardware y software</li>
  <li>Software</li>
  <li>Ninguna es correcta</li>
</ol>

Solución: (b) Aunque dentro de estos dos tipos podemos diferenciar otros conjuntos de interrupciones.

2. La BIOS es:
<ol type="a">
  <li>Un firmware en el chip de la placa base encargado de arrancar el PC y dar soporte para el manejo de E/S</li>
  <li>Un firmware en el chip del procesador encargado de arrancar el PC y comunicarse con los dispositivos de E/S</li>
  <li>El cargador de arranque que permite cargar distintos sistemas operativos</li>
  <li>Un programa que se ejecuta al compilar el kernel de un sistema operativo</li>
</ol>

Solución: (a) Es lo primero que se ejecuta al arrancar el equipo y permite configurar los disposivos básicos

3. UEFI es:
<ol type="a">
  <li>Un tipo de BIOS pensada para sistemas con sistemas operativos de Microsoft</li>
  <li>Una característica de BIOS que permite cargar varios sistemas operativos</li>
  <li>Igual que BIOS, pero con interfaz gráfica</li>
  <li>Otro firmware distinto que tiene las mismas funcionalidades y otras más actualizadas que BIOS</li>
</ol>

Solución: (d) Es un firmware distinto, sucesor a BIOS, que mejora y añade varias funcionalidades distintas. Las más notables son que puede ejecutarse en 32/64 bits, tiene interfaz gráfica, arranque más rápido e implementa un modo seguro que protege al sistema de bootkits.


4. Los servicios que podemos usar programando para comunicarnos con el sistema operativo se llaman:
<ol type="a">
  <li>WINAPI</li>
  <li>STDIO.H</li>
  <li>API</li>
  <li>SYSCALL</li>
</ol>

Solución: (c) La API del S.O. es el conjunto de servicios que podemos usar para facilitar la programación y el acceso a los dispositivos.

5. La interrupción que llamamos en MSDOS para ejecutar una función es:
<ol type="a">
  <li>int 80h</li>
  <li>int 16h</li>
  <li>int 21h</li>
  <li>return 0</li>
</ol>

Solución: (c) Tras seleccionar la función y los parámetros en msdos llamamos a la interrupción 21h

6. En ensamblador:
<ol type="a">
  <li>La velocidad no es importante y sólo importa que el programa ocupe poco espacio</li>
  <li>La sintaxis es sencilla</li>
  <li>No podemos acceder a los registros del procesador, de eso se encarga el compilador</li>
  <li>Ninguna es correcta</li>
</ol>

Solución: (d) El ensamblador es un lenguaje complicado que nos permite mucha precisión a la hora de tratar tanto con el procesador y con los dispositivos. Es por eso que es muy rápido y los programas suelen ser pequeños y centrarse en resolver problemas muy concretos.

7. Tras escribir un programa usando ensamblador:
<ol type="a">
  <li>Ejecutamos</li>
  <li>Compilamos y ejecutamos</li>
  <li>Compilamos, enlazamos y ejecutamos</li>
  <li>Depuramos y ejecutamos</li>
</ol>

Solución: (c) Antes de ejecutar el programa compilado debemos enlazar el programa objeto generado de la compilación.

8. Con cuál de los siguientes códigos podemos sumar 3 al registro eax:
<ol type="a">
  <li>add 3, eax</li>
  <li>push eax, 3</li>
  <li>mov eax, eax + 3</li>
  <li>Ninguna de las anteriores</li>
</ol>

Solución: (d) Para sumar números en ensamblador antes debemos tenerlos en registros y después ejecutar add sobre los mismos. Ej:
```
mov ebx, 3
add eax, ebx
```

9. Los registros de propósito general de MSDOS son:
<ol type="a">
  <li>AX, BX, CX, DX, SI, DI, BP, SP</li>
  <li>EAX, EBX, ECX, EDX, SI, DI, BP, SP</li>
  <li>AH, AL, BH, BL, CH, CL, DH, DL</li>
  <li>Ninguna es correcta</li>
</ol>

Solución: (a) Contamos con 8 registros de propósito general cada cuál tiene un propósito específico con el fin de hacer el código más legible y sencillo dentro de lo posible.


10. Para seleccionar la función print en msdos usamos:
<ol type="a">
<li>mov al, 9</li>
  <li>mov ah, 9</li>
  <li>int 21h</li>
  <li>Ninguna es correcta</li>
</ol>
Solución: (b) int 21h llama a la interrupción y mov al nos permitiría seleccionar una subfunción dentro de la función. 
