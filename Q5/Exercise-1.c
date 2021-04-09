#include <stdio.h>
void CheckPalindrome(int *);
int main(){
    int input;
    pritnf("Enter a Number: ");
    scanf("%d", &input);
    CheckPalindrome(&input);
}
void CheckPalindrome(int *input){
    int reverse = 0, temp, original;
    original = *input;
    while (*input != 0) {
        temp = *input % 10;
        reverse = reverse * 10 + temp;
        *input /= 10;
    }
    if (original == reverse)
        printf("True, It Is Polindrome");
    else
        printf("False,It Is Not Polindrome");
}
