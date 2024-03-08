#include <stdio.h>

int main() {
    int a;
    int b;
    int i;

    scanf("%d %d", &a, &b);
    
    for (i = b; i >= a; i--)
    {
        printf("%d ", i);
    }
    return 0;
}