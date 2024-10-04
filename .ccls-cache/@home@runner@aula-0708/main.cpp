#include <iostream>

using namespace std;

int main(){
    int cont;
    float n;

    int positivos = 0;

    while (cont <= 5){
        cin >> n;

        if (n > 0){
            positivos++;
        }
        cont++;
    }
    cout << positivos << " valores positivos\n";
    return 0;
}
