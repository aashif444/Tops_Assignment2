/*write a program to take two array input from user and sort 
them in ascending or descending order as per user's choice*/
#include<stdio.h>
void main(){
int temp,a[7];
printf("enter the numbers: ");
//scanf("%d",&n);
for (int i = 0; i <7; i++)
{scanf("%d",&a[i]);}
for(int i=0;i<7;i++)
{
    for(int j=i+1;j<7;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }}
    printf("\bascending order: ");
    for (int  i = 0; i <7; i++)
    {
        printf("%d ",a[i]);
    }

    
    int b[7];
    printf("\nenter the element: ");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if (b[i]<b[j])

            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
            
        }
    }
    printf("\ndescending order: ");
for(int i=0;i<7;i++)
{printf("%d ",b[i]);}

}




