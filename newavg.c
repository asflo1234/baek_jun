#include <stdio.h>

int main()
{
    int n;
    int a[1001];
    float total = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        float newrec = (float)a[i] / max * 100;
        total += newrec;
    }
    printf("%f", total / n);
    return 0;
}