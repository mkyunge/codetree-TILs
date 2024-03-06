#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int d;
    int e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    printf("%d\n", a > b);
    printf("%d\n", a > c);
    printf("%d\n", a > d);
    printf("%d\n", a > e);
    return 0;
}