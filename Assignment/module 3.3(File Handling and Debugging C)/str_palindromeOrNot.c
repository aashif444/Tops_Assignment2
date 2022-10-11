//write a reverse program in c to find out the string is palindrome or not
//what is palindrome: the word looking same from front and backside
#include<stdio.h>
#include<string.h>
void main(){
char a[100];
char b[100];
printf("enter the 1st string: ");
gets(a);
//printf("enter the 2nd string: ");
//gets(b);
printf("the copy of string(b) is : %s",strcpy(b,a));
printf("\nthe reverse of string: %s",strrev(a));
if(strcmp(a,b)==0)
{printf("\nthis is a palindrome");}
else printf("\nthis is not palindrome");

}