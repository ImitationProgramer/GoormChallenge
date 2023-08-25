#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 0, b = 0, board[200][200] = {
                          0,
                      };
    int resultboard[200][200] = {
        0,
    };
    scanf("%d %d", &a, &b);
    char temp;
    for (int i = 1; i <= a; i++)
    {
        printf("\n");
        for (int j = 1; j <= a; j++)
        {
            scanf("%c", &temp);
            if (temp == '#')
            {
                board[i][j] = -1;
                resultboard[i][j] = -1;
            }
            else if (temp == '@')
            {
                board[i][j] = -2;
                resultboard[i][j] = -2;
            }
            else
            {
                board[i][j] = atoi(&temp);
                resultboard[i][j] = atoi(&temp);
            }
        }
    }
    for (int i = 0; i <= a + 1; i++)
    {
        board[0][i] = -3;
        board[i][0] = -3;
        board[a + 1][i] = -3;
        board[i][a + 1] = -3;
        resultboard[0][i] = -3;
        resultboard[i][0] = -3;
        resultboard[a + 1][i] = -3;
        resultboard[i][a + 1] = -3;
    }
    int x, y;
    for (int i = 0; i < b; i++)
    {
        scanf("%d %d", &x, &y);
        if (board[x][y] == -2)
            board[x][y] += 2;
        else if (board[x][y] == -1 || board[x][y] == -3)
            continue;
        else
        {
            board[x][y]++;
            if (board[x - 1][y] == -2)
                board[x - 1][y] += 2;
            else if (board[x - 1][y] == -1 || board[x - 1][y] == -3)
                continue;
            else
                board[x - 1][y]++;

            if (board[x + 1][y] == -2)
                board[x + 1][y] += 2;
            else if (board[x + 1][y] == -1 || board[x + 1][y] == -3)
                continue;
            else
                board[x + 1][y]++;

            if (board[x][y - 1] == -2)
                board[x][y - 1] += 2;
            else if (board[x][y - 1] == -1 || board[x][y - 1] == -3)
                continue;
            else
                board[x][y - 1]++;

            if (board[x][y + 1] == -2)
                board[x][y + 1] += 2;
            else if (board[x][y + 1] == -1 || board[x][y + 1] == -3)
                continue;
            else
                board[x][y + 1]++;
        }
    }
    for (int i = 1; i <= a; i++)
        for (int j = 1; j <= a; j++)
            if (resultboard[i][j] == -2)
                board[i][j] += 2;
    for (int i = 0; i <= a + 1; i++)
    {
        printf("\n");
        for (int j = 0; j <= a + 1; j++)
            printf("%d ", board[i][j]);
    }
    return 0;
}