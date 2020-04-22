#include <bits/stdc++.h>

using namespace std;

int main(){

    int casos = 0;
    cin >> casos;

    int medidas[casos];

    for (int i = 0; i < casos; i++) {
    	cin >> medidas[i];
    }

    for (int i = 0; i < casos; i++) {
    	cout << "Area a comprar: " << medidas[i] * 2 << "\n";
    }


    return 0;
}
