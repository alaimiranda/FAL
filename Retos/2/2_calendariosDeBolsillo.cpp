#include <iostream>
using namespace std;

void caso(int n_cal){
    int date, max = 1929, min = 1991;
    for (int j = n_cal; j > 0; j--){
            cin >> date;
            if (max < date){
                min = max;
                max = date;
            } else {
                if (min > date){
                    
                }
            }

        }
}

int main() {
    int casos;
    cin >> casos;

    for (int i = casos; i > 0; i--){
        int n_cal;
        cin >> n_cal;
    }

    return 0;
}