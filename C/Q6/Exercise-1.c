#include <stdio.h>
void Sort(int []);
int n = 10;
int main(){
    int array[n];
    printf("Input %d elements in the array :\n", n);
    for(int i = 0; i < n; i++){
        printf("element - %d : ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nElements of array in main function Befor Sort function:\n");
    for (int i = 0; i < n; i++)
        printf("%d  ", array[i]);
    printf("\n");

    Sort(array);

    printf("\nElements of array in main function After Sort function:\n");
    for (int i = 0; i < n; i++)
        printf("%d  ", array[i]);
    printf("\n");
    /// Javabe Soal Dar PDF : Bale Tasir Migozarad Be Dalile In Ke Arrya Niz Yek Noii Az Pointer Ha Hastand 
}
void Sort(int array[n]){
    int tmp;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(array[j] < array[i]){
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }       
        }
    }
    printf("\nElements of array in sorted in Sort function:\n");
    for(int i = 0; i < n; i++)
        printf("%d  ", array[i]);
    printf("\n");
}
