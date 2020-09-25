// VIDEOJUEGO.cpp : Defines the entry point for the console application.
//

#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <MMSystem.h>
#include <time.h>

using namespace std;

using namespace System;

int nivel = 1;
int score = 0;
int vidas = 4;

#define FILA_SUPERIOR 3
#define FILA_INFERIOR 30
#define COL_IZQUIERDA 2
#define COL_DERECHA 77
#define CANT_NAVES 4
#define CANT_MARIPOSAS 8
#define CANT_AVISPAS 6
#define CANT_COMANDANTES 4

int banderaoleada1 = false;
bool banderaoleada2 = false;
bool verdad = false;


void gotoxy(double x, double y) {
	Console::SetCursorPosition(double(x), double(y));
}
void Presentacion() {
	int i;
	char figura = 207;
	for (i = 3; i <= 79; i++) {
		gotoxy(i, 12);
		Sleep(15);
		cout << figura;
	}
	for (i = 3; i <= 79; i++) {
		gotoxy(i, 13);
		Sleep(15);
		cout << figura;
	}
	for (i = 3; i <= 79; i++) {
		gotoxy(i, 14);
		Sleep(15);
		cout << figura;
	}
	for (i = 3; i <= 79; i++) {
		gotoxy(i, 15);
		Sleep(15);
		cout << figura;
	}


	for (i = 3; i <= 5; i++) {
		gotoxy(i, 12);
		Sleep(15);
		cout << " ";
	}
	for (i = 10; i <= 12; i++) {
		gotoxy(i, 12);
		Sleep(15);
		cout << " ";
	}
	for (i = 14; i <= 16; i++) {
		gotoxy(i, 12);
		Sleep(15);
		cout << " ";
	}
	for (i = 18; i <= 23; i++) {
		gotoxy(i, 12);
		Sleep(15);
		cout << " ";
	}
	for (i = 25; i <= 28; i++) {
		gotoxy(i, 12);
		Sleep(15);
		cout << " ";
	}
	for (i = 33; i <= 35; i++) {
		gotoxy(i, 12);
		Sleep(15);
		cout << " ";
	}
	for (i = 37; i <= 79; i++) {
		gotoxy(i, 12);
		Sleep(15);
		cout << " ";
	}


	for (i = 3; i <= 4; i++) {
		gotoxy(i, 13);
		Sleep(15);
		cout << " ";
	}
	for (i = 6; i <= 11; i++) {
		gotoxy(i, 13);
		Sleep(15);
		cout << " ";
	}
	for (i = 13; i <= 13; i++) {
		gotoxy(i, 13);
		Sleep(15);
		cout << " ";
	}
	for (i = 15; i <= 16; i++) {
		gotoxy(i, 13);
		Sleep(15);
		cout << " ";
	}
	for (i = 18; i <= 22; i++) {
		gotoxy(i, 13);
		Sleep(15);
		cout << " ";
	}
	for (i = 24; i <= 24; i++) {
		gotoxy(i, 13);
		Sleep(15);
		cout << " ";
	}
	for (i = 26; i <= 27; i++) {
		gotoxy(i, 13);
		Sleep(15);
		cout << " ";
	}
	for (i = 29; i <= 34; i++) {
		gotoxy(i, 13);
		Sleep(15);
		cout << " ";
	}
	for (i = 36; i <= 36; i++) {
		gotoxy(i, 13);
		Sleep(15);
		cout << " ";
	}
	for (i = 38; i <= 79; i++) {
		gotoxy(i, 13);
		Sleep(15);
		cout << " ";
	}

	for (i = 3; i <= 4; i++) {
		gotoxy(i, 14);
		Sleep(15);
		cout << " ";
	}
	for (i = 6; i <= 6; i++) {
		gotoxy(i, 14);
		Sleep(15);
		cout << " ";
	}
	for (i = 10; i <= 10; i++) {
		gotoxy(i, 14);
		Sleep(15);
		cout << " ";
	}
	for (i = 16; i <= 16; i++) {
		gotoxy(i, 14);
		Sleep(15);
		cout << " ";
	}
	for (i = 18; i <= 21; i++) {
		gotoxy(i, 14);
		Sleep(15);
		cout << " ";
	}
	for (i = 27; i <= 27; i++) {
		gotoxy(i, 14);
		Sleep(15);
		cout << " ";
	}
	for (i = 29; i <= 29; i++) {
		gotoxy(i, 14);
		Sleep(15);
		cout << " ";
	}
	for (i = 33; i <= 33; i++) {
		gotoxy(i, 14);
		Sleep(15);
		cout << " ";
	}
	for (i = 39; i <= 79; i++) {
		gotoxy(i, 14);
		Sleep(15);
		cout << " ";
	}

	for (i = 3; i <= 5; i++) {
		gotoxy(i, 15);
		Sleep(15);
		cout << " ";
	}
	for (i = 9; i <= 9; i++) {
		gotoxy(i, 15);
		Sleep(15);
		cout << " ";
	}
	for (i = 11; i <= 15; i++) {
		gotoxy(i, 15);
		Sleep(15);
		cout << " ";
	}
	for (i = 22; i <= 26; i++) {
		gotoxy(i, 15);
		Sleep(15);
		cout << " ";
	}
	for (i = 28; i <= 28; i++) {
		gotoxy(i, 15);
		Sleep(15);
		cout << " ";
	}
	for (i = 32; i <= 32; i++) {
		gotoxy(i, 15);
		Sleep(15);
		cout << " ";
	}
	for (i = 34; i <= 38; i++) {
		gotoxy(i, 15);
		Sleep(15);
		cout << " ";
	}
	for (i = 40; i <= 79; i++) {
		gotoxy(i, 15);
		Sleep(15);
		cout << " ";
	}


	gotoxy(15, 20);
	Sleep(10);
	cout << "A"; Sleep(10);
	cout << "N"; Sleep(10);
	cout << "T"; Sleep(10);
	cout << "O"; Sleep(10);
	cout << "N"; Sleep(10);
	cout << "I"; Sleep(10);
	cout << "O"; Sleep(10);
	cout << " "; Sleep(10);
	cout << "S"; Sleep(10);
	cout << "A"; Sleep(10);
	cout << "L"; Sleep(10);
	cout << "I"; Sleep(10);
	cout << "N"; Sleep(10);
	cout << "A"; Sleep(10);
	cout << "S"; Sleep(10);
	cout << endl; Sleep(10);
	gotoxy(13, 21);
	Sleep(10);

	cout << "J"; Sleep(10);
	cout << "O"; Sleep(10);
	cout << "R"; Sleep(10);
	cout << "G"; Sleep(10);
	cout << "E"; Sleep(10);
	cout << " "; Sleep(10);
	cout << "A"; Sleep(10);
	cout << "N"; Sleep(10);
	cout << "C"; Sleep(10);
	cout << "O"; Sleep(10);



	gotoxy(20, 25);
	cout << "       Instrucciones                 " << endl << endl;
	cout << "       Moverse a la derecha                ->" << endl;
	cout << "       Moverse a la izquierda              <-" << endl;
	cout << "       Disparar                     Barra espaciadora" << endl << endl;

	Sleep(5000);

}

