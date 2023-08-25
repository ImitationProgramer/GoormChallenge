#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int result = 0;
    int painkiller = n / 14;
    n %= 14;
    int medicine = n / 7;
    n %= 7;
    int bandage = n;
    result = bandage + medicine + painkiller;
    printf("%d", result);
    return 0;
}
