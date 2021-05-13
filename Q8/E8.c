#include <stdio.h> 
void SelectMidStr(char [], int );
int srtlen(char []);
int main(){
    char input[100];
    int n;
    gets(input);
    n = srtlen(input);
    SelectMidStr(input, n);
}
void SelectMidStr(char input[], int n){
    int len = n;
    int len_2 = len / 2;
    char cop[100];
    if(len % 2 == 0){
        if(len_2 % 2 == 0){
            int k = 0;
            for(int i = 1; i <= len_2 / 2; i++){
                cop[k] = input[len_2 / 2];
                k++;
            }
            cop[len_2 / 2 - 1] = input[len / 2 - 1];
            k = len_2 / 2;

            for(int i = 1; i <= len_2 / 2; i++){
                cop[k] = input[(len_2 - 1) + i];
                k++;
            }
            for(int i = 0; i < len_2; i++)
                printf("%c", cop[i]);
        }
        if(len_2 % 2 == 1){
            int k = 0;
            for (int i = 1; i <= len_2 / 2; i++){
                cop[k] = input[len_2 / 2];
                k++;
            }
            cop[len_2 / 2] = input[len / 2 - 1];
            k = (len_2 / 2) + 1;
            for(int i = 1; i <= len_2 / 2; i++){
                cop[k] = input[(len_2 - 1) + i];
                k++;
            }
            for(int i = 0; i < len_2; i++)
                printf("%c", cop[i]);
        }
    }  
    if(len % 2 == 1){
        if(len_2 % 2 == 0){
            int k = 0;
            for(int i = 1; i <= len_2 / 2; i++){
                cop[k] = input[len_2 / 2];
                k++;
            }
            cop[len_2 / 2] = input[len / 2];
            k = (len_2 / 2) + 1;
            for(int i = 1; i <= len_2 / 2; i++){
                cop[k] = input[(len_2) + i];
                k++;
            }
            for(int i = 0; i < len_2; i++)
            printf("%c", cop[i]);
        }
        if (len_2 % 2 == 1){
            int k = 0;
            for(int i = 1; i <= len_2 / 2; i++){
                cop[k] = input[len_2 / 2 + 1];
                k++;
            }
            cop[len_2 / 2] = input[len / 2];
            k = (len_2 / 2) + 1;
            for(int i = 1; i <= len_2 / 2; i++){
                cop[k] = input[(len_2) + i];
                k++;
            }
            for(int i = 0; i < len_2; i++)
                printf("%c", cop[i]);
        }
    }
    printf("\n");  
}
int srtlen(char input[]){
    int i = 0;
    while (input[i] != '\0')
        i++;
    return i;
}