void cambionivel(int nivel) {
	gotoxy(20, 17);
	Sleep(10);
	cout << "N"; Sleep(10);
	cout << "I"; Sleep(10);
	cout << "V"; Sleep(10);
	cout << "E"; Sleep(10);
	cout << "L"; Sleep(10);
	cout << endl; Sleep(10);
	gotoxy(25, 18);
	Sleep(10);
	cout << nivel;
	Sleep(2000);
}

void Ganaste() {
	gotoxy(20, 17);
	Sleep(10);
	cout << "G"; Sleep(10);
	cout << "A"; Sleep(10);
	cout << "N"; Sleep(10);
	cout << "A"; Sleep(10);
	cout << "S"; Sleep(10);
	cout << "T"; Sleep(10);
	cout << "E"; Sleep(10);
	cout << endl; Sleep(10);
	Sleep(20000);
}

void pintar() {
	//lineas horizontales
	for (int i = 3; i < 77; i++) {
		gotoxy(i, 3);
		printf("%c", 205);
		Console::ForegroundColor = ConsoleColor::Cyan;
		gotoxy(i, 30);
		printf("%c", 205);
		Console::ForegroundColor = ConsoleColor::Cyan;
	}

	//lineas verticales
	for (int i = 4; i < 30; i++) {
		gotoxy(2, i);
		printf("%c", 186);
		Console::ForegroundColor = ConsoleColor::Cyan;
		gotoxy(77, i);
		printf("%c", 186);
		Console::ForegroundColor = ConsoleColor::Cyan;
	}

	//esquinas
	gotoxy(2, 3); printf("%c", 201);
	gotoxy(2, 30); printf("%c", 200);
	gotoxy(77, 3); printf("%c", 187);
	gotoxy(77, 30); printf("%c", 188);
}

void ShowHideCursor(bool visualizar) {
	if (visualizar)
		Console::CursorVisible = true;
	else
		Console::CursorVisible = false;
}

enum eMovimiento {
	IZQUIERDA,
	DERECHA,
	ARRIBA,
	ABAJO,
	ESPACIO,
	DIAGONAL,
	DIAGONALINVERTIDA,
	CIRCULO,
	CIRCULOINVERTIDO,
	SUBIRMARIPOSA,
	SUBIRMARIPOSAINVERTIDA,
	SUBIRAVISPA,
	SUBIRAVISPAINVERTIDA,
	SUBIRCOMANDANTE,
	HORIZONTAL,
	ELIMINADO
};

