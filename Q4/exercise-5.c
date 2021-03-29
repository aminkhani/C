#include <stdio.h>
void DayCal(int *, int *, int *);

int main(){

    printf("\n----- Calculate Year-Month-Day -----\n\n");
    int year, month, day;
    printf("Enter The Days: ");
    scanf("%d", &day);
    int input = day;
    DayCal(&day, &year, &month);
    printf("\n%d Days Is %d Year %d Month %d Day\n", input, year, month, day);

}

void DayCal(int *day, int *year, int *month){

    *year = *day / 365;
	*day = *day - (365 * *year);
    *month = *day / 30;
	*day = *day - (30 * *month);
}