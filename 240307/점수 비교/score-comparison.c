#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > c && b > d)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}