#include <stdio.h>

void CalSeries(int *,float *);

int main(){
	int input;
	float sum;
	printf("Enter The N: ");
	scanf("%d", &input);
	CalSeries(&input, &sum);
	printf("The Result Is : %.2f\n", sum);
}
void CalSeries(int *input, float *sum){
	int x = 1;
	for(int i = 1; i <= *input; i++){
		x *= i;
		float y;
		y = x;
		y /= (float)i + 1;
		*sum += y;
	}
}


