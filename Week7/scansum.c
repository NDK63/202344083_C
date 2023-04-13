#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 0;
    int sum = 0;

    while(1) {
        printf("숫자 두 개를 입력해주세요.");
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0) {
            break;
        }
        if(a > 0 && b < 10) {
            sum = a + b;
            printf("%d\n", sum);
        } else {
            printf("잘못된 숫자입니다 다시 입력하세요\n");
        }
    }
    return 0;
}