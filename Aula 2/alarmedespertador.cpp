#include <iostream>

using namespace std;

int main(){
	int h1, m1, h2, m2, dormir, acordar, total;

	while(cin >> h1 >> m1 >> h2 >> m2){ // true
		if ( (h1 == 0) && (m1 == 0) && (h2 == 0) && (m2 == 0) ) break;

		h1 *= 60; h2 *= 60;

		dormir = h1 + m1;

		acordar = h2 + m2;

		if (acordar > dormir){
			total = acordar - dormir;
			cout << total << endl;
		}
		else{
			total = ((24*60) - (dormir - acordar)); //Outro dia
			cout << total << endl;
		}

	}


	return 0;
}
