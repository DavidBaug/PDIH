TEXTO40x25BN	EQU 0
TEXTO40x25C		EQU 1
TEXTO80x25BN	EQU 2
TEXTO80x25C		EQU 3
GRAFICO EQU 4

CYAN EQU 1
ROSA  EQU 2
BLANCO EQU 3

; MACRO pausa
; Espera la pulsacion de una tecla
pausa MACRO
        push ax
        mov ah,0   ;funcion para leer una tecla
        int 16h    ;interrupcion BIOS para teclado
        pop ax
ENDM

; MACRO modo_video
; Cambia el modo de video
modo_video MACRO modo
        push ax
        mov al,modo
        mov ah,0
        int 10h
        pop ax
ENDM

; MACRO pixel
; Pone un pixel en la coordenada X,Y de color C
pixel MACRO X,Y,C
        push ax
        push cx
		push dx
		mov ax,Y
		mov cx,X
		mov dx,ax
        mov al,C
        mov ah,0Ch
        int 10h
        pop dx
        pop cx
		pop ax
ENDM

pila segment stack 'stack'
	dw 110h dup (?)
pila ends

datos segment 'data'
		msg_1 db 13,10,'Presione cualquier tecla para entrar en modo grafico...',13,10,'$'
		msg_2 db 13,10,'Modo texto 80x25 restaurado.',13,10,'$'
datos ends


codigo segment 'code'
	assume cs:codigo, ds:datos, ss:pila
	main PROC
		mov ax,datos
		mov ds,ax

		mov dx,OFFSET msg_1
		mov ah,9
		int 21h
		pausa

        ; Pasamos a modo gráfico
		modo_video GRAFICO

		; linea horizontal superior
		mov cx,260
        mov bx,60
		bucle1:
			pixel cx,90,BLANCO
			dec cx
            cmp cx,bx
			jne bucle1

        ; linea horizontal inferior
		mov cx,260
        mov bx,59
		bucle2:
			pixel cx,110,BLANCO
			dec cx
            cmp cx,bx
			jne bucle2

        ; linea vertical izquierda
		mov cx,90
        mov bx,110
		bucle3:
			pixel 60,cx,BLANCO
			inc cx
            cmp cx,bx
			jne bucle3

        ; linea vertical derecha
		mov cx,90
        mov bx,110
		bucle4:
			pixel 260,cx,BLANCO
			inc cx
            cmp cx,bx
			jne bucle4

        ; Punto ROSA
		pixel 90,100,ROSA

    ; Punto CYAN
    pixel 160,100,CYAN

    ; Punto BLANCO
    pixel 230,100,BLANCO

		; Pausamos y volvemos a 80x25
		pausa
		modo_video TEXTO80x25C

    mov dx,OFFSET msg_2
		mov ah,9
		int 21h

		mov ax,4C00h
		int 21h

	main ENDP
codigo ends

END main
