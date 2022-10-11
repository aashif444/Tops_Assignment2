//multiplication of matrix
#include<stdio.h>
void main(){
int a[2][3]={{1,2,3},{4,5,6}};
int b[3][2]={{1,2},{3,4},{5,6}};
int c[2][2],sum=0;
int i,j,k;
for(int k=0;k<2;k++)
{for(int i=0;i<2;i++)
{for(int j=0;j<3;j++)
c[i][j]=sum;
{sum=sum+a[i][k]*b[j][k];}
c[i][j]=sum;
sum=0;
}
}
printf("the multiply of matrix is: \n");
for(int i=0;i<2;i++)
{for(int j=0;j<3;j++)
{printf("%d ",c[i][j]);}
printf("\n");
}
}