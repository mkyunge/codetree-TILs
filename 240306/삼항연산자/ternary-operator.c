#include <stdio.h>

int main() {
    int score;
    char n[100];

    scanf("%d", &score);

    printf("%s", score == 100 ? "pass" : "failure");
    return 0;
}