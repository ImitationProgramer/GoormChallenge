#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);
    scanf("%d %d", &a, &b);
    int result = 0;
    result += n / b;
    n %= b;
    if (n % a != 0)
    {
        while (n % a != 0 && result > 0)
        {
            n += b;
            result--;
        }
        result += n / a;
        n %= a;
    }
    else
    {
        result += n / a;
        n %= a;
    }
    if (n != 0)
        result = -1;
    printf("%d", result);
    return 0;
}