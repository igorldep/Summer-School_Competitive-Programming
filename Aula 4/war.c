#include <stdio.h>
#include <stdlib.h>


int ordenacaodecrescente ( const void * A, const void * B ) {
  return ( * ( int* ) B - * ( int* ) A );
}


int main(){

	int num;
	
	int i, j, aux;
	int *inimigo;
	int *pessoa;

	scanf("%d", &num);


	inimigo = malloc (num * sizeof(int));
	pessoa = malloc (num * sizeof(int));

	for(i=0; i< num; i++){
		scanf("%d", &inimigo[i]);
	}

	for(i=0; i< num; i++){
		scanf("%d", &pessoa[i]);
	}

	qsort ( inimigo, num, sizeof(int), ordenacaodecrescente);
	qsort ( pessoa, num, sizeof(int), ordenacaodecrescente);

	i=0;
	j=0;
	aux= 0;

	while(i < num){
		if(inimigo[i] >= pessoa[j]){
			i++;
		}
		else{
			aux ++;
			j++;
			i++;
		}
	}

	printf("%d\n", aux);

	return 0;
}

