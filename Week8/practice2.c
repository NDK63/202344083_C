#include <stdio.h>
//사각형의 둘레와 면적
int main(void) {
    double w, h, area, perimeter;
    printf("너비를 입력해주세요.");
    scanf("%lf", &w);
    printf("높이를 입력해주세요.");
    scanf("%lf", &h);

    area = w * h;
    perimeter = (w + h) * 2;

    printf("사각형의 면적은 %lf 입니다.", area);
    printf("사각형의 둘레는 %lf 입니다.", perimeter);

    return 0;
}