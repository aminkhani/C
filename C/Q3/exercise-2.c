#include <stdio.h>
int power(int , int );

int main(){

    int row1, row2, col1, col2, y;
    int sum = 0;
    int crr1[50][50];

    printf("Enter The Number Of Row First Array: ");
    scanf("%d", &row1);
    printf("Enter The Number Of Colum First Array: ");
    scanf("%d", &col1);
    int array1[row1][col1];

    printf("\nEnter The Number Of Row Secend Array: ");
    scanf("%d", &row2);
    printf("Enter The Number Of Colum Secend Array: ");
    scanf("%d", &col2);

    int array2[row2][col2];

    if (col1 == row2){
 
        printf("\nArray 1 :\n");
        for (int i = 0; i < row1; i++){
            printf("\n");
            for (int j = 0; j < col1; j++){
                array1[i][j] = power(i + 1, j);
                printf("%d\t", array1[i][j]);
            } 
        }
        printf("\n\nArray 2 :\n");
        for (int i = 0; i < row2; i++){
            printf("\n");
            for (int j = 0; j < col2; j++){
               array2[i][j] = (i + 1) * j;
               printf("%d\t", array2[i][j]); 

            }
        }   
        printf("\n");
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < col2; j++){
            crr1[i][j]=0;
                for(int i = 0; i < row1; i++){  
                    for(int j = 0; j < col2; j++){  
                        sum = 0;
                        for(int k = 0; k < col1; k++){
                           sum = sum + array1[i][k] * array2[k][j];
                           crr1[i][j] = sum;
                        }
                    }
                } 
            }
        }                
        printf("\nThe multiplication of two Array is : \n");
        for(int i = 0; i < row1; i++){
        printf("\n");
        for(int j = 0; j < col2; j++)
           printf("%d\t",crr1[i][j]);
        }
    printf("\n\n");
    }
    else
        printf("NO\n");
    return 0;
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
