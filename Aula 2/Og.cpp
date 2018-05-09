#include <iostream>

using namespace std;

int main(){
	int h, m;

	while(true){
		cin >> h >> m;
		if ( (h == m) && (h == 0) ) break;

		cout << h + m << endl;

	}

	return 0;
}