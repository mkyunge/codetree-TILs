#include <stdio.h>

int main() {
    int a;
    int b;

    scanf("%d %d", &a, &b);

    if (a > b)
    {
        for (int i = a; i >= b; i--)
        {
            printf("%d ", i);
        }
    }
    else if (b > a)
    {
        for (int i = b; i >= a; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        printf("%d ", a);
    }
    return 0;
}