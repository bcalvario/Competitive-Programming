#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	int r = 1;

	cin >> n;

	for (int i = 0; i < n; i++) {

		if (n == 1) {
			r = 1;
		} else {
			r += 4 * i;
		}
	
	}

	cout << r << endl;


	return 0;
    
}