struct s_Disparo {
	int x;
	int y;
	bool puedoDisparar = false;
	eMovimiento movimiento;
	int figura;

	void ubicarDisparo() {
		gotoxy(x, y);
		Console::ForegroundColor = ConsoleColor::White;
		cout << char(figura);
		Console::ForegroundColor = ConsoleColor::White;
	}

	void borrarDisparo() {
		gotoxy(x, y);
		cout << " ";
	}

	void moverDisparo() {
		borrarDisparo();
		switch (movimiento) {
		case ABAJO: {
			y += 2;
			ubicarDisparo();
			if (y >= FILA_INFERIOR - 1) {
				borrarDisparo();
				movimiento = DIAGONAL;
			}
			break;
		}
		case ARRIBA: {
			y--;
			ubicarDisparo();
			if (y == FILA_SUPERIOR + 1) {
				borrarDisparo();
				movimiento = DIAGONAL;
			}
			break;
		}
		case DIAGONAL: {
			break;
		}
		}
	}
};

struct s_Nave {
	double x;
	double y;
	double b;
	bool movimientoHorizontal;
	eMovimiento movimiento;
	int figura;

	void ubicarNave() {
		gotoxy(x, y - 1);
		Console::ForegroundColor = ConsoleColor::Blue;
		cout << char(figura);
		Console::ForegroundColor = ConsoleColor::White;
		gotoxy(x, y);
		Console::ForegroundColor = ConsoleColor::Blue;
		cout << char(figura);
		Console::ForegroundColor = ConsoleColor::White;
		gotoxy(x + 2, y);
		Console::ForegroundColor = ConsoleColor::Red;
		cout << char(figura);
		Console::ForegroundColor = ConsoleColor::White;
		gotoxy(x - 2, y);
		Console::ForegroundColor = ConsoleColor::Red;
		cout << char(figura);
		Console::ForegroundColor = ConsoleColor::White;
	}

	void borrarNave() {
		gotoxy(x, y - 1);
		cout << " ";
		gotoxy(x, y);
		cout << " ";
		gotoxy(x + 2, y);
		cout << " ";
		gotoxy(x - 2, y);
		cout << " ";
	}

	void moverNave() {
		borrarNave();
		switch (movimiento)
		{
		case IZQUIERDA:
			if (x != COL_IZQUIERDA + 4)
				x--;
			ubicarNave();
			break;
		case DERECHA:
			if (x != COL_DERECHA - 4)
				x++;
			ubicarNave();
			break;
		case ELIMINADO:
			break;
		}
	}
};

struct mariposa {
	double x;
	double y;
	double b = 0;
	double c = 0;
	double d = 0;
	int pasohorizontal = 0;
	double score;
	bool movimientoHorizontal;
	int desvio;
	eMovimiento movimiento;
	int figura;
	long cont = 0;  //lo usamos para que se demoren al momento de salir las naves y no se sobreposicionen
	bool banderapasos;
	int contador1 = 0;

	void ubicarNave() {
		gotoxy(x, y);
		Console::ForegroundColor = ConsoleColor::Red;
		cout << char(figura);
		Console::ForegroundColor = ConsoleColor::White;
		gotoxy(x - 1, y);
		Console::ForegroundColor = ConsoleColor::Red;
		cout << char(figura);
		Console::ForegroundColor = ConsoleColor::White;
	}

	void borrarNave() {
		gotoxy(x, y);
		cout << " ";
		gotoxy(x - 1, y);
		cout << " ";
	}

	void moverNave() {
		cont++;
		borrarNave();
		switch (movimiento)
		{
		case ABAJO:
			if (movimientoHorizontal) {
				y++;
				if (y == FILA_INFERIOR) y = FILA_SUPERIOR - 1;
			}
			ubicarNave();
			break;
		case IZQUIERDA:
			x--;
			if (x == COL_IZQUIERDA) x = COL_DERECHA - 1;
			ubicarNave();
			break;
		case DERECHA:
			x++;
			if (x == COL_DERECHA) x = COL_IZQUIERDA + 1;
			ubicarNave();
			break;
		case DIAGONAL:
			x += 1;
			y++;
			b = y;
			if (x == 54) {
				movimiento = CIRCULO;
			}
			ubicarNave();
			break;
		case DIAGONALINVERTIDA:
			x -= 1;
			y++;
			b = y;
			if (x == 26) {
				movimiento = CIRCULOINVERTIDO;
			}
			ubicarNave();
			break;
		case CIRCULO:
			if (x >= 54 && x < 58) {
				x++;
				c = y;
			}
			if (x >= 58) {
				y += 0.3;
			}
			if (y >= c + 3.6) {
				x--;
				y++;
				movimiento = SUBIRMARIPOSA;
			}
			ubicarNave();
			break;

		case CIRCULOINVERTIDO:
			if (x > 23) {
				x--;
				d = y;
			}
			if (x <= 28) {
				y += 0.3;
			}
			if (y >= d + 3.6) {
				x++;
				y++;
				movimiento = SUBIRMARIPOSAINVERTIDA;
			}
			ubicarNave();
			break;

		case SUBIRMARIPOSA:
			if (contador1 <= 1) {
				x -= 2 * desvio;
				contador1++;
			}
			if (y > 10) {
				y--;
				x -= 0.5;
			}
			if (y <= 10) {
				if (verdad)
					movimiento = HORIZONTAL;
			}
			ubicarNave();
			break;
		case SUBIRMARIPOSAINVERTIDA:
			if (contador1 <= 3) {
				x += desvio - .35;
				contador1++;
			}
			if (y > 9) {
				y--;
				x += 0.9;
			}
			if (y <= 10) {
				banderaoleada1 = true;
				if (verdad)
					movimiento = HORIZONTAL;
			}
			ubicarNave();
			break;
		case HORIZONTAL:
			pasohorizontal++;
			if (pasohorizontal == 4) {
				banderapasos = (!banderapasos);
				pasohorizontal = 0;
			}
			if (banderapasos) x++;
			else x--;
			ubicarNave();
			break;
		case ELIMINADO:

			break;
		}
	}
};

