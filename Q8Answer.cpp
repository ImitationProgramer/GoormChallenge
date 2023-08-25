#include <iostream>
#include <initializer_list>
using namespace std;

int main()
{
    int N, ans = 0;
    cin >> N;
    for (int heal : {14, 7, 1})
    {
        ans += N / heal;
        N %= heal;
    }
    cout << ans;
    return 0;
}