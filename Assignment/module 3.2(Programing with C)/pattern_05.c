//right angle triangle with increasing number
#include<stdio.h>
void main(){ 
int k=1;    
for(int row=1;row<=5;row++)
{for(int col=1;col<=row;col++)
{printf("%d",k++);}
printf("\n");
}
}