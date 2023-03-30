#include <stdio.h>

int main(void) {
    int num1, num2;
    printf("정수를 두 개 입력하세요 : ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2) {
        printf(">");
    } else if(num1 < num2) {
        printf("<");
    } else {
        printf("==");
    }
}