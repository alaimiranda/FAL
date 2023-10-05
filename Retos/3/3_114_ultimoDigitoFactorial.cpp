// 114, Calculo del ultimo número del factorial
#include <iostream>
using namespace std;

//{Pre: }
int ultimoDigito(int n){
    int ret = 1;
    for (int j = n; j > 0; j--){
        ret = ret * j;
    }
    return (ret % 10);
}
//{Post: }


int main(){
    int n_casos;
    cin >> n_casos;
    for (int i = 0; i < n_casos; i++){
        int n;
        cin >> n;
        cout << ultimoDigito(n) << "\n";
    }
    return 0;
}

