#include<stdio.h>
int main(){ 
int n,last,sum;
printf("Enter any number: ");
scanf("%d",&n);
last=n%10;
while(n>9)
{n=n/10;
}  sum=n+last;
printf("The first and last number: %d",sum);

return 0;

}