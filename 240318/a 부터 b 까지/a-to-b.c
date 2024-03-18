#include <stdio.h>

int main() {
    int a;
    int b;

    scanf("%d %d", &a, &b);

    printf("%d ", a);

    for (int i = a; i < b; i)
    {
        if (i % 2 == 0)
        {
            i += 3;
            printf("%d ", i);
        }
        else
        {
            i *= 2;
            printf("%d ", i);
        }
        
    }
    return 0;
}