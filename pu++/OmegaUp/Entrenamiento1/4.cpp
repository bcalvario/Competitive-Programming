#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int repet, dinero, dias;
    int k = 0;
    int aux = 0;
    std:: vector<double> arreglo;
    double min;
    cin >> repet;
    int resultado[repet];

    while (k < repet) {
        cin >> dinero >> dias;
        arreglo.resize(dias);

        for (int i = 0; i < dias; i++) {
            cin >> arreglo[i];
        }

        min = dinero;

        for (int i = 0; i < dias; i++) {
            if (arreglo[i] < min) {
                min = arreglo[i];
                aux = i;
            }
        }
        resultado[k] = aux + 1;
        k += 1;
        arreglo.clear();
        aux = 0;
    }

    for (int i = 0; i < repet; i++) {
        cout << "Case " << i + 1 << ": comprar en dia " << resultado[i] << endl;
    }

    return 0;
}
