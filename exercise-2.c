#include <stdio.h>
int power(int , int );
int BinToDec(int );

int main(){

    int input;       
    printf("\n\nConvert Binary to Decimal:\n ");
    printf("-------------------------\n");
    printf("Input  the binary number :");
    scanf("%d", &input);
    BinToDec(input);

}
int BinToDec(int input){

    int n1;
    int dec = 0, i = 0, j, d;

    n1 = input;
    while(input != 0){ 
        d = input % 10;
        dec = dec + d * power(2,i);
        input = input / 10;
        i++;
    }
    printf("\nThe Binary Number : %d\nThe equivalent Decimal  Number is : %d\n\n", n1, dec);
    return dec;
}
int power(int num, int pow){
    int result = 1;
    if (pow == 0)
        return result;
    else{
        for (int i = pow; i > 0; i--)
            result = result * num;
    }
    return result;
}