#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, count = 0, sum = 0, flag = 0;
    scanf("%d", &N);
    int *o = (int *)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
        scanf("%d", &o[i]);
    int max = o[0];
    for (int i = 0; i < N; i++)
    {
        if (max < o[i])
        {
            max = o[i];
            flag = i;
        }
    }
    for (int i = flag; i > 0; i--)
        if (o[i] < o[i - 1])
            count++;
    for (int i = flag; i < N - 1; i++)
        if (o[i] < o[i + 1])
            count++;
    if (count != 0)
        printf("%d", sum);
    else
    {
        for (int i = 0; i < N; i++)
            sum += o[i];
        printf("%d", sum);
    }
    return 0;
}