#include<stdio.h>
#include<stdlib.h>

void main() {

	int row;
	printf("Enter number of columns: ");
	scanf("%d", &row);

	for( int i=1; i<=2*row-1; i++) {
		for (int j=1; j<= abs(row-i); j++) {
			printf(" ");
		}

		for (int j=1; j<= row-abs(row-i); j++) {
			printf(" *");
		}
		printf("\n");
	}
}
