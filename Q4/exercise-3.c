#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Rev(float *, char *, int *, int *);

int main(){
    float number;
    char name[50] = {};
    int sumdigit_after = 0;
    int sumdigit_before = 0;
    printf("\nEnter a Number : ");
    scanf("%f", &number);
    Rev(&number, name, &sumdigit_after, &sumdigit_before);
    printf("Reversed : %s\n", name);
    printf("Sum of digits before \".\" : %d\n", sumdigit_before);
    printf("Sum of digits after \".\" : %d\n", sumdigit_after);
}
void Rev(float *number, char *name, int *sumdigit_after, int *sumdigit_before){
    char st[50];
    int k = 0;
    char new[50];
    sprintf(st, "%.2f", *number);
    for (int i = strlen(st) - 1; i >= 0; i--){
        name[k] = st[i];
        k++;
    }
    for (int i = 0; i < 10; i++){
        if (name[i] == '.')
            break;
        else
            *sumdigit_after += (int)name[i] - 48;
    }
    for (int i = 0; i < 10; i++){
        if (st[i] == '.')
            break;
        else
            *sumdigit_before += (int)st[i] - 48;
    }
}