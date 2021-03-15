#include <stdio.h>

int main(){

    int min, h, s;
    printf("Enter The Hour: ");
    scanf("%d", &h);
    printf("Enter The Minute : ");
    scanf("%d", &min);
    s = (h * 3600) + (min * 60);
    printf("Time becomes seconds is : %ds\n", s);
 
    return 0;
}