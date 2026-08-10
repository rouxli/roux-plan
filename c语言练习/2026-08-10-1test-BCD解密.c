#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);

    // ===== 解法1：数学拆分法 =====
    // BCD每4位存一个十进制数字
    // 高4位(十位数) = num / 16
    // 低4位(个位数) = num % 16
    // 结果 = 十位数×10 + 个位数
    {
        int a = num / 16;
        int b = num % 16;
        printf("解法1（数学拆分）：%d\n", a * 10 + b);
    }

    // ===== 解法2：直接按十六进制输出 =====
    // %x 让printf把数当十六进制打印
    // 人眼看到的就是BCD编码的真实值
    // 局限：只能看，程序里拿不到这个值去运算
    printf("解法2（%%x输出）：0x%x\n", num);

    return 0;
}
