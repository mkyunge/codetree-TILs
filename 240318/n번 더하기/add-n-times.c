#include <stdio.h>

int main() {
    int a;
    int n;
    int i;

    scanf("%d %d", &a, &n);

    a = a + n;
    printf("%d\n", a);

    for (int i = 1; i < n; i++)
    {
        a += n;
        printf("%d\n", a);
    }
    return 0;
}