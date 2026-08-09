#include <stdio.h>

int main()
{
    int num = 0;

    scanf("%d", &num);

    int a = num / 100;
    int b = num % 100 / 10;
    int c = num % 10;
    
    printf("%d", c*100 + b*10 + a);

    return 0;
}