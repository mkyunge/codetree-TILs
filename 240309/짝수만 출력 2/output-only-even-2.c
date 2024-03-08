#include <stdio.h>

int main() {
    int i;
    int a;
    int b;

    scanf("%d %d", &a, &b);
    i = a;

    while (i >= b)
    {
        printf("%d ", i);
        i -= 2;
    }
    return 0;
}