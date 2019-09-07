#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; //Se declara una variable de tipo entero llamada n
    cin >> n; //Se le asigna a la varible n un valor por teclado

    int arr[n]; //Se declara una arreglo de enteros

    for (int i = 0; i < n; i++){ //For para recorrer el arreglo
       
        cin >> arr[i]; //Se lee los valores del arreglo por teclado
    }

    int suma = 0; //Se declara una variabñe de tipo entero llamada suma y la inicializamos en cero

    for (int i = 0; i < n; i++){ //Usamos un for para recorrer nuevamente el arreglo
       
        suma += arr[i]; //A suma se le asigna la suma de los valores del arreglo
    }

    cout << suma << endl; //Imprimimos las variable suma

    return 0;
}