#include <stdio.h>  
int main(){    
    int fact=1, input;    
    scanf("%d", &input);    
    for(int i = 1; i <= input; i++){    
        fact = fact * i;    
    } 
    printf("%d\n", fact);  
return 0;  
} 