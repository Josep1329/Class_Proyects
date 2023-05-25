#include<iostream>
#include<time.h>
#include<string.h>
#define max  100
using namespace std;
void juego(int n);
void juego1(int* p, int a);
void puntuacion(int* pj, int* po, int j, int o);

int main()
{
	int n;

	cout << "Introduce el numero de partidas que quieres jugar:";
	cin >> n;
	if (n > 0 && n <= max)
	{
		system("cls");
		juego(n);
	}
	return 0;
}

void juego(int n) {
	int* pj, * po;
	int puntj = 0, punto = 0;
	pj = &puntj;
	po = &punto;
	srand(time(NULL));
	int j = 0, o = 0, i = 1;
	int* cont;

	cout << "Pulsa 1 para sacar piedra, 2 para papel o 3 para tijeras." << endl;
	for (i = 1; i <= n; i++)
	{
		cont = &i;
		cout << "-Partida " << i << endl << endl;
		cout << "Numero: ";
		cin >> j;
		cout << "Jugador: ";
		juego1(cont, j);
		o = 1 + rand() % 3;
		cout << "Ordenador: ";
		juego1(cont, o);
		puntuacion(pj, po, j, o);
		cout << "Puntuacion: " << puntj << " - " << punto << endl << endl;
	}

	if (i == n + 1)
	{

		if (puntj > punto) cout << "GANASTE B)" << endl;
		else if (puntj == punto) cout << "HAN EMPATADO :0" << endl;
		else cout << "PERDISTE PINSHE MALO XD" << endl;
	}
}

void juego1(int* p, int a)
{
	string s;
	switch (a)
	{
	case 1:
		s = "Piedra";
		break;
	case 2:
		s = "Papel";
		break;
	case 3:
		s = "Tijera";
		break;
	default:
		s = "Error";
		*p = max + 2;
	}
	cout << s << endl;
}

void puntuacion(int* pj, int* po, int j, int o)
{
	if (j == o)
	{
		*pj += 1;
		*po += 1;
	}
	else
	{
		if ((j == 1 && o == 3) || (j > o && (j + o) % 2 == 1)) { *pj += 1; }

		else { *po += 1; }
	}
}