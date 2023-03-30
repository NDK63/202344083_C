#include <stdio.h>

int main(void) {
    int number = 0;

    printf("정수를 입력하세요.");
    scanf("%d", &number);

    if(number % 2 == 1) {
        printf("입력한 정수는 홀수입니다.");
    } else {
        printf("입력한 정수는 짝수입니다.");
    }
}