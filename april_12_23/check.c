#include<stdio.h>
#include<stdbool.h>

void main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	for(int j=1; j<n; j++) {
	
		bool isSquare = false;
		bool isCube = false;

	
		for (int i=0; i<=j; i++) {
			if (i*i == j) isSquare = true;
		}

		for (int i=1; i<=j; i++) {
			if (i*i*i == j) isCube = true;
		}
	
		if (isSquare && isCube) printf("%d\n", j);
	}
}
