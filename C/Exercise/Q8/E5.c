#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int StrStat(char []);

int main(){

    char input[100];
    fgets(input, sizeof input, stdin);	
    StrStat(input);

}
int StrStat(char input[]){

    int v_alpha = 0, digit = 0, charac = 0, i = 0, space = 1;

    while(input[i] != '\0'){
        if (input[i] == ' ' || input[i] == '.' || input[i] == '?' || input[i] == '!')
            space++;
        if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
            v_alpha++;
        else if(input[i] >= '0' && input[i] <= '9')
            digit++;
        else
            charac++;
        i++;
    }
    printf("%d\n", v_alpha);
    printf("%d\n", charac - space);
    printf("%d\n", digit);
}