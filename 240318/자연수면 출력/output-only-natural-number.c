#include <stdio.h>

int main() {
    int a;
    int b;

    scanf("%d %d", &a, &b);

    if (a <= 0)
    {
        printf("%d", 0);
    }
    else if (a >= 1)
    {
        for (int i = 1; i <= b; i++)
        {
            printf("%d", a);
        }
    }
    return 0;
}