#include <stdio.h>

int main()
{
    long long c;
    long long a[1000000];
    scanf("%lld", &c);


    for (int i = 0; i < c; i++)
    {
        scanf("%lld", &a[i]);
    }
    long long max = a[0];
    long long min = a[0];
    for (int i = 1; i < c; i++)
    {
        if (max < a[i])
            max = a[i];
        else if (min > a[i])
            min = a[i];
    }
    printf("%lld %lld", min, max);
    return 0;

}