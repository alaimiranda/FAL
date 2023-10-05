#include <iostream>
using namespace std;

void comprobar(int abuelo, int iglesia){
    if (abuelo >= iglesia) 
        cout << "CUERDO" << "\n";
    else 
        cout << "SENIL" << "\n";

}
int main(){
    int abuelo, iglesia;
    cin >> abuelo >> iglesia;
    while (abuelo != 0 || iglesia != 0){
        comprobar(abuelo, iglesia);
        cin >> abuelo >> iglesia;
    }
    return 0;
}