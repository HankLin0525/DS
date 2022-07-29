#include <stdio.h>
#include <stdlib.h>

//計算移動次數
// int total_step = 0;

int main()
{
    int n;
    char tower_left = 'A';
    char tower_mid = 'B';
    char tower_right = 'C';

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    Hanoi(n, tower_left, tower_mid, tower_right);

    // printf("Total moving steps: %d \n", total_step);
    system("PAUSE");
    return 0;
}

// n => disk 數
// a => 來自哪裡
// b => 暫存處
// c => 目的地
void Hanoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        /*單位動作，只有一個disk的時候，就直接把disk移到目的地就好 */
        printf("move disk %d from %c to %c \n", n, a, c);
        // total_step++;
    }
    else
    {
        /*分成三階段，先把靠上的n-1個disk移到暫存處 */
        Hanoi(n - 1, a, c, b);

        /*第二，把第n個(最底下的)disk移到目的地 */
        printf("move disk %d from %c to %c \n", n, a, c);
        // total_step++;

        /*最後，把在暫存處的第1到n-1個disk放到目的地 */
        Hanoi(n - 1, b, a, c);
    }
}