#include <stdio.h>
void PrntMul(int *);
int main(){
    int input;
    printf("Enter Number to Comput Multiplication table: ");
    scanf("%d", &input);
    PrntMul(&input);
}
void PrntMul(int *input){
    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= *input; j++)
            printf("%d * %d = %d\t", i, j, i * j);
        printf("\n");
    }    
}
