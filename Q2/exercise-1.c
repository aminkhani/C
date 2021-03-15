#include <stdio.h>

int main(){

	float input_C;
	float input_F;
	printf("Enter the temperature in degrees Celsius : ");
	scanf("%f", &input_C);
	input_F = ((input_C * 1.8) + 32);
	printf("The temperature is in Fahrenheit: %.2f\n", input_F);

return 0;
}
