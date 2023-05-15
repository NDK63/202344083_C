#define _CRT_SECURE_NO_WARNINGS //scanf 오류를 방지하기 위해 경고 무시 정의
#include <math.h>
#include <stdio.h>

int main(void) {
    double height, distance, tree_height, degrees, radians; //키, 거리, 나무 높이, 각도, 라디안 선언

    printf("나무와의 길이(단위는 미터): ");
    scanf("%lf", &distance); //측정자와 나무와의 길이 입력 받기

    printf("측정자의 키(단위는 미터): ");
    scanf("%lf", &height); //측정자의 키 입력 받기

    printf("각도(단위는 도): ");
    scanf("%lf", &degrees); //측정자가 나무를 바라보는 각도 입력 받기

    radians = degrees * (3.141592 / 180.0); //각도를 통한 라디안 계산
    tree_height = tan(radians) * distance + height; //탄젠트 라디안 값과 거리를 곱한 후 측정자의 키를 더해 나무의 높이 계산

    printf("나무의 높이(단위는 미터): %lf \n", tree_height); //나무의 높이 출력
    return 0;
    }