#include <stdio.h>
void main()
{

  int spc, input, t = 1;
  scanf("%d", &input);

  spc = input - 1;

  for(int i = 1; i <= input; i++){
      
    for(int k = spc; k >= 1; k--)
        printf(" ");
    if (/* condition */)
    {
        /* code */
    }
    
    for(int j = 1; j <= i; j++){
        printf("%d ", t++);
    }
  printf("\n");

  
  spc--;

  }

}
