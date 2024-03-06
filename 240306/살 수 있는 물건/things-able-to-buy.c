#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n <= 1000 && n > 0)
    {
        printf("mask");
    }
    else if (n <= 3000 && n > 0)
    {
        printf("book");
    }
    else
    {
        printf("no");
    }
    return 0;
}