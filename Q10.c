#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    bool isTrue = true;
    int n, boardresult[201][201] = {
               0,
           };
    char board1[201][201][3];
    scanf("%d", &n);
    int a, b;
    int xg, yg, xp, yp;
    scanf("%d %d", &a, &b);
    xg = a - 1;
    yg = b - 1;
    scanf("%d %d", &a, &b);
    xp = a - 1;
    yp = b - 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%s", board1[i][j]);

    // for (int i = 0; i < n; i++)
    // {
    //     printf("\n");
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%s", board1[i][j]);
    //     }
    // }
    while (isTrue)
    {
        // 구름이
        boardresult[xg][yg] = 1;
        char way = board1[xg][yg][1];
        int amount = board1[xg][yg][0] - '0';
        switch (way)
        {
        case 'U':
            while (amount > 0)
            {
                xg--;
                if (xg < 0)
                    xg += n;
                if (boardresult[xg][yg] != 1)
                {
                    amount--;
                    boardresult[xg][yg] = 1;
                }
                else
                {
                    isTrue = false;
                    break;
                }
            }
            break;
        case 'D':
            while (amount > 0)
            {
                xg++;
                if (xg > n)
                    xg -= n;
                if (boardresult[xg][yg] != 1)
                {
                    amount--;
                    boardresult[xg][yg] = 1;
                }
                else
                {
                    isTrue = false;
                    break;
                }
            }
            break;
        case 'L':
            while (amount > 0)
            {
                yg--;
                if (yg < 0)
                    yg += n;
                if (boardresult[xg][yg] != 1)
                {
                    amount--;
                    boardresult[xg][yg] = 1;
                }
                else
                {
                    isTrue = false;
                    break;
                }
            }
            break;
        case 'R':
            while (amount > 0)
            {
                yg++;
                if (yg > 0)
                    yg -= n;
                if (boardresult[xg][yg] != 1)
                {
                    amount--;
                    boardresult[xg][yg] = 1;
                }
                else
                {
                    isTrue = false;
                    break;
                }
            }
            break;
        }
    }
    int goormcnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (boardresult[i][j] == 1)
                goormcnt++;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            boardresult[i][j] = 0;
    isTrue = true;

    while (isTrue)
    {
        // player
        boardresult[xp][yp] = 1;
        char way = board1[xp][yp][1];
        int amount = board1[xp][yp][0] - '0';
        switch (way)
        {
        case 'U':
            while (amount > 0)
            {
                xp--;
                if (xp < 0)
                    xp += n;
                if (boardresult[xp][yp] != 1)
                {
                    amount--;
                    boardresult[xp][yp] = 1;
                }
                else
                {
                    isTrue = false;
                    break;
                }
            }
            break;
        case 'D':
            while (amount > 0)
            {
                xp++;
                if (xp > n)
                    xp -= n;
                if (boardresult[xp][yp] != 1)
                {
                    amount--;
                    boardresult[xp][yp] = 1;
                }
                else
                {
                    isTrue = false;
                    break;
                }
            }
            break;
        case 'L':
            while (amount > 0)
            {
                yp--;
                if (yp < 0)
                    yp += n;
                if (boardresult[xp][yp] != 1)
                {
                    amount--;
                    boardresult[xp][yp] = 1;
                }
                else
                {
                    isTrue = false;
                    break;
                }
            }
            break;
        case 'R':
            while (amount > 0)
            {
                yp++;
                if (yp > 0)
                    yp -= n;
                if (boardresult[xp][yp] != 1)
                {
                    amount--;
                    boardresult[xp][yp] = 1;
                }
                else
                {
                    isTrue = false;
                    break;
                }
            }
            break;
        }
    }
    int playercnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (boardresult[i][j] == 1)
                playercnt++;
    if (goormcnt > playercnt)
        printf("goorm %d", goormcnt);
    else
        printf("player %d", playercnt);
    return 0;
}