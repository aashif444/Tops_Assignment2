//FACTORIAL
#include<stdio.h>
void main(){
    int n,fact=1; 
    printf("Enter the value: ");
    scanf("%d",&n);
for(int i=1;i<=n;i++)
{ fact=fact*i;  printf("\n%d the factorial is:%d",i,fact);}
//{printf("\n%d",fact);}


}