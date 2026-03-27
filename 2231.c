#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int jaritsu = 0;
    int temp = n;

    while (temp > 0) {
        temp /= 10;
        jaritsu++;
    }

    int ans = 0;
    int start = n - 9 * jaritsu;
    for (int i = start; i <= n; i++)
    {
        int sum = i;
        int x = i;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        if (sum == n)
        {
            ans = i;
            break;
        }
    }
    printf("%d", ans);
    return 0;
}