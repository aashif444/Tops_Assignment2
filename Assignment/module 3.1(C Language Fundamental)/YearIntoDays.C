//Year into days and days into year
#include<stdio.h>
int main(){
    int year,days;
printf("Enter the year to know days: ");
scanf("%d",&year);
printf("%d",year*365);
printf("\nEnter the days to know year: ");
scanf("%d",&days);
printf("%f",(float)days/365);

return 0;
}