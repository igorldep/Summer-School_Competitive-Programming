#include <iostream>

using namespace std;

/*
struct Bota{
	int n;
	char pe;
};
*/ 

int main (){
	int qtde, rep, new_qtde, cont;

	while (true){

		cin >> qtde;

		if(! cin) break;

		int * n = new int [qtde];
		char * pe = new char[qtde];
		int * r = new int [qtde];

		for (int i = 0; i < qtde; i++ ) {
			cin >> n[i] >> pe[i];
		}

		cont = 0;
		for (int i = 0; i < qtde; i++ ) {
			for (int j = 0; j < qtde; j++ ) {
				if (n[i] == n[j]){
					if (pe[i] != pe[j]){
						r[i] = i + j;
						/*for ( int k = 0; k < 2; k++){
							if(r[i] != rep){
								cont++;
								break;
							}
						}*/
					}
				}
			}
		 
		}

		//for (int i = 0; i < )

		int aux;
		for (int i = 1; i < 4; i++ ){
			aux = r[i+1]; 
			if (r[i] = aux){
				cont++;
			}
			
		}
		
		cout << cont << endl;
	}

	return 0;
}