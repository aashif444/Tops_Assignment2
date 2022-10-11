// Sinmple interest=suppose we have 300000 rupees,and give it to the another person
// for 1 year at the interest rate 7.4
// so what is the total interest in 5 year
// formula=(pnr)/100
#define rate 7.4
#include <stdio.h>
int main()
{

    float p, n;
    printf("Enter the p:");
    scanf("%f", &p);
    printf("Enter the n:");
    scanf("%f", &n);
    printf("Simple interest:%f", (rate * p * n) / 100);
    return 0;
}