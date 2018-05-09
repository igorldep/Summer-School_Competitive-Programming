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
	int a, d, *num_d, *num_a, i;

	scanf("%d %d", &a, &d);

	while(a!= 0 || d!= 0){

		num_a = malloc(a*sizeof(int));
		num_d = malloc(d*sizeof(int));

		for(i=0; i<a; i++){
			scanf("%d", &num_a[i]);
		}

		for(i=0; i<d; i++){
			scanf("%d", &num_d[i]);
		}

		quick_sort(num_a, 0, a - 1);
		quick_sort(num_d, 0, d - 1);

		if(num_a[0]>=num_d[1]){
			printf("N\n");
		}else{
			printf("Y\n");
		}

		scanf("%d %d", &a, &d);
	}

	return 0;
}