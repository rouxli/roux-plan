#include <stdio.h>

int main()
{
    int n;
    double divident,divisor;
    double sum = 0.0;
    int i;
    double t;

    scanf("%d", &n);
    divident = 2;
    divisor = 1;
    for ( i = 1; i <= n; i++ ) {
        sum += divident / divisor;
        t = divident;
        divident = divident + divisor;
        divisor = t;
    }
    printf("%.2f\n",sum);

    return 0;
}