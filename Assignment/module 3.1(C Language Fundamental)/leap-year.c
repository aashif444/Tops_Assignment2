//leap year
#include<stdio.h>
void main(){ 
int n;
printf("Enter the years: ");
scanf("%d",&n);
if(n%400==0||n%4==0 && n%100!=0)
{printf("this is a leap year");}
else
{printf("this is not a leap year");}

}