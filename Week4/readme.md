# 4주차 C언어 실습
  - char.c
    - 아스키코드 활용
```C
#include <stdio.h>

int main(void)
{
    char code1 = 'A';
    char code2 = 65;
    printf("code1 = %c\n", code1);
    printf("code2 = %c\n", code2 + 1); //B가 출력됨

    //정수로 출력도 가능
    printf("code1 = %d\n", code1); 
    printf("code2 = %d\n", code2 + 1);
    
    printf("%d",!0);
    return 0;
}
```




  - double.c
    - 실수 사칙연산
```C
#include <stdio.h>

int main() {
    double x, y, result;

    printf("두개의 실수 입력 : ");
    scanf("%lf %lf", &x, &y);

    result = x + y;
    printf("%f + %f = %f\n", x, y, result);
    result = x - y;
    printf("%f - %f = %f\n", x, y, result);
    result = x * y;
    printf("%f * %f = %f\n", x, y, result);
    result = x / y;
    printf("%f / %f = %f\n", x, y, result);
}
```
