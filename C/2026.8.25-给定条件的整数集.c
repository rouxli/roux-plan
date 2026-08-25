#include <stdio.h>

// 给定条件的整数集
// 输入一个整数 a，用 a、a+1、a+2、a+3 这四个数字组成所有
// 三位且各位互不相同的整数并输出（每个数字在同一数中最多用一次）
int main()
{
    int a;
    scanf("%d", &a);

    int i = a, j = a, k = a;
    while (i <= a + 3) {
        j = a;
        while (j <= a + 3) {
            k = a;
            while (k <= a + 3) {
                if (i != j && i != k && j != k) {
                    printf("%d%d%d ", i, j, k);
                }
                k++;
            }
            j++;
        }
        i++;
    }
    printf("\n");

    return 0;
}
