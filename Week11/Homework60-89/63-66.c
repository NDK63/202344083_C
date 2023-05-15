#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void disp_car(int car_number, int distance) { //차 번호, 진행 거리를 매개변수로 받아옴.
    printf("%d번 차 : ", car_number); //차 번호 출력
    for(int i = 0; i < distance; i++) {
        printf("*"); //진행 거리 *로 표시
    }
    printf(" (%d) \n", distance); //진행 거리 숫자로 표시
}

int main(void) {
    srand((unsigned)time(NULL)); //현재 시각을 시드로 사용
    
    int car_distance[] = {0, 0}; //진행 거리 초기화 // car_distance[0] = 1번 차, car_distance[1] = 2번 차
    
    for(int i = 0; i < 5; i++) { //5회 반복
        car_distance[0] += rand() % 10; //1번 차 진행거리 랜덤값(0~10)만큼 증가
        car_distance[1] += rand() % 10; //2번 차 진행거리 랜덤값(0~10)만큼 증가
        disp_car(1, car_distance[0]); //함수 호출
        disp_car(2, car_distance[1]); //함수 호출
        printf("------------------\n"); //회차 구분 줄바꿈
    }

    if(car_distance[0] > car_distance[1]) { //1번 차 진행 거리가 2번 차보다 크면
        printf("%d번 차 승리!", 1); //1번 차 승리
    } else if(car_distance[1] > car_distance[0]) { //2번 차 진행 거리가 1번 차보다 크면
        printf("%d번 차 승리!", 2); //2번 차 승리
    } else { //1번 차 진행 거리와 2번 차 진행 거리가 같다면
        printf("무승부!");
    }
    
}