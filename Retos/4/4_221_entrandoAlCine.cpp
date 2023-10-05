//4, 221, Entrando al cine, comprobamos que una fila esta bien formada, primero pares, luego impares
//Accepted
#include <iostream>
using namespace std;


void bienFormada(int v[], int n) { // return ret DE RUBEN
	int i = 0;
	int cambio = 0;
	while (i < n && ((i == 0) || ((v[i] % 2 == 1) || (v[i - 1] % 2 == 0)))) { //este bucle recorre todo el vector si esta bien formado i = n
		if (v[i] % 2 == 0)
			cambio++;
		++i;
	}
	if (i == n)
		cout << "SI " << cambio << "\n";
	else
		cout << "NO" << "\n";
}


int main() {
	int n_casos;
	cin >> n_casos;
	for (int i = 0; i < n_casos; i++) {
		int n;
		cin >> n;
		int v[10000];
		for (int j = 0; j < n; j++) {
			cin >> v[j];
		}
		bienFormada(v, n);
	}
	return 0;
}

