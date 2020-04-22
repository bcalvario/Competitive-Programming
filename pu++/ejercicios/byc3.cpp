#include <bits/stdc++.h>

using namespace std;

/**
 *Problema: Dados dos letras minúsculas a y b, dar la distancia en la
 *que se encuentrar en el alfabeto (sin incluir ñ o ll).
 *Input: Se darán dos letras minúsculas a, b entre a y z.
 *Output: Debes imprimir la distancia a la que se encuentran las dos
 *letras en el alafabeto anglosajón.
 */


int main(){

    char a, b;
    cin >> a >> b;
    cout << abs(b - a) << endl;

    cout << "\nOperaciones\n";
    cout << "\nSuma de a con 10 " << a + 10 << endl;
    cout << "\nResta de a con b " << a - b << endl;
    cout << "\n¿a mayor que b? " << (a < b) << endl;
    cout << "\n¿a menor que b? " << (a > b) << endl;


    return 0;
    
}
