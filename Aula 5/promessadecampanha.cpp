#include <iostream>

using namespace std;

#define INVALIDO 100000
//int const INVALIDO = 100000;

int positivo(int x);

int main (){
	int casos, vertices, arestas, passagem, cont, falta, falta2, k, a2, aux, para;

	cin >> casos; 

	for (int i = 0; i < casos; i++){
		cont = falta = falta2 = aux = para = 0; passagem = 2;

		cin >> vertices;
		cin >> arestas;

		a2 = arestas * 2;

		int entrada [a2];

		for (int j = 0; j < a2; j++){
			cin >> entrada [j];
		}


/*	    for (int j = 0; j < a2; j++){
			cout << entrada [j] << " ";
		} */


		int aresta [vertices][vertices];

		for (int j = 0; j < vertices; j++){
			for (int k = 0; k < vertices; k++){
				if(j == k){
					aresta [j] [k] = 1;
				}
				else {
					aresta [j] [k] = 0;
				}
			}
		}


		for (int j = 0; j < a2; j+=2){
			aresta [entrada[j]-1] [entrada[j+1]-1] = 1;
			aresta [entrada[j+1]-1] [entrada[j]-1] = 1;
		}


	/*	for (k=0; k<vertices; k++) {
			for (int j=0; j<vertices; j++) {
				cout << aresta[k][j] << " ";
			}
			cout << "\n"; // para pular linha quando terminar a coluna
		}*/

		for(int j = 0; j < vertices; j++){
			cont = 0;
			for (k = 0; k < vertices; k++){ //conferindo por linha
				if(aresta [j][k] == 1){
					cont++;
					//k = INVALIDO; //sair do 2º for
				}
				//else{continue;}
			}
			if (cont == vertices) {
				cout << "Caso #" << i+1 << ": " << "a promessa foi cumprida" << endl;
				para = 1;
				break;
			}
			else{
				aux = cont - vertices;
				aux = positivo (aux);
				if (j==0) {falta = aux;}
				//cout << aux << "	falta>>> " << falta << endl;
				if (falta > aux){
					falta = aux;
				}
			}
		}

		if(para){break;}

		for(int j = 0; j < vertices; j++){
			cont = 0;
			for (k = 0; k < vertices; k++){ //conferindo por coluna
				if(aresta [k][j] == 1){
					cont++;
					//k = INVALIDO; //sair do 2º for
				}
				//else{continue;}
			}
			if (cont == vertices) {
				//cout << "Caso #" << i+1 << ": " << "a promessa foi cumprida" << endl;
				para = 1;
				break;
			}
			else{
				aux = cont - vertices;
				aux = positivo (aux);
				if (j==0) {falta2 = aux;}
				cout << aux << "	falta>>> " << falta << endl;
				if (falta2 > aux){
					falta2 = aux;
				}
			}
		}

		if(para){break;}


/*

		for (int linha = 0; linha < arestas; linha++){
			for (int coluna = 0; coluna < 2; coluna++){
				for (int passa = 0; passa < passagem; passa++){
					aresta [linha] [coluna] = entrada [passa];
					if (passa % 2 == 0 && passa < a2){
						passagem += 2;
					}
					
				}	
			}
		}
		cout << endl; //
		for (int linha = 0; linha < arestas; linha++){
			for (int coluna = 0; coluna < 2; coluna++){
				cout << aresta [linha] [coluna];
			}
			cout << endl; //
		}
*/

		cout << "falta: " << falta << endl << "falta2: " << falta2 << endl;
		int final = 0;
		if (falta < falta2){
			final = falta2;
		}
		else{
			final = falta;
		}
		cout << "Caso #" << i+1 << ": " << "ainda falta(m) " << final << " estrada(s)" << endl;
		//cout << endl << "contador: " << cont << endl;
		//cout << endl << "falta: " << final << endl;


	}


	return 0;
}

int positivo(int x){
	if (x < 0){
		x *= (-1);
	}
	return x;
}