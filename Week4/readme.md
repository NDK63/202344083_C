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


  - inc.c
    - 증감연산자 선위, 후위 개념
```C
#include <stdio.h>

int main(void) {
    int x = 10, y = 10;

    printf("x = %d\n", x);
    printf("++x의 값 = %d\n", ++x); //x = 11
    printf("x = %d\n\n", x); //x = 11

    printf("y = %d\n", y);
    printf("y++의 값 = %d\n", y++); //y = 10
    printf("y = %d\n", y); //y = 11
}
```


  - change.c
    - %연산자 이용하여 거스름돈 계산
```C
#include <stdio.h>

int main(void) {
    int price, money;

    printf("물건 값을 입력하세요 : ");
    scanf("%d", &price);
    printf("투입한 금액을 입력하세요 : ");
    scanf("%d", &money);
    
    if(money < price) {
        printf("투입한 금액이 물건 값보다 적습니다.");
        return 0;
    }

    printf("거스름돈은 다음과 같습니다.\n");
    int change = money - price;
    int count1000, count500, count100, count50, count10;

    count1000 = change / 1000; change = change % 1000;
    count500 = change / 500; change = change % 500;
    count100 = change / 100; change = change % 100;
    count50 = change / 50; change = change % 50;
    count10 = change / 10; change = change % 10;

    printf("1000원 권 : %d 장\n", count1000);
    printf("500원 동전 : %d 개\n", count500);
    printf("100원 동전 : %d 개\n", count100);
    printf("50원 동전 : %d 개\n", count50);
    printf("10원 동전 : %d 개\n", count10);

    return 0;
}
```


  - multiple.c
    - /, % 이용하여 곱셈 구현
```C
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
```
