//Write a program to print number in reverse order e.g : number=64728 then reverse=82746
#include<stdio.h>
int main(){
/*int x=64728,rem;
while(x!=0)
{rem=x%10;
x=x/10;
printf("%d",rem);}*/
int i=64728,rem;
for(int i=64728;i!=0;)
{rem=i%10;
i=i/10;
printf("%d",rem);}

}