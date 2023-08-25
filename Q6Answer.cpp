#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int N, ans = 0;
    string S;
    cin >> N >> S;

    vector<string> P;
    for (int i = 0; i < N; ++i)
    {
        string cur;
        for (int j = i; j < N; ++j)
        {
            cur.push_back(S[j]);
            if (cur.size() > N - 2)
                break;
            P.push_back(cur);
        }
    }
    sort(P.begin(), P.end());
    P.erase(unique(P.begin(), P.end()), P.end());

    map<string, int> score;
    for (int i = 0; i < P.size(); ++i)
        score[P[i]] = i + 1;

    for (int L = 1; L < N; ++L)
    {
        int i = score[S.substr(0, L)];
        for (int R = L + 1; R < N; ++R)
        {
            int j = score[S.substr(L, R - L)];
            int k = score[S.substr(R, N - R)];
            ans = max(ans, i + j + k);
        }
    }

    cout << ans;
    return 0;
}