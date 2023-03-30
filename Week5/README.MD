# 5주차 C언어 실습
  - typeconversion.c
    - char, int, float 형변환
```c
#include <stdio.h>

int main(void) {
    char c;
    int i;
    float f;

    c = 10000;
    i = 1.23456 + 10;
    f = 10 + 20;

    printf("c = %d, i = %d, f = %f\n", c, i, f); // c = 16, i = 11, f = 30.000000
    return 0;
}
```
  - if.c
    - 조건문 if 사용
```c
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
```
  - iseven.c
    - 입력받은 정수를 if else문을 이용하여 짝수, 홀수 감별 후 출력
```c
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
```
