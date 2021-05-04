#include <stdio.h>
#include <time.h>
#include <math.h> // both way ic correct

int main(){
    clock_t begin = clock();
    int i;
    for (i = 0; i < 100000000; i++){

    }
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    clock_t begin1 = clock();
    register int j;
    for (j = 0; j < pow(10, 8); j++){

    }
    clock_t end1 = clock();
    double time_spent1 = (double)(end1 - begin1) / CLOCKS_PER_SEC;
    printf("int i => %.4f secend\n", time_spent);
    printf("register int i => %.4f secend\n", time_spent1);
}