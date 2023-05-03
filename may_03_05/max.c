#include<stdio.h>

void main() {
	int size = 5;
	int num[size];
	
	int *num_pointer[size];
	
	int max;
	int *max_pointer;
	
	for(int i=0; i<size; i++) {	
		printf("Enter a number: ");
		scanf("%d", &num[i]);
		
		if (i==0) {
			max = num[0];
			max_pointer = &max;
		}
		
		num_pointer[i] = &num[i];
		
		if (*num_pointer[i] > *max_pointer) max = *num_pointer[i];
	}
	
	printf("max = %d", *max_pointer);
}
