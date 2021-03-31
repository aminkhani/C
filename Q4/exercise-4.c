#include <stdio.h>
#include <math.h>

void RecCal(float *, float *, float *, float *, float *);

int main(){

    float length, width, perimeter, area, diameter;

    printf("Enter The Length : ");
    scanf("%f", &length);
    printf("Enter The Width : ");
    scanf("%f", &width);

    RecCal(&length, &width, &perimeter, &area, &diameter);
    printf("Perimeter Is : %.2f\n", perimeter);
    printf("Area Is : %.2f\n", area);
    printf("Diameter Is : %.2f\n", diameter);

}
void RecCal(float *length, float *width,float *perimeter,float *area,float *diameter){

    *perimeter = 2 * (*length + *width);
    *area = (*length * *width);
    float temp;
    temp = (*length * *length) + (*width * *width);
    *diameter = sqrt(temp);
}