struct avispa {
	double x;
	double y;
	int a = 0;
	double b;
	double c;
	double d = 0;
	double score = 100;
	bool movimientoHorizontal;
	int pasohorizontal1 = 0;
	int desviox;
	eMovimiento movimiento;
	int figura;
	unsigned long long cont = 0;
	bool bandera = false;
	int contador = 0;

	void ubicarNave() {
		gotoxy(x, y);
		Console::ForegroundColor = ConsoleColor::Blue;
		cout << char(figura);
		Console::ForegroundColor = ConsoleColor::White;
		gotoxy(x - 1, y);
		Console::ForegroundColor = ConsoleColor::Yellow;
		cout << char(figura);
		Console::ForegroundColor = ConsoleColor::White;
	}

	void borrarNave() {
		gotoxy(x, y);
		cout << " ";
		gotoxy(x - 1, y);
		cout << " ";
	}

	void moverNave() {

		cont++;
		borrarNave();
		switch (movimiento)
		{
		case ABAJO:
			if (movimientoHorizontal) {
				y++;
				if (y == FILA_INFERIOR) y = FILA_SUPERIOR - 1;
			}
			ubicarNave();
			break;

		case IZQUIERDA:
			x--;
			if (x == COL_IZQUIERDA) x = COL_DERECHA - 1;
			ubicarNave();
			break;
		case DERECHA:
			x++;
			if (x == COL_DERECHA) x = COL_IZQUIERDA + 1;
			ubicarNave();
			break;
		case DIAGONAL:
			x += 2.2;
			y--;
			if (y == 16) {
				movimiento = CIRCULO;
			}
			ubicarNave();

			break;
		case DIAGONALINVERTIDA:
			x -= 2.2;
			y--;
			if (y == 16) {
				movimiento = CIRCULOINVERTIDO;

			}
			ubicarNave();

			break;
		case CIRCULO:
			if (y > 15 && y < 18) {
				x++;
				y++;

			}
			if (y >= 18 && y <= 20) {
				x--;
				y++;
				if (y == 21) movimiento = SUBIRAVISPA;
			}
			ubicarNave();
			break;
		case CIRCULOINVERTIDO:
			if (y > 15 && y < 18) {
				x--;
				y++;
			}
			if (y >= 18 && y <= 20) {
				y++;
				x++;
				if (y == 21) movimiento = SUBIRAVISPAINVERTIDA;
			}
			ubicarNave();
			break;

		case SUBIRAVISPA:
			if (a <= 2) {
				x--;
				y--;
				a++;;
			}
			if (a == 3 && y >= 10) {
				y--;
				x += desviox - 0.49;
			}
			if (y <= 10 && verdad) {
				movimiento = HORIZONTAL;
			}
			ubicarNave();
			break;

		case SUBIRAVISPAINVERTIDA:
			if (a < 4) {
				x++;
				y--;
				a++;
			}
			if (a == 4 && y >= 10) {
				y--;
				x -= desviox;
			}
			if (y <= 10 && verdad) {
				bandera = !bandera;
				banderaoleada2 = true;
				movimiento = HORIZONTAL;
			}

			ubicarNave();
			break;

		case HORIZONTAL:

			pasohorizontal1++;

			if (pasohorizontal1 == 4) {
				bandera = (!bandera);
				pasohorizontal1 = 0;
			}
			if (bandera) x++;
			else x--;
			ubicarNave();

		case ELIMINADO:
			break;

		}
	}
};

