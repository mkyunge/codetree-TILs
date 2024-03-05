#include <stdio.h>

int main() {
    int y;
    int m;
    int d;

    scanf("%d.%d.%d", &y, &m, &d);
    printf("%d-%d-%d", m, d, y);
    return 0;
}