#include <stdio.h>
int main(){
	int spc, input, t = 1, number;
	int arr[] = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55};
			//   0  1  2  3  4   5   6   7   8   9  10
	printf("Input number: ");
	scanf("%d", &input);
	for (int i = 0; i < 100; i++){
		if (input == arr[i])
			number = i;
	}
	spc = (number) - 1;
	for(int i = 1; i <= (number); i++){
		for(int k = spc; k >= 1; k--)
			printf(" ");
		for(int j = 1; j <= i; j++){
			printf("%d", t++);
			printf(" ");
		}
	printf("\n");
	spc--;	
	}
	return 0;
}