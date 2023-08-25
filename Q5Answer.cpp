#include <iostream>
#include <algorithm>
#define pii pair<int, int>
using namespace std;

const int MAX = 500005;
pii num[MAX];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, K;
    cin >> N >> K;

    for (int i = 1; i <= N; ++i)
    {
        cin >> num[i].second;
        bitset<21> B(num[i].second);
        num[i].first = B.count();
    }
    sort(num + 1, num + N + 1, greater<pii>());

    cout << num[K].second;
    return 0;
}