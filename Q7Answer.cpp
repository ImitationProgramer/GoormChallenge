#include <iostream>
using namespace std;

const int MAX = 1004;
int board[MAX][MAX];
int dy[8] = {1, 1, 1, 0, -1, -1, -1, 0};
int dx[8] = {1, 0, -1, -1, -1, 0, 1, 1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, K, ans = 0;
    cin >> N >> K;
    for (int i = 1; i <= N; ++i)
        for (int j = 1; j <= N; ++j)
            cin >> board[i][j];

    for (int y = 1; y <= N; ++y)
        for (int x = 1; x <= N; ++x)
        {
            if (board[y][x])
                continue;
            int cnt = 0;
            for (int k = 0; k < 8; ++k)
            {
                int ny = y + dy[k], nx = x + dx[k];
                if (ny < 1 || ny < 1 || nx > N || nx > N || !board[ny][nx])
                    continue;
                cnt++;
            }
            if (cnt == K)
                ans++;
        }

    cout << ans;
    return 0;
}