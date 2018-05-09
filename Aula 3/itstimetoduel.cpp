#include <iostream>

using namespace std;

int main (){
	int n, a, d, h, res;

	cin >> n >> a >> d >> h;

	int * x = new int [n];
	int * y = new int [n];
	int * z = new int [n];

	for (int i = 0; i < n; i++){
		cin >> x[i] >> y[i] >> z[i];
	}

	

	res = exodia(n, a, d, h, x, y, z, 0, 0, 0);

	if (res)	{	cout << "Y" << endl;	}
	else	{ cout << "N" << endl;	}

	return 0;
}

int exodia(int n, int a, int d, int h, int *x, int *y, int *z, int new_i, int new_j, int p){//Procura a carta
	for (int i = new_i; i < n; i++){
		for (int j = new_j; j < n; j++){
			if(x[i] + x[j] == a){
				if (p == 0)	{	continue;	} //carta sozinha
				if(y[i] + y[j] == d){
					if (p == 0)	{	continue;	}
					if(z[i] + z[j] == h){
						if (p == 0)	{	continue;	}
						return 1;
					}
				}
			}
			else{
				if(x[i] + y[j] > a){
					continue;
				}
				else{ // < a -> procura carta complementar
					exodia(n, a, d, h, x, y, z, i, j+1, 1)
				}
			}
		}

	}
}

// p: parametro para saber se é a primeira carta