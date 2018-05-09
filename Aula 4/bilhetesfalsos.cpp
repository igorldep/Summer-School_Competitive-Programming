#include <iostream>

using namespace std;

int const INVALIDO = 1000000;

int main (){
	int bilhetes, pessoas, aux;

	while(true){
		int cont = 0;

		cin >> bilhetes >> pessoas;

		if ((bilhetes == 0) && (pessoas == 0)) break;

		int * v =  new int [pessoas];

		for (int i = 0; i < pessoas; i++){
			cin >> aux;
			v[aux]++;

			if (v[aux] > 1 && v[aux] < INVALIDO){
				cont++;
				v[aux] += (INVALIDO + 1); // não precisa do +1
			}
		}

		cout << cont << endl;

	}

	return 0;
}