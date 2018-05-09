#include <stdio.h>
#include <stdlib.h>


int ordenacaodecrescente ( const void * A, const void * B ) {
  return ( * ( int* ) B - * ( int* ) A );
}

int main(){
	int a, b, c, d, aux[4];

	scanf("%d %d %d %d", &a, &b ,&c, &d);

	aux[0] = a;
	aux[1] = b;
	aux[2] = c;
	aux[3] = d;	

	qsort (aux, 4, sizeof(int), ordenacaodecrescente);

	a = aux[3];
	b = aux[2];
	c = aux[1];
	d = aux[0];

	if(a+b>c && a+c>b && b+c>a && c-b<a && c-a<b && b-a<c){
		printf("S\n");
	}else if(a+b>d && a+d>b && b+d>a && d-b<a && d-a<b && d-a<c){
		printf("S\n");
	}else if(a+c>d && a+d>c && c+d>a && d-c<a && c-a<d && d-a<c){
		printf("S\n");
	}else if(c+b>d && c+d>b && c+d>a && c-b<d && d-c<b && d-b<c){
		printf("S\n");
	}else{
		printf("N\n");
	}

	return 0;
}