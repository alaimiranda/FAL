//Clase 5_10
#include <iostream>
using namespace std;


//Busqueda, me puedo salir antes de tiempo
//{Pre: 2 <= n <= longitud(v)
//		P.t. i : 0 <= i < n 
//}
bool quasiFib(int v[], int n, int k) /* return ret */ {
	int i = 2;
	int sumaAcu = v[0] + v[1];
	if ((v[0] != v[1]) || (sumaAcu > k))
		return false;
	while ((i < n) && (sumaAcu + v[i] <= k) && ((v[i] == v[i-1]) || (v[i] == v[i-1] + v[i-2]))) {
		sumaAcu += v[i];
		i++;
	}
	return (i == n);
}



//Vector creciente por los pelos, la diferencia entre dos elementos contiguos es como mucho 1
//{Pre: 1 <= n <= longitud(v)}
bool crecienteYDivertido(int v[], int n, int d) { /*return ret*/
	int i = 1;
	int k = 1;
	while ((i < n) && (v[i] >= v[i-1]) && (v[i] - v[i - 1] <= 1) && (k <= d)) {
		if (v[i] == v[i - 1])
			k++;
		else
			k = 1;
		++i;
	}

	return (i == n) && (k <= d);
}
