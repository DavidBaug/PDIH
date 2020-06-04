#include <stdio.h>
#include <dos.h>

unsigned int MODO_TEXTO = 3;
unsigned int MODO_VIDEO = 4;

unsigned int TEXT_COLOR = 7;
unsigned int BACK_COLOR = 0;

// Coloca el cursor en una posicion (x,y)
void gotoxy(int x, int y) {
    union REGS inregs, outregs;

    inregs.h.ah = 0x02;

    inregs.h.dl = x;
	  inregs.h.dh = y;

    inregs.h.bh = 0x00;

    int86(0x10, &inregs, &outregs);
}


// Fijar el aspecto del cursor, debe admitir tres valores: INVISIBLE, NORMAL y GRUESO.
// Invisible: 0
// Normal: 1 (cualquiera que no sea 0 o 2)
// Grueso: 2
void setcursortype(unsigned int type) {
  union REGS inregs, outregs;
	inregs.h.ah = 0x01;

	switch(type) {
		case 0: // invisible
			inregs.h.ch = 010;
			inregs.h.cl = 000;
			break;

		case 1: // normal
			inregs.h.ch = 010;
			inregs.h.cl = 010;
			break;

		case 2: // grueso
			inregs.h.ch = 000;
			inregs.h.cl = 010;
			break;

    default: // normal
      inregs.h.ch = 010;
			inregs.h.cl = 010;
			break;
	}

	int86(0x10, &inregs, &outregs);
}


// Set modo de video
void setvideomode(unsigned char mode) {
    union REGS inregs, outregs;
    inregs.h.ah = 0x00;
    inregs.h.al = mode;

    int86(0x10, &inregs, &outregs);
}

// get modo de video
unsigned int getvideomode(void) {
    union REGS inregs, outregs;
    inregs.h.ah = 0xF;

    int86(0x10, &inregs, &outregs);
    return outregs.h.al;
}

// Modifica el color de primer plano con que se mostraran los caracteres
void textcolor(int color) {
    TEXT_COLOR = color;
}

// Modifica el color de fondo con que se mostraran los caracteres
void textbackground(int color) {
    BACK_COLOR = color;
}

// Borra toda la pantalla
void clrscr(void) {
    union REGS inregs, outregs;

    inregs.h.ah = 0x06;
    inregs.h.al = 0;
    inregs.h.ch = 0;
    inregs.h.cl = 0;

    inregs.h.bh = (BACK_COLOR << 4) | TEXT_COLOR;

    inregs.h.dh = 100;
    inregs.h.dl = 100;

    int86(0x10, &inregs, &outregs);

    gotoxy(0, 0);
}

//Escribe un caracter en pantalla con el color indicado actualmente
void cputchar(char caracter) {
    union REGS inregs, outregs;

    inregs.h.ah = 0x09;

    inregs.h.al = caracter;
    inregs.h.bl = (BACK_COLOR << 4) | TEXT_COLOR;
    inregs.h.bh = 0x00;
    inregs.x.cx = 1;

    int86(0x10, &inregs, &outregs);
}

// Obtiene un caracter de teclado y lo muestra en pantalla
char getche(void) {
    union REGS inregs, outregs;

    inregs.h.ah = 1;

    int86(0x21, &inregs, &outregs);
    return outregs.h.al;
}

// PUlsa para continuar
void pausa(void){
    union REGS inregs, outregs;

    printf("\n Pulsa cualquier tecla para continuar...");
    inregs.h.ah = 8;

    int86(0x21, &inregs, &outregs);
}

void rectangulo(int x1, int y1, int x2, int y2, int foreground, int background) {
    union REGS inregs, outregs;

    clrscr();

    inregs.h.ah = 0x06;
    inregs.h.al = 0;
    inregs.h.ch = x1;
    inregs.h.cl = y1;

    textcolor(foreground);
    textbackground(background);
    inregs.h.bh = (BACK_COLOR << 4) | TEXT_COLOR;

    inregs.h.dh = x2;
    inregs.h.dl = y2;

    int86(0x10, &inregs, &outregs);
}


int main() {

    int opcion = 0;
    int no_correcto = 1;

    do {

      clrscr();
      printf("\nOpciones: ");
      printf("\n\t 1 - gotoxy");
      printf("\n\t 2 - setcursortype");
      printf("\n\t 3 - setvideomode");
      printf("\n\t 4 - getvideomode");
      printf("\n\t 5 - textcolor");
      printf("\n\t 6 - textbackground");
      printf("\n\t 7 - clrscr");
      printf("\n\t 8 - cputchar");
      printf("\n\t 9 - getche");
      printf("\n\t 10 - rectangulo");
      printf("\n\t 11 - Salir");
      printf("\n\t Introduce la opcion deseada: ");
      scanf("%d", &opcion);

      if (opcion < 1 || opcion > 11) {
        printf("\n Introduce una opcion valida.");
      }else{
        no_correcto = 0;
      }

      // printf("\n Pulsa cualquier tecla para continuar...");
      pausa();

    } while(no_correcto != 0);

    switch (opcion) {
      case 1:
        clrscr();
        gotoxy(20, 1);
        printf("Cursor movido a la posicion (20,1)\n");
        pausa();
        break;

      case 2:
        clrscr();
        printf("\nCursor invisible: ");
        setcursortype(0);
        pausa();

        printf("\nCursor grueso: ");
        setcursortype(2);
        pausa();

        printf("\nCursor normal: ");
        setcursortype(1);
        pausa();
        break;

      case 3:
        clrscr();
        setvideomode(MODO_VIDEO);
        printf("Modo  <%u>, video\n", getvideomode());
        pausa();
        setvideomode(MODO_TEXTO);
        printf("Modo  <%u>, texto\n", getvideomode());
        pausa();
        break;

      case 4:
        clrscr();
        printf("Modo  <%u>, texto\n", getvideomode());
        pausa();
        break;

      case 5:
        clrscr();
        // char c;
        printf("Caracter color: ");
        textcolor(11);
        cputchar('X');
        pausa();
        break;

      case 6:
        clrscr();
        printf("Fondo caracter. ");
        textbackground(6);
        cputchar('X');
        pausa();
        break;

      case 7:
        clrscr();
        pausa();
        break;

      case 8:
        clrscr();
        printf("Caracter: ");
        textcolor(11);
        cputchar('X');
        printf("\nCambiamos color...");
        printf("\nCaracter:");
        textcolor(2);
        cputchar('X');
        pausa();
        break;

      case 9:
        clrscr();
        printf("Introduce un caracter: ");
        printf("\nEl caracter es: <%c>", getche());
        pausa();
        break;

      case 10:
        clrscr();
        gotoxy(0, 0);
        rectangulo(10, 5, 15, 75, 11, 2);
        pausa();
        clrscr();
        gotoxy(0, 0);
        rectangulo(5, 30, 15, 60, 7, 6);
        pausa();

        break;

      case 11:
        break;

    }

    textbackground(0);
    clrscr();
    return 0;
}
