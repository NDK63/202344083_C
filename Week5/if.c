#include <stdio.h>

int main(void) {
    int number;

    printf("정수를 입력하세요.");
    scanf("%d", &number);

    if(number > 0) {
        printf("양수입니다.\n");
    }

    printf("입력한 값은 %d 입니다.", number);
}