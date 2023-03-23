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