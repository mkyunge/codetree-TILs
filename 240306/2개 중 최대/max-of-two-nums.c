#include <stdio.h>

int main() {
    int a;
    int b;

    scanf("%d %d", &a, &b);

    b = a > b ? a : b;
    printf("%d", b);
    return 0;
}