#include <stdio.h>

int main() {
    char a_c;
    int a_t;
    char b_c;
    int b_t;
    char c_c;
    int c_t;

    scanf("%c %d %c %d %c %d", &a_c, &a_t, &b_c, &b_t, &c_c, &c_t);

    if (a_c == 'Y' && a_t >= 37)
    {
        if (b_c == 'Y' && b_c >= 37 || c_c == 'Y' && c_t >= 37)
        {
            printf("E");
        }
        else
        {
            printf("N");
        }
    }
    else if (b_c == 'Y' && b_t >= 37 && c_c == 'Y' && c_t >= 37)
    {
        printf("E");
    }
    else
    {
        printf("N");
    }
    return 0;
}