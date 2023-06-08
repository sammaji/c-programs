// * * * * *
//  * * * *
//   * * *
//    * *
//     *
//     *
//    * *
//   * * *
//  * * * *
// * * * * *

#include<stdio.h>
void main() {
	int row;
	printf("Enter a number: ");
	scanf("%d", &row);

	int top = (row%2==0) ? row/2: row/2+1;

	for(int i=0; i<top; i++) {
		for(int j=0; j<i; j++) {
			printf(" ");
		}

		for(int j=0; j<(top-i); j++) {
			printf("* ");
		}
		printf("\n");
	}

	for(int i=0; i<top; i++) {
		if (row%2!=0 && i==0) continue;
		for(int j=0; j<(top-i-1); j++) {
			printf(" ");
		}

		for(int j=0; j<=i; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
