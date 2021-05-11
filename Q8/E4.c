 #include <stdio.h>
 #include <string.h>

char *strcat(char *, const char *);
char *strncat(char *, const char * , size_t );

int main(){

    char input1[100], input2[100], input1_copy[100], input2_copy[100];
    int n;

    printf("String 1 : ");
    gets(input1);
    for (int i = 0; i < strlen(input1); i++)
        input1_copy[i] = input1[i];

    printf("String 2 : ");
    gets(input2);
    for (int i = 0; i < strlen(input2); i++)
        input2_copy[i] = input2[i];
    
    printf("Enter N : ");
    scanf("%d", &n);

    strcat(input1, input2);
    printf("STRCAT : %s\n", input1);

    strncat(input1_copy, input2_copy, n);
    printf("STRNCAT : %s\n", input1_copy);

}
char *strcat(char *dest, const char *src){
    int i,j;
    for (i = 0; dest[i] != '\0'; i++);
    for (j = 0; src[j] != '\0'; j++)
        dest[i+j] = src[j];
    dest[i + j] = '\0';

    return dest;
}
char *strncat(char *dest, const char *src, size_t num){
    char *ptr = dest + strlen(dest);
    while (*src != '\0' && num--)
        *ptr++ = *src++;
    *ptr = '\0';
    return dest;
}
