//write a program to find the addition and subtraction of two matrix using 2-D array.
#include<stdio.h>
void main(){
int a[2][3],b[2][3];
printf("enter the matrix: ");
for(int i=0;i<2;i++)
{for(int j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf("the matrix is\n" );
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {printf("%d ",a[i][j]);}
    printf("\n");
}
printf("enter the second matrix: ");
for(int i=0;i<2;i++)
{for(int j=0;j<3;j++)
{scanf("%d",&b[i][j]);}
}
printf("the second matrix is\n");
for(int i=0;i<2;i++)
{for(int j=0;j<3;j++ )
{printf("%d ",b[i][j]);}
printf("\n");
}
printf("the sum of matrix:\n");
for(int i=0;i<2;i++)
{for(int j=0;j<3;j++ )
{printf("%d ",a[i][j]+b[i][j]);}
printf("\n");
}
printf("the sub of matrix:\n");
for(int i=0;i<2;i++)
{for(int j=0;j<3;j++ )
{printf("%d ",a[i][j]-b[i][j]);}
printf("\n");
}
}