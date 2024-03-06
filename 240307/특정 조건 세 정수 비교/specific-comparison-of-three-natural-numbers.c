#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c && b >= c)
    {
        printf("1 ");
    }
    else
    {
        printf("0 ");
    }
    if (a == b == c)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}