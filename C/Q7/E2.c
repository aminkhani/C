#include <stdio.h>
int MeanNums(int , int);

int main(){
    
    float input, k = 0;
    for (int i = 0; i < 100; i++){
        printf("Enter Number : ");
        scanf("%f", &input);
        if (input == -100){
            MeanNums(input, k);
            break;
        }    
        k++;    
        MeanNums(input, k);
    }
}
int MeanNums(int input, int k){
    static float sum = 0;
    if (input == -100)
        printf("Average Is : %.2f\n", sum / k);
    sum += input;
}