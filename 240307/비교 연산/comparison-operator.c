#include <stdio.h>

int main() {
    int a;
    int b;

    scanf("%d %d", &a, &b);

    if (a >= b)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    if (a > b)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    if (b >= a)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    if (b > a)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    if (a == b)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    if (a != b)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}