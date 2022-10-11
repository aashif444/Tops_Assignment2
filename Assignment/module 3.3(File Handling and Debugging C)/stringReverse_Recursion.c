// WAP to find reverse of string using recursion.
#include <stdio.h>
void func()
{

    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        func();
        printf("%c", c);
    }
}
void main()
{
    printf("Enter a any string:");
    func();
}