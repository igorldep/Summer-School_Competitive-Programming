#include <iostream>

using namespace std;

int main (){
	int num, min, n, cont, p[110];

	while (true){
		cont = 0;

		cin >> num >> min;

		if(num == 0 && min == 0 ){
			break; return 0;
		}

		for (int i = 0; i < 110; i++){
			p[i] = 0;
		}

		int * per = new int [num];

		for (int i = 0; i < num; i++){
			cin >> per[i];
			p[per[i]]++;
		}

		for (int i = 0; i < 110; i++){
			if(p[i] >= min){
				cont++;
			}
		}

		cout << cont << endl;
	}
}