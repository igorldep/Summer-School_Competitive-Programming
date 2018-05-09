#include <iostream>
#include <string>

using namespace std;
/*
using std::string;
using std::getline;
*/

int posicao(int x);
char alfa [] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};


int main (){
	int n, aux1, aux2, res, cont;
	string a, b;
	

	cin >> n;

	for (int i = 0; i < n; i++){
	
		cont = 0;
		
		cin >> a >> b;

		for (int j = 0; j < a.size(); j++){
			res = aux1 = aux2 = 0;
/*
			aux1 = (int) a[j] - 97;
			aux2 = (int) b[j] - 97;
*/
			
			aux1 = posicao(a[j]);
			aux2 = posicao(b[j]);

			res = aux2 - aux1;

			if (res < 0){ //a letra de a[i] é maior que b[i]
				res = 26 - aux1 + aux2;
			}

			cont += res;
		}
ss
		cout << cont << endl;

	}
/*	string s;

	getline(cin, s);


	cout << endl << endl << s;

	cout << endl << endl;
	for (int i = 0; i < s.lenght(); i++){
		cout << "		" << s[i] << endl;
	}

*/
	return 0;
}


int posicao(int x){
	for (int i = 0; i < 26; i++){
		if (alfa[i] == x){
			return i;
		}
	}
}