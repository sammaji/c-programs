#include<stdio.h>

int main() {
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);

	printf("Left shift of %d by 2 is %d\n", number, number<<2);

	return 0;
}
