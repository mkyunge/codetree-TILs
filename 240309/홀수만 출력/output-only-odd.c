#include <stdio.h>

int main() {
    int a;
    int b;
    int i;

    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}