struct comandante {
	double x, y, score = 400;
	eMovimiento movimiento;
	int figura, cont = 0, pasohorizontal = 0, desvio = 0, vidas = 2;  //desvio lo usamos al momento de subir
	bool banderapasos;
	int a = 0;


	void ubicarNave() {
		if (vidas == 1) {
			gotoxy(x, y);
			Console::ForegroundColor = ConsoleColor::Blue;
			cout << char(figura);
			Console::ForegroundColor = ConsoleColor::White;
			gotoxy(x - 1, y);
			Console::ForegroundColor = ConsoleColor::Blue;
			cout << char(figura);
			Console::ForegroundColor = ConsoleColor::White;
		}
		else {
			gotoxy(x, y);
			Console::ForegroundColor = ConsoleColor::Green;
			cout << char(figura);
			Console::ForegroundColor = ConsoleColor::White;
			gotoxy(x - 1, y);
			Console::ForegroundColor = ConsoleColor::Green;
			cout << char(figura);
			Console::ForegroundColor = ConsoleColor::White;
		}
	}

	void borrarNave() {
		gotoxy(x, y);
		cout << " ";
		gotoxy(x - 1, y);
		cout << " ";
	}

	void moverNave() {
		cont++;
		borrarNave();
		switch (movimiento) {
		case DIAGONAL:
			x -= 1.5; y++;
			if (x <= 31) {
				movimiento = CIRCULO; //se debe implementar circulo en vez de subir
			}
			ubicarNave();
			break;
		case CIRCULO:
			if (a <= 3) {
				x++;
				y++;  //3 diagonal a la derecha
				a++;
			}
			if (a > 3 && a <= 6) {
				x++;
				y--;  //3 diagonal arriba  
				a++;
			}
			if (a == 7) {
				movimiento = SUBIRCOMANDANTE;
			}

			ubicarNave();
			break;
		case SUBIRCOMANDANTE:
			if (y >= 8)y--;
			x += desvio - desvio * .5;
			if (y <= 8 && verdad) {
				movimiento = HORIZONTAL;
			}
			ubicarNave();
			break;
		case HORIZONTAL:
			pasohorizontal++;

			if (pasohorizontal == 4) {
				banderapasos = (!banderapasos);
				pasohorizontal = 0;
			}
			if (banderapasos) x++;
			else x--;
			ubicarNave();
			break;
		case ELIMINADO:
			break;

		}

	}
};

void moverDisparos(s_Disparo aDisparos[], bool enemigo) {
	int contador;
	if (enemigo) {
		contador = 4;
	}
	else {
		contador = 10;
	}
	for (int i = 0; i < contador; i++) {
		if (aDisparos[i].puedoDisparar)
			aDisparos[i].moverDisparo();
	}
}

void configurarDisparos(s_Disparo* aDisparos, int pos, int x, int y, bool enemigo) {
	aDisparos[pos].x = x;
	aDisparos[pos].y = y - 2;
	aDisparos[pos].figura = 158;
	if (enemigo)
		aDisparos[pos].movimiento = ABAJO;
	else
		aDisparos[pos].movimiento = ARRIBA;
	aDisparos[pos].puedoDisparar = true;
}

void ubicarNaves(s_Nave aNaves[], mariposa* mariposas, avispa* avispas, comandante* comandantes) {
	for (int i = 0; i < CANT_NAVES; i++)
		aNaves[i].ubicarNave();

	for (int i = 0; i < CANT_MARIPOSAS; i++)
		mariposas[i].ubicarNave();

	for (int i = 0; i < CANT_AVISPAS; i++)
		avispas[i].ubicarNave();

	for (int i = 0; i < CANT_COMANDANTES; i++)
		comandantes[i].ubicarNave();
}

void configurarNaves(s_Nave aNaves[]) {
	aNaves[0].x = 36;
	aNaves[0].y = FILA_INFERIOR - 2;
	aNaves[0].figura = 143;
	aNaves[0].movimiento = DIAGONAL;
	aNaves[0].movimientoHorizontal = true;

	for (int i = 1; i < CANT_NAVES; i++) {
		if (i < 4)
			aNaves[i].x = 78 + 7 * i;
		aNaves[i].y = FILA_INFERIOR - 1;
		aNaves[i].figura = 143;
		aNaves[i].movimiento = ABAJO;
		aNaves[i].movimientoHorizontal = false;
	}
}

void configurarMariposas(mariposa* mariposas) {
	for (int i = 4; i < 8; i++) {
		mariposas[i].x = 44;
		mariposas[i].y = FILA_SUPERIOR + 1;
		mariposas[i].figura = 21;
		mariposas[i].movimiento = DIAGONALINVERTIDA;
		mariposas[i].movimientoHorizontal = true;
		mariposas[i].desvio = i - 4;
		mariposas[i].score = 160;
	}

	for (int i = 0; i < 4; i++) {
		mariposas[i].x = 36;
		mariposas[i].y = FILA_SUPERIOR + 1;
		mariposas[i].figura = 21;
		mariposas[i].movimiento = DIAGONAL;
		mariposas[i].movimientoHorizontal = true;
		mariposas[i].desvio = i;
		mariposas[i].banderapasos = true;
		mariposas[i].score = 160;
	}
}

