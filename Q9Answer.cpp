#include <iostream>
using namespace std;

const int MAX = 204;
char type[MAX][MAX];
int score[MAX][MAX];
int dy[5] = {1, 0, 0, 0, -1};
int dx[5] = {0, 1, 0, -1, 0};

int main()
{
    int N, Q;
    cin >> N >> Q;
    for (int i = 1; i <= N; ++i)
        for (int j = 1; j <= N; ++j)
            cin >> type[i][j];

    while (Q--)
    {
        int y, x;
        cin >> y >> x;
        for (int k = 0; k < 5; ++k)
        {
            int ny = y + dy[k], nx = x + dx[k];
            if (ny < 1 || nx < 1 || ny > N || nx > N)
                continue;
            if (type[ny][nx] == '#')
                continue;
            else if (type[ny][nx] == '0')
                score[ny][nx]++;
            else
                score[ny][nx] += 2;
        }
    }

    int ans = 0;
    for (int i = 1; i <= N; ++i)
        for (int j = 1; j <= N; ++j)
            ans = max(ans, score[i][j]);
    cout << ans;
    return 0;
}