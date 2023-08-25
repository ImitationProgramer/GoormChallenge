#include <stdio.h>
int main()
{
    int t, a, b, sum = 0;
    char op;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %c %d", &a, &op, &b);
        switch (op)
        {
        case '+':
            sum += a + b;
            break;
        case '-':
            sum += a - b;
            break;
        case '*':
            sum += a * b;
            break;
        case '/':
            sum += a / b;
            break;
        }
    }
    printf("%d", sum);
    return 0;
}
