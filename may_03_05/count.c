#include<stdio.h>
#include<string.h>

void main() {
	char str[100];
	int count = 1;
	
	printf("Enter a string: ");
	fgets(str, 100, stdin);
	
	for(int i=0; str[i] != '\0'; i++) {
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
			count = count + 1;
		}
	}
	
	count = count - 1;
	printf("Word count = %d\n", count);
}
