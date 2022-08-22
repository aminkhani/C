#include <stdio.h>
int main(){

    int arr1[50][50], brr1[50][50], row, col;

    printf("\nInput the rows and columns of the matrix : ");
    scanf("%d %d", &row, &col);

    printf("Input elements in the first matrix :\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j< col ; j++){
        printf("element - [%d][%d] : ", i, j);
        scanf("%d", &arr1[i][j]);
        }   
    } 
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            brr1[j][i] = arr1[i][j];
    }

    printf("\n\nThe transpose of a matrix is : ");
    for(int i = 0; i < col; i++){
        printf("\n");
        for(int j = 0; j < row; j++)
            printf("%d\t", brr1[i][j]);
    }
    printf("\n");    

    return 0;
}