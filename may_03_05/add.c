#include<stdio.h>

void main() {
	int a, b;
	printf("Enter first number: ");
	scanf("%d", &a);
	
	printf("Enter second number: ");
	scanf("%d", &b);
	
	int *pointer_a = &a;
	int *pointer_b = &b;
	
	int sum = *pointer_a + *pointer_b;
	printf("%d", sum);
}
