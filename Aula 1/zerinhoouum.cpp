#include <iostream>

using namespace std;

int main (){
	int a, b, c;

	while(1){
		cin >> a >> b >> c;
		if(! cin) break;

		if ((a == b) && (a == c)){ // 0 0 0 || 1 1 1
			cout << "*" << endl;
		}
		else{
			if (a == b){
				cout << "C";
			}
			if (b == c){
				cout << "A";
			}
			if (a == c){
				cout << "B";
			}
			cout << endl;
		}
	}

	return 0;
}