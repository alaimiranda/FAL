//#4, 219, La lotería de la peña Atlética
//Accepted
#include <iostream>
using namespace std;

int decimosPares(int n_decimos){
    int n_par = 0;
    for (int i = 0; i < n_decimos; i++){
        int n;
        cin >> n;
        if ((n%2) == 0)
            n_par++;
    }
    return n_par;
}

int main(){
    int n_casos;
    cin >> n_casos;
    for (int i = 0; i < n_casos; i++){
        int n_decimos;
        cin >> n_decimos;
        cout << decimosPares(n_decimos) << "\n";
    }
    return 0;
}