#include <stdio.h>

int main() {
    int a;
    int b;
    int i;

    scanf("%d %d", &a, &b);

    for (i >= a && i <= b; i % 2 == 1; i += 2)
    {
        printf("%d ", i);
    }
    return 0;
}