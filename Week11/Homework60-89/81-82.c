#include <stdio.h>
#include <math.h>
#define PI 3.141592 //파이 값 상수로 선언

double rad(double degree) { //라디안 계산하는 함수
    return PI * degree / 180.0; //매개변수로 받은 각도 값과 파이를 곱하여 라디안 값을 리턴한다.
}
void drawbar(int height) {
    for (int i = 0; i < height; i++) { //매개변수로 받은 높이만큼 반복한다.
        printf("*"); //별 출력
    }
    printf("\n");
}
int main(void) {
    int degree, x, y; //각도, x, y 변수 선언
        for (degree = 0; degree < 90; degree += 10) { //각도를 0도부터 80도(90도 미만)까지 10도 단위로 증가시키면서 반복한다.
            /* 싸인값은 -1.0에서 1.0이므로 정수로 반올림하여서 증폭한다.
            degree를 double 형으로 변환하여 rad 함수를 호출한다.*/
            y = (int)(60 * sin(rad((double)degree)) + 0.5);
            drawbar(y); //drawbar 함수를 호출한다.
        }
        for (degree = 90; degree >= 0; degree -= 10) { //각도를 90도부터 0도까지 10도 단위로 감소시키면서 반복한다.
            /* 싸인값은 -1.0에서 1.0이므로 정수로 반올림하여서 증폭한다.
            degree를 double 형으로 변환하여 rad 함수를 호출한다.*/
            y = (int)(60 * sin(rad((double)degree)) + 0.5);
            drawbar(y); //drawbar 함수를 호출한다.
        }
    return 0;
}