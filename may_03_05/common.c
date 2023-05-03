#include<stdio.h>

int main()
{
    int size = 5;
    int num1[size];
    int num2[size];
    
    for (int i=0; i<size; i++) {
    	printf("Enter a number: ");
    	scanf("%d", &num1[i]);
    }
    
    printf("\n");
    
    for (int i=0; i<size; i++) {
    	printf("Enter a number: ");
    	scanf("%d", &num2[i]);
    }
    
    int common[size];
    int counter = 0;
    
    for (int i=0; i<size; i++) {
    	for(int j=0; j<size; j++) {
    		if (num1[i] == num2[j]) printf("%d", num1[i]);
    	}
    }
    
    
    return 0;
}
