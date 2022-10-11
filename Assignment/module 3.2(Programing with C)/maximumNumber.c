#include<stdio.h>
void main(){
int x,y,i,j;
printf("enter any four number: ");
scanf("%d%d%d%d",&x,&y,&i,&j);
if(x>y&&x>i&&x>j)
{printf("This is greater:%d",x);}
else if(y>x&&y>i&&y>j)
{printf("This is greater:%d",y);}
else if(i>x&&i>y&&i>j)
{printf("This is greater:%d",i);}
else if(j>x&&j>y&&j>i)
{printf("This is greater:%d",j);}
//else
//{printf("not define");}

}