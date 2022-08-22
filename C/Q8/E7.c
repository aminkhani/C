#include <stdio.h>
#include <string.h>
int main(){
    char input[50], input1[50];
    gets(input);
    gets(input1);
    int count = 0, found, len, sr_len;
    len = strlen(input);
    sr_len = strlen(input1);
    for(int i = 0; i <= len - sr_len; i++){
        found = 1;
        for(int j = 0; j < sr_len; j++){
            if(input[i + j] != input1[j]){
                found = 0;
                break;
            }
        }
        if(found == 1)
            count++;     
    }
    printf("%d\n", count);
}

