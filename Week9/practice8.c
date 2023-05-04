#include <stdio.h>
#include <math.h>

//이차방정식
int main(void) {
    float a, b, c;
    printf("ax^2 + bx + c 형태의 이차방정식 계수를 a b c 순서로 입력해주세요.");
    scanf("%f %f %f", &a, &b, &c);
    
    float result1 = 0;
    float result2 = 0;

    if(a == 0) {
        result1 = (c / b) * -1;
        printf("해는 %f 입니다.", result1);
    } else if((b * b) - (4 * a * c) < 0) {
        printf("실근이 존재하지 않습니다.");
    } else {
        result1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
        result2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    
        printf("해는 %f, %f 입니다.", result1, result2);
    }
    return 0;
}