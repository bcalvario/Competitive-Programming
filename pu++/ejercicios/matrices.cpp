#include <bits/stdc++.h>

using namespace std;



int main(){

    int n, m; //n = filas, m = columnas, (fila, columna).
    cin >> n >> m;

    int arr[n][m];

    cout << arr[1][1] << endl;

    arr[1][1] = 1;

    cout << arr[1][1] << endl;

    int arr2[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
        cout << arr2[i] << " ";

    cout << endl;

    int arr3[5];
    for (int i = 0; i < 5; i++) //Inicializar
        arr3[i] = 1;

    for (int i = 0; i < 5; i++) 
        cout << arr3[i] << " ";

    cout << endl;

    int nn = 5;
    int arr4[nn] = {}; //En este caso solo se puede inicializar con cero. 
    for (int i = 0; i < 5; i++)
        cout << arr4[i] << " ";


    return 0;
    
}
