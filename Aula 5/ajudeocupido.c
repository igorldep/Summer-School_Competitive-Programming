#include <stdio.h>
#include <stdlib.h>

void quick_sort(int *a, int left, int right) {
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}

int main(){
	int n, *fuso, i, aux1=0, aux2 =0, diferenca;  

	scanf("%d", &n);

	fuso = malloc(n*sizeof(int));
	//diferenca = malloc(n/2 * sizeof(int));

	for(i=0;i<n;i++){
		scanf("%d", &fuso[i]);
	}

	quick_sort(fuso, 0, n - 1);

	i=0;
	while(i<n){
		aux1 += fuso[i+1] - fuso[i];
		i = i+2;
	}

	i=2;
	while(i<n){
		aux2 += fuso[i] - fuso[i-1];
		i = i+2;
	}
	aux2 += 24 -(fuso[n-1] - fuso[0]);

	if(aux1 <= aux2){
		diferenca = aux1;
	}else{
		diferenca = aux2;
	}

	printf("%d\n", diferenca);

}