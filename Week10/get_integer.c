#include <stdio.h>

int get_integer();
int add(int x, int y);
int minus(int x, int y);
int multi(int x, int y);
int div(int x, int y);

int main(void) {
    int x = get_integer();
    int y = get_integer();
    
    printf("두수의 합은 %d입니다.\n", add(x, y));
    printf("두수의 차는 %d입니다.\n", minus(x, y));
    printf("두수의 곱은 %d입니다.\n", multi(x, y));
    printf("두수를 나눈 몫은 %d입니다.", div(x, y));

    return 0;
}

int get_integer() {
    int num;

    printf("정수를 입력하시오 : ");
    scanf("%d", &num);

    return num;
}
int add(int x, int y) {
    return x + y;
}
int minus(int x, int y) {
    return x - y;
}
int multi(int x, int y) {
    return x * y;
}
int div(int x, int y) {
    return x / y;
}
