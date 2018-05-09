#include <iostream>

using namespace std;


int compara(int *v, int qtde, int num);
int positivo (int aux);

int main (){
	int casos, qtde, num;

	cin >> casos;

	for (int i = 0; i < casos; i++){
		cin >> qtde >> num;

		int * aluno = new int[qtde];

		for (int j = 0; j < qtde; j++){
			cin >> aluno[j];
		}

		cout << compara(aluno, qtde, num) +1 << endl;
	}

	return 0;
}


int compara(int *v, int qtde, int num){
	int temp = 0, aux0 = 0, aux1 = 0;
	for (int i = 0; i < qtde; i++){
		for (int j = 1; j < qtde; j++){
			aux0 = num - v[i];
			aux1 = num - v[j];

			//número sempre positivo
			aux0 = positivo(aux0);
			aux1 = positivo(aux1);

			if (aux0 == 0) return i; //Acertou
			if (aux1 == 0) return j;

			//PEGAR O MENOR VALOR POSSÍVEL

			if(aux0 < aux1){ //pega aux1
				if((positivo(num - v[j])) < (positivo(num - v[temp]))){ //comparar com temp
					temp = j;
				}
			}
			else{
				if((positivo(num - v[i])) < (positivo(num - v[temp]))){
					temp = i;
				}
			}
		}
	}

	return temp;
}

int positivo (int aux){
	if (aux < 0){
		aux *= (-1);
	}

	return aux;
}
