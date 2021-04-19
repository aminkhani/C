#include <stdio.h>

int main(){

    int M[3], N[5], P[2];
    int *array[3] = {M, N, P};

    printf("\n----------- Pointer To Array----------\n\n");
    printf("Enter 3 Nubmer for M : \n--------------------\n");
    for (int i = 0; i < 3; i++){
        printf("Enter Number %d : ", i + 1);
        scanf("%d", &M[i]);
    }
    printf("\n");
    printf("Enter 5 Nubmer for N : \n--------------------\n");
    for (int i = 0; i < 5; i++){
        printf("Enter Number %d : ", i + 1);
        scanf("%d", &N[i]);
    }  
    printf("\n");
    printf("Enter 2 Nubmer for P : \n--------------------\n");
    for (int i = 0; i < 2; i++){
        printf("Enter Number %d : ", i + 1);
        scanf("%d", &P[i]);
    }

    printf("\n\nArrya Is: \n---------\n");
    for (int i = 0; i < 3; i++)
        printf("%d  ", array[0][i]);
    printf("\n");

    for (int i = 0; i < 5; i++)
        printf("%d  ", array[1][i]);
    printf("\n");

    for (int i = 0; i < 2; i++)
        printf("%d  ", array[2][i]);
    printf("\n");
 
    return 0;
}