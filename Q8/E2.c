#include <stdio.h>
int CntWorlds(char []);

int main(){
    char input[100];
    fgets(input, sizeof input, stdin);
    CntWorlds(input);
}   

int CntWorlds(char input[]){
    int i = 0, k = 0;
    while (input[i] != '\0'){    
        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')){
            k++;
        }
        i++;
    }    
    printf("%d\n", k);
}