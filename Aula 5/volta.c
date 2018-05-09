#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y, tempo_x=1, tempo_y=1, voltas_x=0, voltas_y=0, cont=0, teste_x = 1, teste_y = 0;

	scanf("%d %d", &x, &y);

	while(teste_x > teste_y){

		teste_y = y * cont;

		if(tempo_x % x == 0){
			voltas_x++;
			tempo_x = 1;
		}else{
			tempo_x++;
		}

		if(tempo_y % y == 0){
			voltas_y++;
			tempo_y = 1;
		}else{
			tempo_y++;
		}

		cont ++;

		teste_x = x * cont;
		
		
	}

	printf("%d\n", cont);

	return 0;
}