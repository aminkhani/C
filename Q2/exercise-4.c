#include <stdio.h>

int main(){

    float input1, input2, input3;
    printf("Enter the first angle of the triangle : ");
    scanf("%f", &input1);
    printf("Enter the secend angle of the triangle : ");
    scanf("%f", &input2);
    if((input1 + input2) >= 90)
        printf("It Is Not Correct!!!\nTry Again ...\n"); 
    else{    
        input3 = (180 - (input1 + input2));
        printf("the third angle of the triangle is : %.1f\n", input3);
    }
    return 0;
}
