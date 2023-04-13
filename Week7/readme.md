
# 5주차 C언어 실습
  - scansum.c
    - 입력받은 두 수의 합 출력 (반복하여 입력을 받으며 입력 범위 조건과 종료 조건 존재)
```c
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
```
  - printstar.c
    - 함수를 활용하여 별을 출력한다.
```c
#include <stdio.h>

void print_stars() {
    for(int i = 0; i < 30; i++) {
        printf("*");
    }
    printf("\n");
}
int main(void) {
    print_stars();
    printf("Hello World!\n");
    print_stars();
}
```

  - max.c
    - 조건연산자와 함수를 활용하여 두 수 중 큰 값을 출력한다.
```c
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
```
