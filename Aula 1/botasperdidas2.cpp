#include <iostream>
#include <vector>
using namespace std;

/* Existem 30 tamanhos possíveis, e eles podem ser Esquerdo ou Direito(2), gerando 60 possibilidades
 * O programa armazena onde a bota em questão cai (direito o esquerdo e em qual tamanho), e depois conta
 * qual a possibilidade ocorreu. Lembrando que se existem 5 pés esquerdos e 10 direitos, é possível haver
 * apenas 5 pares.
 */


int main(){
  int n, tam, count, tmp;
  char pe;

  while(cin >> n){
    vector<int> vec_e(61);
    vector<int> vec_d(61);
    count = 0;

  for (int i = 0; i < n; ++i){
    cin >> tam >> pe;

    if(pe == 'D'){
      vec_d[tam]++;
    }else{ //'E'
      vec_e[tam]++;
    }
  }

  for (int i = 30; i < 61; ++i){
    if(vec_e[i] != 0 && vec_d[i]){
      if(vec_e[i] == vec_d[i]){ // Se igual
        count += vec_e[i]; //Qualquer um
      }else{
        if(vec_e[i] < vec_d[i]){ // se menor, pega o menor
          count += vec_e[i]; 
        }
        else{
          count += vec_d[i];
        }
      }
    }
  }

  cout << count << endl;
  }

  return 0;
}