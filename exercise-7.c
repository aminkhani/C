#include <stdio.h>
int main(){
    int arr1[100], fr1[100];
    int input, ctr;
    scanf("%d", &input);
    for(int i = 0; i < input; i++){
        scanf("%d", &arr1[i]);
        fr1[i] = -1;
    }
    for(int i = 0; i < input; i++){
        ctr = 1;
        for(int j = i + 1; j < input; j++){
            if(arr1[i] == arr1[j]){
                ctr++;
                fr1[j] = 0;
            }
        }
        if(fr1[i] != 0)
            fr1[i] = ctr;
    }
    for(int i = 0; i < input; i++){
        if(fr1[i]!= 0)
            printf("%d:%d\n", arr1[i], fr1[i]);
    }
    return 0;
}