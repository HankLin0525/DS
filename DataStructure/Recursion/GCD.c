#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("%d", GCD(num1, num2));

    return 0;
}

// 求兩數之最大公因數，原理: 輾轉相除法
int GCD(int A, int B)
{
    if (A % B == 0)
        return B;
    else
        return GCD(B, A % B);
}