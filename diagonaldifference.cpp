#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {

            cin >> arr[i][j];

        }
    }

    int dd = 0;
    int di = 0;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {
            
            if(i == j) {

                dd += arr[i][j];

            }
        }
    }

    int aux = n - 1;

    for(int i = 0; i < n; i++) {

        di += arr[i][aux--];

    }

    int difdd = abs(dd - di);

    cout << difdd << endl;

    return 0;
}
