#include <stdio.h>

int main() {
    int y;

    scanf("%d", &y);

    if (y % 4 == 1)
    {
        if (y % 400 == 1 && y % 100 == 0)
        {
            printf("false");
        }
        else
        {
            printf("true");
        }
    }
    else
    {
        printf("false");
    }
    return 0;
}