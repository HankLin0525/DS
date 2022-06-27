#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("%d", Fib(n));

    return 0;
}

// recursion
int Fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return Fib(n - 1) + Fib(n - 2);
}

// non-recursion
// int Fib_2(int n)
// {
//     int a = 0, b = 1, c;
//     if (n == 0)
//         return 0;
//     else if (n == 1)
//         return 1;
//     else
//     {
//         for (int i = 2; i <= n; i++)
//         {
//             c = a + b;
//             a = b;
//             b = c;
//         }
//         return c;
//     }
// }

// D.P.
// int Fib_3(int n)
// {
//     int A[n + 1];
//     A[0] = 0;
//     A[1] = 1;

//     if (n == 0)
//         return 0;
//     else if (n == 1)
//         return 1;
//     else
//     {
//         for (int i = 2; i <= n; i++)
//         {
//             A[i] = A[i - 1] + A[i - 2];
//             return A[i];
//         }
//     }
// }