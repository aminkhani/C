#include <stdio.h>

int i = 10;
int j = 1;

void swap(int , int );
int f1(int );
void f2(int , int * );

int main(){
    {
        int i = 1;
        int j = 10;

        swap(i, j); // i = 1 & j = 10
        printf("1) i = %d  j = %d\n", i, j);

        j = f1(i++); // i = 1 
        printf("2) i = %d  j = %d\n", i, j);

        f2(f1(i), &j); // i = 7 & j = 6
        printf("3) i = %d j = %d\n", i, j);
    }
    j = f1(i / 2);
    printf("4) i = %d j = %d\n", i, j);

    f2(f1(i), &j);
    printf("5) i = %d j = %d\n", i, j);

    return 0;                                                                              
}

void swap(int a, int b){
    int temp;
    temp = b;
    b = a;
    a = temp;
}

int f1(int x){
    static int j = 5;
    i++;
    j += x;
    return j;
}

void f2(int x, int *p){
    *p += x;    
    *p = (*p > 20) ? 20 : *p++;
}