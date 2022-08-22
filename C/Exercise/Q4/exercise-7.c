#include <stdio.h>

void lcm(int *, int *, int *,int *);

int main(){
	printf("\n----- Calculate K.M.M -----\n");
	int input, input1, kmm, bmm;
	printf("Enter The First Number: ");
	scanf("%d", &input);
	printf("Enter The Secend Number: ");
	scanf("%d", &input1);
	lcm(&input, &input1, &kmm, &bmm);
	printf("\nThe K.M.M Is : %d\n", kmm);
}
void lcm(int *input, int *input1, int *kmm, int *bmm){

	for (int i = *input; i >= 1; i--){
		if(*input % i == 0 && *input1 % i == 0){
			*bmm = i;
			break;
		}	
	}
	*kmm = *input * *input1 / *bmm;
}
