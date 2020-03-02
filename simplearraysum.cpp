#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
       
        cin >> arr[i];
    }

    int suma = 0;

    for (int i = 0; i < n; i++) {
       
        suma += arr[i];
    }

    cout << suma << endl;

    return 0;
}
