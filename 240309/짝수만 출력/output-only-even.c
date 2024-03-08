#include <stdio.h>

int main() {
    int a;
    int b;
    int i = a;

    scanf("%d %d", &a, &b);

    while (a <= b)
    {
        printf("%d ", a);
        a += 2;
    }
    return 0;
}