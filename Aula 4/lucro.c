
#include <stdio.h>
#include <stdlib.h>


int main(){
  	  	  
  	int *valor_por_dia;
    int numero;
    int custo;
    int i;
  	  


	while(1){


// pegar os valores de entrada (nº dia e custo)
  	  scanf("%d", &numero);
  	    		
  		if(feof(stdin)) {
  		    break;
  		}
  		
  	  
  	  
  		scanf("%d", &custo);

  		valor_por_dia = malloc (numero * sizeof(int));

// pegar os valores de receita - custo

  		for(i =0; i< numero; i++){
  		    scanf("%d", &valor_por_dia[i]);
  		    valor_por_dia[i] = valor_por_dia[i] - custo;
  		}
  		
// criar duas variaveis para ajudar a achar o valor total maximo
  		
  	int A;
    int B;
    
    A = B = 0;
    
    for(i=0; i< numero; i++){
      if(0 < A + valor_por_dia[i]){
        A +=valor_por_dia[i];
      }else{
        A = 0;
      }
      
      if(B > A){
        B = B;
      }else{
        B = A;
      }
    }
    printf("%d\n", B);

	}

	return 0;
}







