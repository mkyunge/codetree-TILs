#include <stdio.h>

int main() {
    int a;
    int b;
    int i;

    scanf("%d %d", &a, &b);
    
    printf("%d.", a / b);
    a = a % b;
    for (i = 1; i <= 20; i++)
    {
        a *= 10;
        printf("%d", a / b);
        a %= b;
    }    
    
    return 0;
}