#include <stdio.h>
int main()
{
    int n, sum = 0, r;
    printf("enter any four number: ");
    scanf("%d", &n);
    // r=n%10;
    // sum=sum+r;
    // n=n/10;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("%d",sum);
}