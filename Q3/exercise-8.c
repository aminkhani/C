#include <stdio.h>
int main(){

    int arr1[50][50], row, col;

    printf("\nInput the rows and columns of the matrix : ");
    scanf("%d %d", &row, &col);

    printf("Input elements in the first matrix :\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j< col ; j++){
        printf("element - [%d][%d] : ", i, j);
        scanf("%d", &arr1[i][j]);
        }   
    } 
    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++)
    //         brr1[j][i] = arr1[i][j];
    // }


    for (int i = 0; i < col; i++){
        int max = arr1[0][i];
        for (int j = 1; j < row; j++){

            if(arr1[j][i] > max)
                max = arr1[j][i];
            
        }
        printf("Max Column[%d] = %d\n", i, max);



    }
    






}    