
; Espera la pulsación de una tecla
pausa MACRO
        mov ah,0   ;función para leer una tecla
        int 16h    ;interrupción BIOS para teclado
ENDM

; Cambia el modo a video
modo_video MACRO modo
        mov al,3
        mov ah,0
        int 10h
ENDM

; Cambia el modo a texto
modo_texto MACRO
        mov al,1
        mov ah,0
        int 10h
ENDM

pila segment stack 'stack'
	dw 100h dup (?)
pila ends

datos segment 'data'
		msg_1 db 13,10,'Presione cualquier tecla para entrar en modo texto 40x25',13,10,'$'
		msg_texto db 13,10,'Modo texto 40x25 activado, presiona cualquier tecla para volver',13,10,'$'
		msg_2 db 13,10,'Se ha restaurado el modo de video 80x25',13,10,'$'
datos ends


codigo segment 'code'
	assume cs:codigo, ds:datos, ss:pila
	main PROC
		mov ax,datos
		mov ds,ax

    ; Info 1
		mov dx,OFFSET msg_1
		mov ah,9 ; Función para hacer print
		int 21h
		pausa

		; Cambiar modo
		modo_texto

    ; Info texto
		mov dx,OFFSET msg_texto
		mov ah,9 ; Función para hacer print
		int 21h ; Llamamos a la función

		; Pausar y volver a 80x25
		pausa
		modo_video

    ; Info 2
		mov dx,OFFSET msg_2
		mov ah,9 ; Función para hacer print
		int 21h ; Llamamos a la función

		mov ax,4C00h ; return
		int 21h ; Llamamos a la función
	main ENDP
codigo ends

END main
