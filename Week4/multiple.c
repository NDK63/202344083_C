#include <stdio.h>

int main(void) {
    int first, second;

    printf("첫번째 숫자를 입력해주세요 : ");
    scanf("%d", &first);
    printf("두번째 숫자를 입력해주세요 : ");
    scanf("%d", &second);

    int line1 = first * (second % 10);
    int line2 = first * ((second % 100) / 10);
    int line3 = first * (second / 100);
    int answer = first * second;
    printf("   %d\n", first);
    printf("x  %d\n", second);
    printf("-------\n");
    printf("  %d\n", line1);
    printf(" %d\n", line2);
    printf("%d\n", line3);
    printf("-------\n");
    printf("%d\n", answer);
}