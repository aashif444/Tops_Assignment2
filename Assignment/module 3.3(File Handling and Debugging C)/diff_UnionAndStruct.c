/*Union: it is same like a structure but union contain less memory than structure,
and also union gives the same address of all datatypes.
And if you use union always keep it mind put the main printf after scanf*/
#include<stdio.h>
union student
{
    int rollno;
    char name[100];
};
void main(){
    union student s;
printf("\nenter the roll no: ");
scanf("%d",&s.rollno);
printf("student roll no: %d",s.rollno);
printf("\n\nenter the name: ");
scanf("%s",&s.name);
//printf("student roll no: %d",s.rollno);
printf("student name: %s",s.name);
printf("\naddress: %d",&s.rollno);
printf("\naddress: %d",&s.name);
}