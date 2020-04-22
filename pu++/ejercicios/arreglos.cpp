#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nArreglo completo\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nPrimera mitad del arreglo\n";
    for (int i = 0; i < (n/2); i++) {
        cout << arr[i] << " ";
    }

    cout << "\nSegunda mitad del arreglo\n";
    for (int i = (n/2); i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nSentido contrario\n";
    int aux = n - 1;
    for (int i = n; i > 0; i--) {
        cout << arr[aux] << " ";
        aux--;
    }

    cout << "\nIndices pares\n";
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << arr[i] << " ";
        }
    }

    cout << "\nIndices impares\n";
    for(int i = 0; i < n; i++) {
        if (i % 2 == 1) {
            cout << arr[i] << " ";
        }
    }

    return 0;
    
}
