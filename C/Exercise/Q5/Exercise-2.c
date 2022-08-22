#include <stdio.h>

float divide(int, int);

int main(){

    float num1, num2;
    printf("\nEnter First Number : ");
    scanf("%f", &num1);
    printf("\nEnter Secend Number : ");
    scanf("%f", &num2);
    printf("Result is : %.2f\n", divide(num1, num2));
}

float divide(int num1, int num2){

    int temp = 1;
    float quotient = 0;
    while (num2 <= num1){
        num2 <<= 1;
        temp <<= 1;
    }
    while (temp > 1){
        num2 >>= 1;
        temp >>= 1;
        if(num1 >= num2){
            num1 -= num2;
            quotient += temp;
        }
    }
return quotient;
}
// #include <stdio.h>
// float divide(float , float);
// int main(){
//     float num1, num2;
//     printf("\nEnter First Number : ");
//     scanf("%f", &num1);
//     printf("\nEnter Secend Number : ");
//     scanf("%f", &num2);
//     divide(num1, num2);
// }
// float divide(float num1, float num2){
//     float result  = 0;
//     float result2 = 0;
//     float result3 = 0;
//     if(num1 > num2){
//         while(num1 >= num2){
//             num1 = num1 - num2;
//             result++;
//         }  
//         if (num1 != 0){
//             num1 *= 10;
//             while(num1 >= num2){
//                 num1 = num1 - num2;
//                 result2++;
//             }
//         }
//         if (num1 != 0){
//             num1 *= 10;
//             while(num1 >= num2){
//                 num1 = num1 - num2;
//                 result3++;
//             }
//         }
//     }
//     printf("Result Is : %.f.%.f%.f\n", result, result2, result3);
// }
