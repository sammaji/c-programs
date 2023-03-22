#include <stdio.h>
int main(){
    float num;
    printf("Enter the floating point value: ");
    scanf("%f",&num);
    if(num>=0 && num<=30) printf("Number is in the range 0-30\n");
    else if(num>30 && num<=50) printf("Number is in the range 30-50\n");
    else if(num>50 && num<=80) printf("Number is in the range 50-80\n");
    else if(num>80 && num<=100) printf("Number is in the range 80-100\n");
    else printf("Wrong Input\n");

    return 0;
}
