#include <iostream>
#include <algorithm>

using namespace std;

int main (){
	int w=0;
	
	while (true){
		w++;
		int n, c;

		cin >> n >> c;

		int p[n];
		int f[n];

		if (c == 0 and n == 0) break;

		for (int i = 0; i < n; i++ ){
			cin >> p[i] >> f[i];
		}

    int F[n + 1][c + 1];

    for (int k = 0; k <= c; k++) F[0][k] = 0;
   
    for (int q = 1; q <= n; q++) {
      for (int k = 0; k <= c; k++) {
        F[q][k] = F[q - 1][k];

        if (k >= p[q - 1]) {
          int novo_k = k - p[q - 1];
          int felicidade = f[q - 1] + F[q - 1][novo_k];
          F[q][k] = max(F[q][k], felicidade);
        }
      }
    }

    cout << "Caso " << w << ": "<< F[n][c] << endl;
	}


	return 0;
}