#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        int prime = 1;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }
        if (prime && num > 1)
            count++;
    }
    printf("%d", count);
    return 0;
}