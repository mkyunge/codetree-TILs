#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c && a == b && a == c)
    {
        printf("%d", a);
    }
    if (b <= a && b < c && b == c)
    {
        printf("%d", b);
    }
    if (c <= a && c < b)
    {
        printf("%d", c);
    }
    return 0;
}