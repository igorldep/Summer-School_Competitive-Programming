#include <iostream>

using namespace std;

int main (){
	int in[3], soma = 0, out;
	cin >> in[0] >> in[1] >> in[2] >> in[3];

	//T1 + T2 + T3 + T4 + 1 - 4

	for (int i = 0; i < 4; i++){
		soma += in[i];
	}

	out = soma - 3;
	cout << out << endl;
}