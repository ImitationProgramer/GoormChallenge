#include <iostream>
using namespace std;

int main()
{
    int T, ans = 0;
    cin >> T;

    while (T--)
    {
        int num1, num2;
        char op;
        cin >> num1 >> op >> num2;
        if (op == '+')
            ans += num1 + num2;
        if (op == '-')
            ans += num1 - num2;
        if (op == '*')
            ans += num1 * num2;
        if (op == '/')
            ans += num1 / num2;
    }

    cout << ans << '\n';
    return 0;
}