#include <stdio.h>

int main(){

    int min, hour;
    printf("Enter the time in minutes: ");
    scanf("%d", &min);

    hour = min / 60;
    min %= 60;

    printf("Time is %d Hour and %d Minutes\n", hour, min);
    
    return 0;
}