#include <stdio.h>

//태양빛 도달 시간
int main(void) {
    double lightspeed = 300000;
    double distance = 149600000;
    double second = distance / lightspeed;

    int minute = second / 60;
    second = second - (minute * 60);

    printf("%d분 %lf초", minute, second);

    return 0;
}