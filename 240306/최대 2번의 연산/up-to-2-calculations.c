#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d", (a / 2 + 1) / 2);
    }
    if (a % 2 == 1)
    {
        printf("%d", (a + 1) / 2);
    }
    return 0;
}