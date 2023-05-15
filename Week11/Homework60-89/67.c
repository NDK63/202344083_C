#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//자동차를 3개로 늘린다면
void disp_car(int car_number, int distance) { //차 번호, 진행 거리를 매개변수로 받아옴.
    printf("%d번 차 : ", car_number); //차 번호 출력
    for(int i = 0; i < distance; i++) {
        printf("*"); //진행 거리 *로 표시
    }
    printf(" (%d) \n", distance); //진행 거리 숫자로 표시
}

int main(void) {
    srand((unsigned)time(NULL)); //현재 시각을 시드로 사용
    
    int car_distance[] = {0, 0, 0}; //진행 거리 초기화 // car_distance[0] = 1번 차, car_distance[1] = 2번 차, car_distance[2] = 3번 차
    
    for(int i = 0; i < 5; i++) { //5회 반복
        car_distance[0] += rand() % 10; //1번 차 진행거리 랜덤값(0~10)만큼 증가
        car_distance[1] += rand() % 10; //2번 차 진행거리 랜덤값(0~10)만큼 증가
        car_distance[2] += rand() % 10; //3번 차 진행거리 랜덤값(0~10)만큼 증가
        disp_car(1, car_distance[0]); //함수 호출
        disp_car(2, car_distance[1]); //함수 호출
        disp_car(3, car_distance[2]); //함수 호출
        printf("------------------\n"); //회차 구분 줄바꿈
    }

    int victory[] = {1, car_distance[0]}; //우승 차 번호 저장용 배열 (처음엔 1번 차로 초기화) // victory[0] = 차 번호, victory[1] = 진행 거리

    for(int i = 1; i < 3; i++) {
        if(car_distance[i] > victory[1]) { //현재 저장된 것보다 진행 거리가 더 크다면 (공동 우승 or 무승부 시 더 작은 번호의 자동차가 저장됨)
            victory[0] = i + 1; //victory 배열에 저장된 차 번호 변경
            victory[1] = car_distance[i]; //변경된 차 번호에 맞게 진행거리 변경
        }
    }

    printf("%d번 차 우승!", victory[0]); //우승 차 출력
}