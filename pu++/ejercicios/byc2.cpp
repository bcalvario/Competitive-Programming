#include <bits/stdc++.h>

using namespace std;

/**
 *Problema:
 *El Club de programación competitiva Pu++ toma desciones de una
 *manera muy interesante. En Discord alguien publica una idea y solo
 *se toman las primeras 3 opiniones para aprobar o rechazar la
 *propuesta. Para saber que ideas seran aprobadas llegaron a dos
 *conclusiones:
 *1.- Para promover que alguien vote primero, se le debe dar más
 *peso al primer voto.
 *2.- Ninguna idea brillante es unánimemente aprobada.
 *Pensando en lo anterior, se llego a una conclusión. Una idea se
 *aprobará si el primero en votar la acepta, el segundo la rechaza y el
 *tercero la acepta o si los dos primeros la aceptan y el tercero la
 *rechaza.
 *Para los miembros de Pu++ no solo es importante decir si les gusta o
 *no la idea, también les importa expresar que tanto les gusta la idea.
 *Para lograr mostrar ésto dan 0 si desaprueban o un número entero
 *entre 1 y 10 si la aprueban, mostrando que tanto les gusta la idea.
 *Debes ayudar al club a saber si la propuesta fue aprobada.
 *Input: Se darán tres números enteros a, b, c entre 0 y 10.
 *Output: Debes imprimir Aprobado o Rechazado según las normas
 *del club.
 */


int main(){

    int x, y, z;
    cin >> x >> y >> z;

    if (x && !y && z || x && y && !z || x && y && z)
        cout << "\nAprobado\n";
    else
        cout << "\nRechazado\n";

    return 0;
    
}
