#include<stdio.h>

void main() {
	int size;
	printf("Enter size: ");
	scanf("%d", &size);
	
	int num[size];
	for(int i=0; i<size; i++) {
		printf("Enter a number: ");
		scanf("%d", &num[i]);
	}
	int diff[size-1];
	int largest_diff;
	
	for (int i=1; i<size; i++) {
		diff[i-1] = num[i] - num[i-1];
		
		if (i==1) largest_diff = diff[0];
		else if (diff[i-1] > largest_diff) largest_diff = diff[i-1];
		
		printf("%d ", diff[i-1]);
	}
	
	printf("\n");
	printf("Largest difference = %d", largest_diff);
}
