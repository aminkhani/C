#include <stdio.h>

int main(){

    // int avar = 1, bvar = 2, result;
    // if (avar == 1){
    //     if (bvar == 2)
    //         result = 3;
    //     else
    //         result = 5;  
    // }
    // else
    //     result = 0;
    // printf("%d\n", result);    
    
    int avar = 1, bvar = 2, result;
    result = (avar == 1) ? ((avar == 1 && bvar == 2) ? 3 : 5) : 0;;
    printf("%d\n", result);

    return 0;
}