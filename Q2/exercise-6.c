#include <stdio.h>

int main(){

    int a = -24; // First Way 
    printf("first way : %d\n", a);

    int b = 24; // Secend Way Is : We Can Use Two's Complement -> for Example : 8 = 0001000 ->
                                                                            // ~8 = 1110111 + 
                                                                             //     0000001 -> 1111000 = -8
    printf("secend way: %d\n", ~b + 1);


    return 0;
}
