#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; //Declaramos una variable de tipo entero llamada n

    cin >> n; //Le asignamos un valor a n leido desde teclado

    int arr[n][n]; //Declaramos una matriz

    for (int i = 0; i < n; i++){ //Usamos un for para recorrer la matriz por i

        for(int j = 0; j < n; j++){ //Usamos un for para recorrer la matriz por j

            cin >> arr[i][j]; //Asignamos al arreglo los valores leidos por teclado

        }
    }

    int dd = 0; //Declaramos una varible de tipo entero llamada dd (diagonal derecha) inicializada con cero
    int di = 0; //Declaramos una varible de tipo entero llamada di (diagonal izquierda) inicializada con cero

    for(int i = 0; i < n; i++){ //Con un for recorremos la matriz por i

        for(int j = 0; j < n; j++){ //Con un for recorremos la matriz por j al mismo tiempo que por i
            
            if(i == j){ //Usamos el condicional para indicar que si al recorrer la matriz i y j son iguales

                dd += arr[i][j]; //Asignarle a dd (diagonal derecha) la suma de i y j cuando son iguales

            }
        }
    }

    int aux = n-1; //Declaramos una variable de tipo entero llamada aux (auxiliar) a la cual le asignamos n menos uno

    for(int i = 0; i < n; i++){ //Usamoes un for para recorrer el arreglo por i

        di += arr[i][aux--]; //A la varible di (diagonal izquierda) le asignamos la suma del recorrido del la matriz por i y por aux--

    }

    int difdd = abs(dd - di); //Declaramos una varible de tipo entero llamada difdd (diferencia de diagonales) y le asignamos el valor absoluto de la resta de dd (diagonal derecha) con di (diagonal izquierda)

    cout << difdd <<endl; //Imprimimos la varible difdd (diferencia de diagonales)

    return 0;
}