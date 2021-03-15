#include <stdio.h>

int main(){

    // 24 = 00011000 -> Two's complement : 11100111 +
                                        // 00000001
                                        // = 11101000 -> -24

    // ~24 = 11100111 -> One's complement                                    

    printf("\nOutput: %d\n", ~24);    // ~24 = 11100111 -> One's complement   ->  ~N = -(N + 1)  <-   ~24 = -(24 + 1)                         

    printf("\nOutput: %d\n", ~-24);   //  ~-24 = -(-24 + 1) -> ~-24 = 23

    return 0;
}
