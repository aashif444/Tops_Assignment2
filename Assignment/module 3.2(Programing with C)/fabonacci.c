// fabonacci
#include <stdio.h>
void main()
{
    int x = 0, y = 1,fabo,n;
    printf("enter the no to know fabonacci series: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        fabo = x + y;
        x = y;
        y = fabo;
        printf("\t%d", fabo);
    
    }
    }