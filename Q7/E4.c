#include <stdio.h>
int ToggleChar(char );

int main(){
    char input;
    printf("Enter Charechter: ");
    scanf("%c", &input);
    ToggleChar(input);
}
int ToggleChar(char input){
    input = (input >= 'A' && input <= 'Z') ? printf("your chareter is : %c\n", input + 32): (input >= 'a' && input <= 'z') ? printf("your chareter is : %c\n", input - 32): printf("It is not character !!!\n");
}