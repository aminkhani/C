#include <stdio.h>

int main(){

    int arr[5][2] = {{1, 2},
                     {3, 4},
                     {5, 6},
                     {7, 8},
                     {9, 10}};
    printf("\nValue Of Array Is : \n\n");            
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 2; j++)
            printf("array[%d][%d] = %d\n", i, j, arr[i][j]);

    printf("\nAddress Of Array Is : \n\n");
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 2; j++)
            printf("array[%d][%d] = %p\n", i, j, &arr[i][j]); 

 //  Explain (finglish): araye ha be sorate satri kenare ham dar hafeze zakhire mishavand va 
 //  variable int 4 byte faza migirad, be hamin dalil address ha 4 ta 4ta bishtar mishavand
 //  float : 8 ta 8 ta 
 //  char : 1 ta 1 ta
 //  double : 16 ta 16 ta       
    


    return 0;
}
// arr = 1 2
//       3 4
//       5 6
//       7 8
//       9 10