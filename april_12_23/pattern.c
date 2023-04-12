#include<stdio.h>
void main()
{
int a,i,j;
printf("Enter row number: ");
scanf("%d",&a);
for(i=1;i<=a;i++)
   { 
   for(j=1;j<=i;j++)
      {
       if(i%2!=0 && j%2 != 0)
       
         {
          printf("1");
         }
       else if(i%2 == 0 && j%2 != 0)
         {
          printf("0");
         }
       else if(i%2!=0 && j%2 == 0)
         {
          printf("0");
         }
       else if(i%2==0 && j%2 == 0)
         {
          printf("1");
         }
      }
      printf("\n");
   }
}
