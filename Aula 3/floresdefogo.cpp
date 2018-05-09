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

		if( ((x2 - x1) <= raios ) && ( (y2 - y1) <= raios )){
			cout << "RICO" << endl;
		}                                           
		else{
			cout << "MORTO" << endl;	
		}
	}

	return 0;
}