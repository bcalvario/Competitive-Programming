#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    if (c >= a && c <= b) {

        cout << "INTERVALO" << "\n";

    } else if (c < a) {

        cout << "IZQUIERDA" << "\n";       

    } else if (c > b) {

        cout << "DERECHA" << "\n";       


    }

    return 0;
}
