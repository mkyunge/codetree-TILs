#include <stdio.h>

int main() {
    int a_a;
    int a_s;
    int b_a;
    int b_s;

    scanf("%d %c %d %c", &a_a, &a_s, &b_a, &b_s);

    if (a_a >= 19 && a_s == 'M' || b_a >= 19 && b_s == 'M')
        printf("1");
    else
        printf("0");
    return 0;
}