#include <stdio.h>
int main()
{
    int t, n, m, c, sum = 0;
    scanf("%d\n", &n);
    scanf("%d %d\n", &t, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &c);
        sum += c;
    }
    t += sum / 60;
    m += sum % 60;
    if (m >= 60)
    {
        m %= 60;
        t++;
    }
    if (t >= 24)
        t %= 24;
    printf("%d %d", t, m);
    return 0;
}
