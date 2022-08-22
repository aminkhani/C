#include <stdio.h>  
int CntSort(int [], int , int , int []);

int main(){
    int n, k = 0, array[50], copy_array[50];
    printf("Input number of elements:  ");
    scanf("%d", &n);
    printf("Input the array elements one  by one: \n");
    for (int i = 1; i <= n; i++){
        scanf("%d", &array[i]);
        if (array[i] > k) 
            k = array[i];
    }
    CntSort(array, k, n, copy_array);
    printf("The Sorted array is : ");
    for (int i = 1; i <= n; i++)
        printf("%d  ", copy_array[i]);
    printf("\n");
    return 0;
}

int CntSort(int a[], int k, int n, int copy_array[]){
    int b[15], c[100];
    for (int i = 0; i <= k; i++)
        c[i] = 0;

    for (int j = 1; j <= n; j++)
        c[a[j]] = c[a[j]] + 1;

    for (int i = 1; i <= k; i++)
        c[i] = c[i] + c[i-1];

    for (int j = n; j >= 1; j--){
        b[c[a[j]]] = a[j];
        c[a[j]] = c[a[j]] - 1;
    }
    for (int i = 1; i <= n; i++)
        copy_array[i] = b[i];
}
