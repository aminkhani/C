// #include <stdio.h>
// #include <string.h>
// int RevStr(char [], char []);

// int main(){

//     char copy_input[100];
//     char input[100];
//     gets(input);
//     int l = strlen(input);
//     RevStr(input, copy_input);
//     for (int i = 0; i <= l; i++)
//         printf("%c", copy_input[i]);
//     printf("\n");
// }
// int RevStr(char input[], char copy_input[]){
//     int l, i, j = 0;
//     l = strlen(input);
//     for(int i = l ; i >= 0; i--){
//         copy_input[j] = input[i];
//         j++;
//     }
//     copy_input[l + 1] = '\0';
// }

#include <stdio.h>
#include <string.h>
void RevStr(char *, int, int);

int main(){
   char input[100];
   gets(input);
   RevStr(input, 0, strlen(input)-1);
   printf("%s\n", input);
}

void RevStr(char *input, int begin, int end){
   char c;
   if (begin >= end)
      return;
   c = *(input + begin);
   *(input + begin) = *(input + end);
   *(input + end) = c;
   RevStr(input, ++begin, --end);
}

