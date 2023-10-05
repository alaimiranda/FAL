#include <iostream>
using namespace std;

void resolver (){
    int numero;
    cin >> numero;

    if (numero < 0) cout << numero << "\n";
    else cout << numero - 1 << "\n";
}
int main (){
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
        resolver();
        
    return 0;
}