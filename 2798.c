#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &n, &m);
    int num[101];
    int sum = 0;
    int best = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);

    }
    for (int idx1 = 0; idx1 < n - 2; idx1++)
        for (int idx2 = idx1 + 1; idx2 < n - 1; idx2++)
            for (int idx3 = idx2 + 1; idx3 < n; idx3++)
            {
                sum = num[idx1] + num[idx2] + num[idx3];
                if (sum <= m && sum > best)
                    best = sum;
            }
    printf("%d", best);
    return 0;
}