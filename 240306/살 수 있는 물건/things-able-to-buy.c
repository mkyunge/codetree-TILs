#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n >= 1000)
    {
        printf("mask");
    }
    else if (n >= 3000)
    {
        printf("book");
    }
    else
    {
        printf("no");
    }
    return 0;
}