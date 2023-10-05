#include <iostream>
using namespace std;

int main() {
	return 0;
}

//420, el secreto de la bolsa
//dado un vector(sin 0), cuantas ventanas de tamaño hay que sumen exactamente x numero, 8, ventana
//
//{Pre: (0 <= n <= longitud(v)) ^ k > 0 ^ P.t. i: 0 <= i < n : v[i] > 0}
int cuantosIntervalosSumaK(int v[], int n, int k) { /*return ret*/
	int a = 0;
	int b = 0;
	int ret = 0;
	int suma = 0; 

	while ((b < n) || (suma > k)) {
		if (suma < k) {
			suma += v[b];
			++b;
		}
		else {
			suma -= v[a];
			++a;
		}

		if (suma == k)
			ret++;
	}
	return ret;
}
//{ ret = # i, j : (0 <= i <= j < n) : (Sum )}


//Los niños primero, todos los numeros del inicio del vector son mas pequeños que los de la segunda parte del vector
//ret da el punto entre ambos sectores

