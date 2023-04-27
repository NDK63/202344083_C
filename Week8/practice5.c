#include <stdio.h>

//키보드에서 입력받은 정수가 홀수인지 짝수인지 말해주는 프로그램
int main(void) {
    int num = 0;

    printf("정수를 입력하세요.");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("입력하신 정수는 짝수입니다.\n");
    } else {
        printf("입력하신 정수는 홀수입니다.\n");
    }
    return 0;
}