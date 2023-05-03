#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof str, stdin);

    for (int i=strlen(str); i>=0; i--) {
        printf("%c\n", str[i]);
    }
    return 0;
}
