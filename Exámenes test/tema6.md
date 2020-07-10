# Preguntas tema 6

1. **La coercitividad de un disco mide:**
<ol type="a">
  <li>La velocidad de lectura y escritura del mismo</li>
  <li>La resistencia que ofrece a que se altere su campo magnético </li>
  <li>El tiempo que es capaz de mantener un campo magnético</li>
  <li>Cantidad de bits que se pueden almacenar en una determinada área</li>
</ol>

Solución: (b) Mide la resistencia que ofrece para alterar su campo magnético, lo que influye en la facilidad para modificar los valores que almacena. Para su correcto funcionamiento, la cabeza lectora/escritora deben adecuar su coercitividad.

2. **Para operar con un disco magnético se desplaza el brazo hasta:**
<ol type="a">
  <li>una pista</li>
  <li>un sector de disco</li>
  <li>un clúster</li>
  <li>un sector geométrico</li>
</ol>

Solución: (a) La superficie del disco se divide en pistas, que es donde se sitúa la cabeza lectora/escritora. Cada pista se divide en sectores y los sectores se agrupan a nivel lógico en clusters o unidades de asignación.

3. **Podemos medir las prestaciones de un disco mediante:**
<ol type="a">
  <li>Velocidad, capacidad y seguridad</li>
  <li>Velocidad, capacidad y retentividad</li>
  <li>Velocidad, capacidad y fiabilidad</li>
  <li>Velocidad, capacidad y densidad de grabación</li>
</ol>

Solución: (c) Velocidad, que nos indica el tiempo que tarda en realizar las operaciones de lectura/escritura; capacidad, capacidad potencial en un disco sin formatear y capacidad efectiva para almacenar archivos en uno formateado; fiabilidad, nos permite medir la tolerancia a fallos y la "salud" del dispositivo.  

4. **Para operar con un disco óptico se desplaza el brazo hasta:**
<ol type="a">
  <li>una pista</li>
  <li>un sector de disco</li>
  <li>un clúster</li>
  <li>Ninguna de las anteriores</li>
</ol>

Solución: (d) En un disco óptico tenemos un sensor que detecta los cambios en la superficie del disco.

5. **Las ventajas de usar un motor de giro CLV respecto de uno CAV son:**
<ol type="a">
  <li>La velocidad de giro variable permite incrementar la velocidad de lectura</li>
  <li>Se necesitan menos lecturas para leer la información, por lo que se daña menos el disco</li>
  <li>Permite una velocidad de lectura constante</li>
  <li>Reduce las vibraciones</li>
</ol>

Solución: (c) Al poder variar la velocidad entre el interior y el exterior tenemos una velocidad de lectura constante en todos los sectores del disco.

6. **Diferencias prinripales entre BluRay y CD/DVD:**
<ol type="a">
  <li>Tienen una longitud de onda menor</li>
  <li>El grosor de la capa es menor, siendo así más resistentes por la capa de policarbonato</li>
  <li>Tienen una apertura numérica mayor</li>
  <li>Todas son correctas</li>
</ol>

Solución: (d) Al poder leer los cambios en una superficie más pequeña aumenta la capacidad y la velocidad de lectura. Pasamos de 4.7GB para DVD a 25GB en BluRay.

7. **¿Cómo funciona la memoria NAND?**
<ol type="a">
  <li>Los transistores siguen manteniendo su estado de carga aún cuando no reciben corriente eléctrica</li>
  <li>Al igual que DRAM, los transistores necesitan de carga eléctrica con una frecuencia de refresco constante</li>
  <li>Memorias ROM que se leen por ráfagas y sirven para alojar el funcionamiento básico del sistema (bios, boot, ...)</li>
  <li>Ninguna es correcta</li>
</ol>

Solución: (a) Basan su estructuras en transistores de puerta flotante almacenando sus electrones de forma que tomen una lectura de 0 cuando está cargado o 1 si está vacío.

8. **Los SSD y los HDD suelen tener una vida útil similar (de 5 a 7 años), ¿por qué se usan HDD (o incluso cintas magnétigas) para bases de datos?**
<ol type="a">
  <li>Porque se prioriza el coste</li>
  <li>Porque se prioriza la capacidad</li>
  <li>Porque se prioriza la seguridad</li>
  <li>Todas son correctas</li>
</ol>

Solución: (d) Ni siquiera yo estoy completamente seguro de esta, pero en caso de necesitar guardar ficheros importantes, un HDD puede degradarse, pero aunque lo haga podremos recuperar su información. Por otro lado, un SSD deja de funcionar directamente, sin previo aviso, cosa que no te hace gracia si estás trabajando con bases de datos. Para este tipo de problemas queremos un dispositivo fiable que garantice un buen funcionamiento y que no resulte muy caro si se trata de un proyecto a gran escala. El uso de cintas magnéticas es un plus de seguridad, ya que se suelen usar para almacenar copias de seguridad.

En conclusión, para un uso doméstico, un SSD te ofrece un mejor rendimiento y es mucho más satisfactorio ver como tu ordenador se enciende en 7 segundos en vez de 34. Pero si quieres guardar tu TFG, mejor guardarlo en un HDD (y si es posible, haciendo una copia de seguridad) a pesar de tener unos tiempos de acceso menores.

9. **¿Qué es un inodo?**
<ol type="a">
  <li>Un archivo que indica la estructura de un directorio en un sistema de archivos de linux</li>
  <li>Una especie de número de serie que contiene información sobre un archivo</li>
  <li>Un enlace simbólico a un archivo en linux</li>
  <li>Una partición software que realiza el sistema de ficheros de linux</li>
</ol>

Solución: (b) Se encarga de almacenar la información más relevante de un archivo: Propietario, tipo de archivo, permisos, etc.

10. **En Windows 10 se usa principalmente como sistema de archivos:**
<ol type="a">
  <li>FAT32</li>
  <li>ext4</li>
  <li>GPT</li>
  <li>Ninguna de las anteriores</li>
</ol>

Solución: (d) Acepta FAT32, aunque principalmente usa NTFS.
