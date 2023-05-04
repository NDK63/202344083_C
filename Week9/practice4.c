#include <stdio.h>

//int형 변수 x를 double형으로 형변환하는 문장을 써보자.
int main(void) {
    int x = 10000;
    double dx = 0;
    dx = (double)x + 1.2;
    printf("%f", dx);

    return 0;
}