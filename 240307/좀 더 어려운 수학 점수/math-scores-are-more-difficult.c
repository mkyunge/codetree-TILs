#include <stdio.h>

int main() {
    int a_m;
    int a_e;
    int b_m;
    int b_e;

    scanf("%d %d %d %d", &a_m, &a_e, &b_m, &b_e);

    if (a_m > b_m)
        printf("A");
    else if (b_m > a_m)
        printf("B");
    else if (a_m = b_m && a_e > b_e)
        printf("A");
    else
        printf("B");
    return 0;
}