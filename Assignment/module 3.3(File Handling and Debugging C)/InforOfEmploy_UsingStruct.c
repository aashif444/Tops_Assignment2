//Write a program of structure employee that provides the following
//information -print and display empno, empname, address and age
#include<stdio.h>
struct employe{
int empno;
char empname[100];
char empaddress[100];
float empage;
}e[100];

void main(){
    int n,i;
    printf("enter the number: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {printf("enter the employe no: ");
    scanf("%d",&e[i].empno);
    printf("enter the employe name: ");
    scanf("%s",&e[i].empname);
    printf("enter the employe address: ");
    scanf("%s",e[i].empaddress);
    printf("enter the employe age: ");
    scanf("%f",&e[i].empage);    
    }
    for(int i=0;i<n;i++)
    {
        printf("\n\nEmploye number is: %d",e[i].empno);
        printf("\nEmploye name is: %s",e[i].empname);
        printf("\nEmploye address is: %s",e[i].empaddress);
        printf("\nEmploye age: %f",e[i].empage);
    }


}