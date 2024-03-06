#include <stdio.h>

int main() {
    int a;
    int b;

    scanf("%d %d", &a, &b);

    printf("%d\n", a >= b);
    printf("%d\n", a > b);
    printf("%d\n", b >= a);
    printf("%d\n", b > a);
    return 0;
}