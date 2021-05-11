#include <stdio.h>
int SepChr(char []);
int main(){
    char input[20];
    printf("What Is Your Name ?");
    scanf("%s", input);
    SepChr(input);
}
int SepChr(char input[]){

    int i = 0;
    printf("Your Name Is : ");
    while (input[i] != '\0'){
        printf("%c ", input[i]);
        i++;
    }
    printf("\n");
}