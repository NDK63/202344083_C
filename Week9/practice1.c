#include <stdio.h>

//원의 면적 계산하기
int main(void) {
    float radius = 0;
    float area = 0;
    printf("반지름을 입력해주세요.");
    scanf("%f", &radius);

    area = radius * radius * 3.14;

    printf("원의 면적은 %f 입니다.", area);
    return 0;
}