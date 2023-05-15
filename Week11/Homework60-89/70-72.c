#include <stdio.h>
#include <math.h>

int main(void) {
    double value = 1.6;
    double result;

    result = floor(value); //floor()는 소수점을 없애고 내린 값을 반환하는 함수다.
    printf("%lf\n", result); //1이 출력된다.

    result = ceil(value); //ceil()은 소수점을 없애고 올린 값을 반환하는 함수다.
    printf("%lf\n", result); //2가 출력된다.

    //fabs()는 절댓값을 반환하는 함수다.
    printf("%f\n", fabs(12.0)); //12가 출력된다.
    printf("%f\n", fabs(-12.0)); //12가 출력된다.

    //pow(num, n)는 num을 n번 제곱한 값을 반환하는 함수다.
    printf("%.0f\n", pow(10, 3)); // 1000이 출력된다. / %d로 출력하려하면 0이 출력된다. 

    //sqrt()는 제곱근을 반환하는 함수다.
    printf("%.0f", sqrt(64)); //8이 출력된다.
    
}