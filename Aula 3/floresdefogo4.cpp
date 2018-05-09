#include <iostream>
#include <cmath>

//CORRETO

using namespace std;

int main (){
	double r1, x1, y1, r2, x2, y2, distx, disty, distr, res;

	while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){

		distx = x2 - x1;
		disty = y2 - y1;
		distr = r2 - r1;

		res = sqrt((distx * distx) + (disty * disty));

		if(distr > 0){
			cout << "MORTO" << endl;
			continue;
		}

		if( r1 >= res + r2 ){
			cout << "RICO";
		}                                           
		else{
			cout << "MORTO";	
		}

		cout << endl;
	}

	return 0;
}