#include <iostream>
#include <numeric>
using namespace std;

const int MAX = 1004;
int K[MAX];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i = 1; i <= N; ++i)
        cin >> K[i];

    int maxIndex = max_element(K + 1, K + N + 1) - K, ok = 1;
    for (int i = maxIndex - 1; i > 0; --i)
    {
        if (K[i] > K[i + 1])
            ok = 0;
    }
    for (int i = maxIndex + 1; i <= N; ++i)
    {
        if (K[i - 1] < K[i])
            ok = 0;
    }

    cout << (ok ? accumulate(K + 1, K + N + 1, 0) : 0);
    return 0;
}