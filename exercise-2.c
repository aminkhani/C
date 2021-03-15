#include <stdio.h>

int main(){

    int row1, row2, col1, col2;

    scanf("%d\n%d", &row1, &col1);
    scanf("%d\n%d", &row2, &col2);

    if (col1 == row2){
        printf("OK\n");
    }
    else
        printf("NO\n");


    return 0;
}