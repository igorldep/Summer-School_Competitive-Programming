#include <iostream>

using namespace std;

int main (){
	int r1, x1, y1, r2, x2, y2, raios;

	while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){

		raios = r1 - r2;

		if(raios < 0){
			cout << "MORTO" << endl;
			continue;
		}

		if( ((x1 + r1) >= (x2 + r2)) && ((y1 + r1) >= (y2 + r2)) ){
			cout << "RICO" << endl;
		}                                           
		else{
			cout << "MORTO" << endl;	
		}
	}

	return 0;
}