#include <stdio.h>
void DayCal(int *,int *,int *);

int main(){

	int Day, Month, Year;
	int temp1, temp2, temp3;
	printf("Enter The Day: ");
	scanf("%d", &Day);
	temp1 = Day;
	printf("Enter The Month: ");
	scanf("%d", &Month);
	temp2 = Month;
	printf("Enter The Year: ");
	scanf("%d", &Year);
	temp3 = Year;
	DayCal(&Day, &Month, &Year);
	printf("%d Year, %d Month, %d Day = %d Day\n", temp3, temp2, temp1, Day);
}
void DayCal(int *Day, int *Month, int *Year){
	*Year = *Year * 365;
	*Month *= 30;
	int tmp;
	tmp = *Day + *Month+ *Year;
	*Day = tmp;
}
