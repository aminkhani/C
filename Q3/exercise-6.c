#include <stdio.h>

void main()
{
   int input;
   scanf("%d",&input);
   for(int i = 0; i <= input; i++)
   {
     for(int j = 1; j <= input - i; j++)
        printf(" ");
     for(int j = 1; j <= 2 * i - 1; j++)
        printf("*");
        printf("\n");
   }
 
   for(int i = input - 1; i >= 1; i--)
   {
     for(int j = 1; j <= input - i; j++)
        printf(" ");
     for(int j = 1; j <= 2 * i - 1; j++)
        printf("*");
        printf("\n");
   }
    
}