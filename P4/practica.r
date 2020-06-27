library(tuneR)
library(seewave)
library(audio)

setwd("D:/Git/PDIH/P4") # Fijar directorio de trabajo

# ------------------------------------------------------------------------------

# Ejercicio 1: Leer dos ficheros de sonido

# wav
perro <- readWave('./sonidos/perro.wav')
perro
listen(perro)

# mp3
gato <- readMP3('./sonidos/gato.mp3')
gato
listen(gato)


# ------------------------------------------------------------------------------

# Ejercicio 2: Dibujar la forma de onda de ambos sonidos

plot(extractWave(gato, from = 1, to = length(gato)), main="Gato")
plot(extractWave(perro, from = 1, to = length(perro)), main="Perro")

# ------------------------------------------------------------------------------


# Ejercicio 3: Mostrar informaci�n de cabeceras
str(gato)
str(perro)

# ------------------------------------------------------------------------------

# Ejercicio 4: Unir ambos sonidos
perro@left <- perro@left * (max(gato@left)/max(perro@left))
perro@right <- perro@right * (max(gato@right)/max(perro@right))
perro_gato <- pastew(gato, perro, output="Wave")

listen(perro_gato)

# ------------------------------------------------------------------------------

# Ejercicio 5: Dibujar onda resultante
plot(extractWave(perro_gato, from = 1, to = length(perro_gato)), main="Perro + gato")

# ------------------------------------------------------------------------------

# Ejercicio 6: Pasarle un filtro de frecuencia para eliminar las frecuencias entre 10000Hz y 20000Hz
filtro_perro_gato <- bwfilter(perro_gato, f = perro_gato@samp.rate, channel = 1, 
                              n = 1, from = 10000, to = 20000, bandpass = TRUE, output = "Wave")
plot(extractWave(filtro_perro_gato, from = 1, to = length(filtro_perro_gato)), main="Filtro perro gato")


# ------------------------------------------------------------------------------

# Ejercicio 7: Almacenar la se�al obtenida como un fichero WAV denominado "mezcla.wav"
writeWave(filtro_perro_gato, file.path("./sonidos/mezcla.wav"))

mezcla <- readWave('./sonidos/mezcla.wav')
listen(mezcla)
# ------------------------------------------------------------------------------

# Ejercicio 8: Cargar un nuevo archivo de sonido, aplicarle eco y a continuaci�n darle la 
# vuelta al sonido. Almacenar la se�al obtenida como un fichero WAV denominado "alreves.wav".

oveja <- readWave('./sonidos/oveja.wav')
plot(extractWave(oveja, from = 1, to = length(oveja)), main="Oveja")
str(oveja)
listen(oveja)

ovejaECO <- echo(oveja, f = oveja@samp.rate, amp = c(0.66, 0.3, 0.05), delay = c(2, 4, 6), output = "Wave")
plot(extractWave(ovejaECO, from = 1, to = length(ovejaECO)), main="Oveja ECO")
str(ovejaECO)
listen(ovejaECO)

ovejaECOalreves <- revw(ovejaECO, output="Wave")
plot(extractWave(ovejaECOalreves, from = 1, to = length(ovejaECOalreves)), main="Oveja ECO al rev�s")
listen(ovejaECOalreves)

writeWave(ovejaECOalreves, file.path("./sonidos/alreves.wav"))
