#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int *order = (int *)malloc(sizeof(int) * n);
    int *result = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        int arr[20] = {0};
        int num = 0, c = 0, mok, nmg, cnt = 0;
        scanf("%d", &num);
        order[i] = num;
        do
        {
            mok = num / 2;
            nmg = num - mok * 2;
            arr[c++] = nmg;
            num = mok;
        } while (mok != 0);
        for (int j = 0; j < c; j++)
            if (arr[j] == 1)
                cnt++;
        result[i] = cnt;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (result[i] <= result[j])
            {
                int temp = order[i];
                order[i] = order[j];
                order[j] = temp;
                int temp1 = result[i];
                result[i] = result[j];
                result[j] = temp1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (result[i] == result[j])
            {
                if (order[i] <= order[j])
                {
                    int temp = order[i];
                    order[i] = order[j];
                    order[j] = temp;
                    int temp1 = result[i];
                    result[i] = result[j];
                    result[j] = temp1;
                }
            }
        }
    }
    printf("%d\n", order[k - 1]);
    // for (int i = 0; i < n; i++)
    //     printf("%d", result[i]);
    // printf("\n");
    // for (int i = 0; i < n; i++)
    //     printf("%d", order[i]);
    return 0;
}