void configurarAvispas(avispa* avispas) {

	for (int i = 3; i < 6; i++) {
		avispas[i].x = COL_DERECHA;
		avispas[i].y = FILA_INFERIOR - 4;
		avispas[i].figura = 21;
		avispas[i].movimiento = DIAGONALINVERTIDA;
		avispas[i].movimientoHorizontal = true;
		if (i == 3) {
			avispas[i].desviox = i / 1.25 - 3;
		}
		if (i >= 4 && i < 5) {
			avispas[i].desviox = i - 5;
		}

		if (i >= 5) {
			avispas[i].desviox = i / 3;
		}
		avispas[i].score = 160;
	}
	for (int i = 0; i < 3; i++) {
		avispas[i].x = COL_IZQUIERDA;
		avispas[i].y = FILA_INFERIOR - 4;
		avispas[i].figura = 21;
		avispas[i].movimiento = DIAGONAL;
		avispas[i].movimientoHorizontal = true;
		avispas[i].desviox = i;
		avispas[i].bandera = true;
		avispas[i].score = 160;
	}

}

void configurarComandantes(comandante* comandantes) {
	for (int i = 0; i < 4; i++) {
		comandantes[i].x = 55;
		comandantes[i].y = FILA_SUPERIOR;
		comandantes[i].figura = 23;
		comandantes[i].movimiento = DIAGONAL;
		comandantes[i].banderapasos = true;
		comandantes[i].vidas = 2;
		if (i == 0)
			comandantes[i].desvio = i / 2;
		if (i >= 1 && i <= 3)
			comandantes[i].desvio = i;
	}
}

// bug detectar colision....
void detectar_colision(s_Nave aNaves[], s_Disparo* aDisparos, s_Disparo* eDisparos, mariposa* mariposas, avispa avispas[], comandante* comandantes, int& score, int& vidas) {

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 2; j++) {
			if ((((int)eDisparos[i].x == (int)aNaves[j].x - 2) &&
				((int)eDisparos[i].y == (int)aNaves[j].y)) && aNaves[j].movimiento != ELIMINADO) {
				aNaves[j].borrarNave();
				vidas--;
				aNaves[j].movimiento = ELIMINADO;
			}
			//PlaySound(L"3538.wav", NULL, SND_ASYNC | SND_FILENAME);
		}

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 8; j++) {
			if (((int)aDisparos[i].x >= (int)mariposas[j].x && (int)aDisparos[i].x <= (int)mariposas[j].x + 1.1 &&
				(int)aDisparos[i].y == (int)mariposas[j].y) && mariposas[j].movimiento != ELIMINADO) {
				mariposas[j].borrarNave();
				mariposas[j].movimiento = ELIMINADO;
				score += mariposas[j].score;
			}
			//PlaySound(L"3538.wav", NULL, SND_ASYNC | SND_FILENAME);
		}

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 8; j++) {
			if (((int)aDisparos[i].x >= (int)mariposas[j].x - 1 &&
				(int)aDisparos[i].y >= (int)mariposas[j].y && (int)aDisparos[i].x <= (int)mariposas[j].x &&
				(int)aDisparos[i].y == (int)mariposas[j].y) && mariposas[j].movimiento != ELIMINADO) {
				mariposas[j].borrarNave();
				mariposas[j].movimiento = ELIMINADO;
				score += mariposas[j].score;
			}
			//PlaySound(L"3538.wav", NULL, SND_ASYNC | SND_FILENAME);
		}

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 6; j++) {
			if (((int)aDisparos[i].x >= (int)avispas[j].x && (int)aDisparos[i].x <= (int)avispas[j].x + 1.1 &&
				(int)aDisparos[i].y == (int)avispas[j].y) && avispas[j].movimiento != ELIMINADO) {
				avispas[j].borrarNave();
				avispas[j].movimiento = ELIMINADO;
				score += avispas[j].score;
			}
			//PlaySound(L"3538.wav", NULL, SND_ASYNC | SND_FILENAME);
		}
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 6; j++) {
			if (((int)aDisparos[i].x >= (int)avispas[j].x - 1) && (int)aDisparos[i].x <= (int)avispas[j].x && (int)aDisparos[i].y == (int)avispas[j].y && avispas[j].movimiento != ELIMINADO) {
				avispas[j].borrarNave();
				avispas[j].movimiento = ELIMINADO;
				score += avispas[j].score;
			}
			//PlaySound(L"3538.wav", NULL, SND_ASYNC | SND_FILENAME);
		}
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 6; j++) {
			if (((int)aDisparos[i].x >= (int)comandantes[j].x && (int)aDisparos[i].x <= (int)comandantes[j].x + 1.2 &&
				(int)aDisparos[i].y == (int)comandantes[j].y) && comandantes[j].movimiento != ELIMINADO) {
				comandantes[j].vidas--;
				if (comandantes[j].vidas == 0) {
					score += comandantes[j].score;
				}
				if (comandantes[j].vidas == 0) {
					score += comandantes[j].score;
					comandantes[j].movimiento = ELIMINADO;
					comandantes[j].borrarNave();
				}

			}
			//PlaySound(L"3538.wav", NULL, SND_ASYNC | SND_FILENAME);
		}
}

