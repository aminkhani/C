#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Prmn(char *, int , int );
void swap(char *, char *);
int main(){
    char input[10] = {};
    char name[10];
    int num;
    int k = 0;
    printf("Enter Number to cumpute Permutation: ");
    scanf("%d", &num);
    for (int i = 1; i <=num; i++){
        name[k] = i + '0';
        input[k] = name[k];
        k++;
    }
    int n = strlen(input);
    Prmn(input, 0, n - 1);
}
void Prmn(char *input, int l, int r){
    if (l == r)
        printf("%s\n", input);
    else {
        for (int i = l; i <= r; i++) {
            swap((input + l), (input + i));
            Prmn(input, l + 1, r);
            swap((input + l), (input + i)); 
        }
    }
}
void swap(char *x, char *y){
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
