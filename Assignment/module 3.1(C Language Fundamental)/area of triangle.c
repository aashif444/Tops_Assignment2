//Area of rectangle, as we know that half*base*altitude, and also know that
//half is a constant so write like this #define half 0.5
#define half 0.5
#include<stdio.h>
int main(){  

float base,altitude;
printf("Enter the base:");
scanf("%f",&base);
printf("Enter the altitude:");
scanf("%f",&altitude);
printf("Area of rectangle:%f",half*base*altitude);

return 0;

}