void vida(int vi) {
	gotoxy(2, 1);
	printf("VIDAS: %d", vi);
}


void iniciarJuego(s_Nave aNaves[], mariposa mariposas[], avispa avispas[], comandante* comandantes) {
	bool disparo = true, flag = false;
	int cont_espera = 0;
	int enemigo_disparo;
	char tecla;
	bool fin_juego = false;
	int cant_disparos = 0, cant_DE = 0;
	s_Disparo* aDisparos = new s_Disparo[10];
	s_Disparo* eDisparos = new s_Disparo[4];
	srand(time(NULL));
	while (!fin_juego) {
		while (!_kbhit()) {
			if (score >= 2500) {
				Console::Clear;
				nivel++;
				score = 0;
				fin_juego = true;
				break;
			}
			pintar();
			vida(vidas);
			gotoxy(80, 10);
			cout << "SCORE : " << score;
			gotoxy(80, 12);
			cout << "LEVEL : " << nivel;
			aNaves[0].moverNave();
			mariposas[0].moverNave();
			mariposas[4].moverNave();
			if (banderaoleada1) {
				avispas[0].moverNave();
			}
			if (avispas[5].y == 9 && avispas[5].movimiento == SUBIRAVISPAINVERTIDA) {
				banderaoleada2 = !banderaoleada2;
			}
			if (mariposas[0].cont >= 70)
				comandantes[0].moverNave();

			for (int i = 1; i < 4; i++) {
				if (comandantes[i - 1].cont > 2) {
					comandantes[i].moverNave();
				}
			}
			if (comandantes[3].y <= 7 && comandantes[3].movimiento == SUBIRCOMANDANTE) verdad = true;

			for (int i = 1; i < 4; i++) {
				if (mariposas[i - 1].cont > 2) {
					mariposas[i].moverNave();
				}
			}

			for (int i = 5; i < 8; i++) {
				if (mariposas[i - 1].cont > 2) {
					mariposas[i].moverNave();
				}
			}
			if (mariposas[3].x == 51.3) {
				for (int i = 4; i <= 7; i++) {
					mariposas[i].x -= 1.8;
				}
			}

			for (int i = 3; i < 6; i++) {
				if (avispas[i - 1].cont > 3) {
					avispas[i].moverNave();
				}

			}
			for (int i = 1; i < 3; i++) {
				if (avispas[i - 1].cont > 3) {
					avispas[i].moverNave();
				}
			}

			int toca_disparar = rand() % 9;
			if (toca_disparar >= 1 && toca_disparar <= 1.1) {
				enemigo_disparo = rand() % 3;
				//elegir enemigo que va a disparar
				int enemigo;
				switch (enemigo_disparo) {
				case 0:
					enemigo = rand() % CANT_MARIPOSAS;
					if ((mariposas[enemigo].movimiento == HORIZONTAL) || (mariposas[enemigo].movimiento == DIAGONAL) || (mariposas[enemigo].movimiento == DIAGONALINVERTIDA)) {
						configurarDisparos(eDisparos, cant_DE, mariposas[enemigo].x, mariposas[enemigo].y, true);
						cant_DE++;
					}
					break;
				case 1:
					enemigo = rand() % CANT_AVISPAS;
					if ((avispas[enemigo].movimiento == HORIZONTAL) || (avispas[enemigo].movimiento == DIAGONAL) || (avispas[enemigo].movimiento == DIAGONALINVERTIDA)) {
						configurarDisparos(eDisparos, cant_DE, avispas[enemigo].x, avispas[enemigo].y, true);
						cant_DE++;
					}
					break;
				case 2:
					enemigo = rand() % CANT_COMANDANTES;
					if ((comandantes[enemigo].movimiento == HORIZONTAL) || (comandantes[enemigo].movimiento == SUBIRCOMANDANTE)) {
						configurarDisparos(eDisparos, cant_DE, comandantes[enemigo].x, comandantes[enemigo].y, true);
						cant_DE++;

					}
					break;
				}
			}
			if (cant_DE > 3) {
				cant_DE = 0;
			}


			moverDisparos(aDisparos, false);
			moverDisparos(eDisparos, true);
			detectar_colision(aNaves, aDisparos, eDisparos, mariposas, avispas, comandantes, score, vidas);
			Sleep(80 / nivel);


		}

		tecla = _getch();

		if (tecla == 75) {
			aNaves[0].movimiento = IZQUIERDA;
			aNaves[0].moverNave();
		}

		if (tecla == 77) {
			aNaves[0].movimiento = DERECHA;
			aNaves[0].moverNave();
		}

		if (disparo == false) {
			cont_espera++;
			if (cont_espera > 5) {
				disparo = true;
				cont_espera = 0;
			}
		}

		if (tecla == 32 && disparo == true) {
			//PlaySound(L"3538.wav", NULL, SND_ASYNC | SND_FILENAME);
			if (flag)
				aDisparos[cant_disparos].borrarDisparo();
			configurarDisparos(aDisparos, cant_disparos, aNaves[0].x, aNaves[0].y, false);
			cant_disparos++;
			if (cant_disparos > 4) {
				flag = true;
				disparo = false;
				cant_disparos = 0;
			}

		}

		if (tecla == 27 || nivel == 6)
			fin_juego = true;


	}
	delete[] aNaves;
	delete[] mariposas;
	delete[] avispas;
	delete[] aDisparos;
}

