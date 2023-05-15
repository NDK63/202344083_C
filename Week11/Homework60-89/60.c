#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int front = 0; //앞면이 나오는 횟수
    int back = 0; //뒷면이 나오는 횟수

    srand((unsigned)time(NULL)); //현재 시각을 시드로 사용

    for(int i = 0; i < 100; i++) {
        if(rand() % 2) { //랜덤 값이 0, 1로 나오도록 설정
            front++; //랜덤 값이 1일 경우 앞면 횟수 1 추가 
        } else {
            back++; //랜덤 값이 0일 경우 뒷면 횟수 1 추가
        }
    }

    printf("앞면 : %d회, 뒷면 : %d회", front, back); //출력
}