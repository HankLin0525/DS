#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 參考: https://www.youtube.com/watch?v=OFnkEbsSmFc

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void Perm(char *input, int i, int n)
/* 印出list[i] ~ list[n] 之排列
可想成讓n個資料輪流當頭，其後接n-1個資料之排序
*/
{
    if(i == n)
    {
        /*當i = n時，印出當時list的內容 */
        printf("%s \n", input);
    }
    else
    {
        for(int j = i; j <= n; j++)
        {   
            /* 讓開頭的元素與第i ~ n個元素交換
            每次讓第j個元素固定當頭，再去做底下的排序
            做完後把順序調回來
            */
            swap(input + i, input + j);
            Perm(input, i+1, n);
            swap(input + i, input + j);
        }
    }
}

int main()
{
    int n;
    char input[100];
    printf("Enter the String:");
    scanf("%s", input);
    n = strlen(input);
    printf("All possible permutations: \n");
    Perm(input, 0, n-1);

    system("pause");
    return 0;
}

