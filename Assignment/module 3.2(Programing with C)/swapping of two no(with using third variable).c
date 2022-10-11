// swaping of two number(with using third variable)
#include<stdio.h>
int main(){ 

int a=10,b=20,temp;

temp=a;
a=b;
b=temp;
//printf("a:%d",a);(also write like this)
//printf("\nb:%d",b);(also wrie like this)
printf("a:%d\nb:%d",a,b);
return 0;


}