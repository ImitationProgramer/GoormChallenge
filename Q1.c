#include <stdio.h>
int main()
{
    int w, r;
    scanf("%d %d", &w, &r);
    double result = w * (1 + (double)r / 30);
    printf("%d", (int)result);
    return 0;
}