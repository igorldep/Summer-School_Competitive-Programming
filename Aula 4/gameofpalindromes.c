
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordenacaodecrescente ( const void * A, const void * B ) {
  return ( * ( int* ) B - * ( int* ) A );
}



int main(){

	while(1){
	  
	int i =0;
	int cont =0;
	int j =0;
	int aux = 0;
	

	char palavra[1000];

	scanf("%s", &palavra);
  	  
  	  if(feof(stdin)) {
  		    break;
  		}
  aux = strlen(palavra);
  
  int *vetor;
  
  vetor = malloc(aux * sizeof(int));


  for(i=0; i<aux; i++){
    for(j=0;j<aux; j++){
      if(palavra[i]==palavra[j]){
        vetor[i] ++;
      }
    }
  }
  
   qsort ( vetor, aux, sizeof(int), ordenacaodecrescente);

  for(i=0; i<aux;i++){
    
    if(vetor[i]%2 != 0){
      cont ++;
      if(vetor[i]> 1){
      i += vetor[i];
      }
    }

  }
  
  if(cont == 0){
    cont ++;
  }

  printf("%d\n", cont-1);

 
	}

	return 0;
}