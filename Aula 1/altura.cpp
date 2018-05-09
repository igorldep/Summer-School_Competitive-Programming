#include <iostream>
#include <algorithm>

using namespace std;

int main (){
	ios::sync_with_stdio(false); // o cin e o scanf são sincronizados para possibilitar usar ambos, mas demanta tempo a sincornização -> off
	cin.tie(0); //limpa buffer do cin e do cout
	int qtde;

	cin >> qtde;
	 
	int * n = new int [qtde];

	for (int i = 0; i < qtde; i++){
		cin >> n[i];

		int * h = new int [n[i]];

		for (int j = 0; j < n[i]; j++){
			cin >> h[j];
		}

		sort(h, h+n[i]);

		cout << h[0];
		for (int k = 1; k < n[i]; k++){
			cout << " " << h[k];
		}

		cout << endl;


	}

	return 0;
}