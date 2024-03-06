#include <stdio.h>

int main() {
    int a;
    int b;

    scanf("%d %d", &a, &b);
    printf("%d\n", b * 10000 / (a * a));

    if (b * 10000 / (a * a) >= 25)
    {
        printf("Obesity");
    }
    return 0;
}