#include <stdio.h>
int main()
{
    int c, d, e, f, g, a, b, upC;
    scanf("%d %d %d %d %d %d %d %d", &c, &d, &e, &f, &g, &a, &b, &upC);
    if (c + 1 == d && d + 1 == e && e + 1 == f && f + 1 == g && g + 1 == a && a + 1 == b && b + 1 == upC)
        printf("ascending");
    else if (c - 1 == d && d - 1 == e && e - 1 == f && f - 1 == g && g - 1 == a && a - 1 == b && b - 1 == upC)
        printf("descending");
    else
        printf("mixed");
    return 0;
}