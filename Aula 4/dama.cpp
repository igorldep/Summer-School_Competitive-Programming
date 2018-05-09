#include <iostream>

using namespace std;

int positivo (int x);

int main (){
	int x1, y1, x2, y2;


	while(true){
		cin >> x1 >> y1 >> x2 >> y2;

		if (x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0) break;

		if (x1 == x2 && y1 == y2){ //Mesma posição (x1 != 0 e y1 != 0)
			cout << "0" << endl; continue;
		}
		if( positivo(x1 - x2) == positivo(y1 - y2) ){ //Diagonal
			cout << "1" << endl; continue;
		}
		else if((x1 == x2) || (y1 == y2)){ //Mesma linha
			cout << "1" << endl; continue;
		}
		else{ //Outro lugar
			cout << "2" << endl; continue;
		}
	}

	return 0;
}



int positivo (int x){
	if (x < 0){	x *= (-1);	}
	return x;
}