//monday to sunday using switch case
#include<stdio.h>
int main(){
int no;
printf("Enter the no (1 to 7):");
scanf("%d",&no);
switch(no)
{
    case 1:
    {printf("Monday");}
    break;
    case 2:
    {printf("Tuesday");}
    break;
    case 3:
    {printf("Wednesday");}
    break;
    case 4:
    {printf("Thursday");}
    break;
    case 5:
    {printf("Friday");}
    break;
    case 6:
    {printf("Saturday");}
    break;
    case 7:
    {printf("Sunday");}
    break;
    default:
    {printf("Please enter the valid number");}
    break;}
    return 0;
    }