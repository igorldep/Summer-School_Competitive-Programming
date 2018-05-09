#include <iostream>
#include <vector>

using namespace std;

void quicksort(int *v, int n);
void ordena (int *v, int left, int right);
void particao(int *v, int left, int right, int &i, int &j);
void swap (int *v, int &i, int &j);
int tamanhos (int *v, int qtde, int a, int b, int l, int *vec_tam, int *vec_tam2);

int main (){


	while (1){
		int a, b, l, qtde;
		cin >> a >> b;	//dimensões
		int vec_tam[10000];
		int vec_tam2[10000];

		if (a == 0 && b == 0) break;

		cin >> l;	//largura

		cin >> qtde;

		int * comp = new int [qtde];

		for (int i = 0; i < qtde; i++){
			cin >> comp[i];

			vec_tam[comp[i]]++;
			vec_tam2[comp[i]]++;
		}



		quicksort (comp-1, qtde); //Gambiarra, em algum lugar, tirar -1



		cout << tamanhos(comp, qtde, a, b, l, vec_tam, vec_tam2) << endl;


/*
ordena
pega os maiores e vai vendo se cabe
para procurar as tabuas p completar, procurar de maniera rápida
contar os tamanhos couting sort

*/
	}


	return 0;
}

void quicksort(int *v, int n)
{ ordena (v, 0,  n); }

void ordena (int *v, int left, int right){
	int i, j;
	particao (v, left, right, i, j);
	if(left < j) { ordena (v, left, j); }
   	if(i < right) { ordena (v, i, right); }
}

void particao(int *v, int left, int right, int &i, int &j){
	int middle, mediana, pivo;

	i = left;
	j = right;

	middle = (i + j) / 2;
	if(v[i] >= v[j] && v[i] <= v[middle])
		mediana = i;
	else if(v[middle] >= v[i] && v[middle] <= v[j])
		mediana = middle;
	else
		mediana = j;

	pivo = v[mediana];

	do{
		while(pivo > v[i]) i++;
		while(pivo < v[j]) j--;

		if(i <= j){
			swap(v, i, j);
			i ++; j--;
		}
	}while(i <= j);
}

void swap (int *v, int &i, int &j){
	int aux;

	aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}

int tamanhos (int *v, int qtde, int a, int b, int l, int *vec_tam, int *vec_tam2){
	int cont1 = 0, cont2 = 0, falta, falta2;
    cout << qtde << endl;

    	cout << endl << endl;
        for (int i = 0; i < qtde; i++){
            cout <<	vec_tam[i] << " ";
		}

		cout << endl << endl;
		for (int i = 0; i < qtde; i++){
            cout <<	vec_tam2[i] << " ";
		}

		cout << endl << endl;
		for (int i = 0; i < qtde; i++){
            cout <<	v[i] << " ";
		}
		cout << endl << endl;

	//		LARGURA:
	for(int i = qtde; i > 0; i--){
		if (v[i] == a){	cont1++;	vec_tam[i]--;	}

		if (v[i] > a)	continue;

		if (v[i] < a){ //Procurar outra menor que caiba com essa
		 	falta = a - v[i];
		 	if (vec_tam[falta]){
		 		vec_tam[falta]--;
		 		cont1++;	cont1++; //duas tábuas
		 	} //??????????????? e se duas tabuas n for suficiente ?
			continue;
		}
	}

	//		ALTURA:
	for(int i = qtde; i > 0; i--){
		if (v[i] == b){	cont2++;	vec_tam2[i]--;	}

		if (v[i] > b)	continue;

		if (v[i] < b){ //Procurar outra menor que caiba com essa
		 	falta2 = b - v[i];
		 	if (vec_tam2[falta]){
		 		vec_tam2[falta]--;
		 		cont2++;	cont2++; //duas tábuas
		 	} //??????????????? e se duas tabuas n for suficiente ?
			continue;
		}
	}

	if(cont1 < cont2){	return cont1;	}
	else {	return cont2;	}
}
