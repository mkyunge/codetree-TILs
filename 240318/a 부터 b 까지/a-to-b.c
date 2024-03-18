#include <stdio.h>

int main() {
    int a;
    int b;

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
            i *= 2;
        }
        else
        {
            printf("%d ", i);
            i += 3;
        }
    }
    return 0;
}