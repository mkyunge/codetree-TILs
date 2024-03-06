#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    
    int a = 80 - n;
    
    if (n >= 80)
    {
        printf("pass");
    }
    
    else
    {
        printf("%d more score", a);
    }
    return 0;
}