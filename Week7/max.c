#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main(void) {
    int a = 0;
    int b = 0;

    printf("정수 두 개를 입력하세요.");
    scanf("%d %d", &a, &b);

    printf("%d", max(a, b));
}