int main()
{
	s_Nave* naves = nullptr;
	mariposa* mariposas = nullptr;
	avispa* avispas = nullptr;
	comandante* comandantes = nullptr;

	Console::WindowWidth = 120;
	Console::WindowHeight = 40;

	ShowHideCursor(false);

	Presentacion();
	for (int i = 0; i < 110; i++) {
		for (int j = 0; j < 50; j++) {
			gotoxy(i, j);
			cout << " ";
		}
	}

	if (nivel == 1) {

		naves = new s_Nave[CANT_NAVES];
		mariposas = new mariposa[CANT_MARIPOSAS];
		avispas = new avispa[CANT_AVISPAS];
		comandantes = new comandante[CANT_COMANDANTES];

		configurarNaves(naves);
		configurarMariposas(mariposas);
		configurarAvispas(avispas);
		configurarComandantes(comandantes);
		ubicarNaves(naves, mariposas, avispas, comandantes);
		iniciarJuego(naves, mariposas, avispas, comandantes);

	}
	cambionivel(nivel);
	for (int i = 0; i < 110; i++) {
		for (int j = 0; j < 50; j++) {
			gotoxy(i, j);
			cout << " ";
		}
	}

	if (nivel == 2) {
		naves = new s_Nave[CANT_NAVES];
		mariposas = new mariposa[CANT_MARIPOSAS];
		avispas = new avispa[CANT_AVISPAS];
		comandantes = new comandante[CANT_COMANDANTES];

		configurarNaves(naves);
		configurarMariposas(mariposas);
		configurarAvispas(avispas);
		configurarComandantes(comandantes);
		ubicarNaves(naves, mariposas, avispas, comandantes);
		iniciarJuego(naves, mariposas, avispas, comandantes);

	}
	cambionivel(nivel);
	for (int i = 0; i < 110; i++) {
		for (int j = 0; j < 50; j++) {
			gotoxy(i, j);
			cout << " ";
		}
	}

	Console::Clear;

	if (nivel == 3) {
		naves = new s_Nave[CANT_NAVES];
		mariposas = new mariposa[CANT_MARIPOSAS];
		avispas = new avispa[CANT_AVISPAS];
		comandantes = new comandante[CANT_COMANDANTES];

		configurarNaves(naves);
		configurarMariposas(mariposas);
		configurarAvispas(avispas);
		configurarComandantes(comandantes);
		ubicarNaves(naves, mariposas, avispas, comandantes);
		iniciarJuego(naves, mariposas, avispas, comandantes);
	}
	Console::Clear;
	cambionivel(nivel);
	for (int i = 0; i < 110; i++) {
		for (int j = 0; j < 50; j++) {
			gotoxy(i, j);
			cout << " ";
		}
	}

	if (nivel == 4) {
		naves = new s_Nave[CANT_NAVES];
		mariposas = new mariposa[CANT_MARIPOSAS];
		avispas = new avispa[CANT_AVISPAS];
		comandantes = new comandante[CANT_COMANDANTES];

		configurarNaves(naves);
		configurarMariposas(mariposas);
		configurarAvispas(avispas);
		configurarComandantes(comandantes);
		ubicarNaves(naves, mariposas, avispas, comandantes);
		iniciarJuego(naves, mariposas, avispas, comandantes);
	}
	if (nivel == 5) {
		Ganaste();
	}
	for (int i = 0; i < 110; i++) {
		for (int j = 0; j < 50; j++) {
			gotoxy(i, j);
			cout << " ";
		}
	}

	delete[] naves;
	delete[] mariposas;
	delete[] avispas;


	ShowHideCursor(true);



	return 0;
}