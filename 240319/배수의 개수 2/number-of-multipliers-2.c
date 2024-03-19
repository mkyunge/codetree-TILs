#include <stdio.h>

int main() {
    int cnt = 0;
    int a;

    scanf("%d ", &a);

    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 1)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}