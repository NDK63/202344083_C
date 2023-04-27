#include <stdio.h>

// 사용자로부터 두 개의 정수를 입력받아서 정수 간의 나눗셈을 실행한다. 나눗셈을 하기 전에 분모가 0인지를 if 문을 이용하여 검사한다.
int main(void) {
    int num1, num2;

    printf("정수 두 개를 입력하세요. (분자 분모)");
    scanf("%d %d", &num1, &num2);

    if(num2 == 0) {
        printf("분모가 0이면 안됩니다.");
    } else {
        float result = (float)num1 / num2;
        printf("%d를 %d로 나눈 값은 %f 입니다.", num1, num2, result);
    }

    return 0;
}