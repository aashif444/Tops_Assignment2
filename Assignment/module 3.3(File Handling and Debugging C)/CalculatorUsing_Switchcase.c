//Write a program of addition,substraction,multiplication,and division using switch case
#include<stdio.h>
void main(){
    int a,b;
    char ch;
    printf("enter the first value: ");
    scanf("%d",&a);
    printf("enter the user's choice operation: ");
    scanf("%s",&ch);
    printf("enter the second value: ");
    scanf("%d",&b);
    switch (ch)
    {
    case'+':
        printf("Addition: %d",a+b);
        break;
        case'-':
        printf("subtraction: %d",a-b);
        break;
        case'*':
        printf("multiplication: %d",a*b);
        break;
        case'/':
        printf("division: %f",(float)a/b);
        break;
    
    default:
    printf("invalid operator");
        break;
    }

}