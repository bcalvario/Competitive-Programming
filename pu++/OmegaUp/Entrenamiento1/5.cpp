#include <bits/stdc++.h>

using namespace std;

int main(){

    int n = 0;
    cin >> n;
    
    int aux = n;

    int r = 0;

    for (int i = 0; i < n; i++) {
        r += (aux * (aux + 1)) / 2;
        aux--;
        
    }

    cout << r;

    return 0;
}
