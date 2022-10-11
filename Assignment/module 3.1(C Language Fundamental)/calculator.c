#include<stdio.h>
int main(){
int a,b;

printf("Enter a:");
scanf("%d",&a);

printf("Enter b:");
scanf("%d", &b);

printf("add:%d", a+b);
printf("\nsub:%d", a-b);
printf("\nmul:%d", a*b );
printf("\ndiv:%f",(float) a/b);
printf("\nmod:%d", a%b);

return 0;

}