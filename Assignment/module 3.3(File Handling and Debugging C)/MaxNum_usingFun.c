//write a progran to find out the max number from given array using function
#include<stdio.h>
void maxi(){
int a[100];
int n,i,max;
printf("enter the number: ");
scanf("%d",&n);
printf("enter the value:\n ");
for (int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
max=a[0];
for (int i = 0; i <n; i++)
{
    //max=a[0];
    if(a[i]>max)
    {
    max=a[i];
    }
    //printf("maximum value: %d",max);
}
printf("maximum value: %d",max);
}
void main(){
maxi();

}