#include<stdio.h>

void main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	float sum = 0.0;

	for(int i=1; i<=n; i++) {
		sum = sum + (1.0/(double)i);
		if (i == 1) printf("1/%d", i);
		else printf(" + 1/%d", i);
	}

	printf("\nSum = %f", sum);
}
