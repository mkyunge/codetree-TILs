#include <stdio.h>

int main() {
    int one = 0;
    int two = 0;
    int a;

    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &a);
        if (a % 3 == 0)
        {
            one++;
        }
        if (a % 5 == 0)
        {
            two++;
        }
    }
    printf("%d %d", one, two);
    return 0;
}