//string:find out length of string without using strlen
#include<stdio.h>
#include<string.h>
void main(){
    int count=0,i=0;
char a[100];
printf("enter the string: ");
gets(a);
while (a[i]!='\0')
{
    count++;
    i++;
}
printf("the lengthe of string: %d",count++);



}