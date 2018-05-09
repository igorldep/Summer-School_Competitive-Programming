#include <iostream>

using namespace std;

int main (){
	int n;

	cin >> n;

	// <<: desloca bits e completa por zero.  << 2 = * 2
	for (int mask = 0; mask < (1 << n); mask++){
		for (int i = 0; i < n; i++){
			if ((mask & (1 << i)) != 0){
				cout << i + 1 << " ";
			}
		}
		cout << endl;
	}


	return 0;
}