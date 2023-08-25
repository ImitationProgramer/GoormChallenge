#include <stdio.h>
int main()
{
    int board[1002][1002] = {
        0,
    };
    int a, b, result = 0;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a; i++)
        for (int j = 1; j <= a; j++)
            scanf("%d", &board[i][j]);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            int cnt = 0;
            if (board[i][j] == 0)
                for (int p = 0; p < 3; p++)
                    for (int q = 0; q < 3; q++)
                        cnt += board[i - 1 + p][j - 1 + q];
            if (cnt == b)
                result++;
        }
    }
    printf("%d", result);
    return 0;
}
