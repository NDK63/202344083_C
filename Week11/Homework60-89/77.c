#include <stdio.h>
#include <time.h> //time() 함수를 사용하기 위한 헤더 파일
#include <conio.h> //_getch() 함수를 사용하기 위한 헤더 파일

int main(void) {
    time_t before = time(NULL); //시작했을 때의 시간을 before에 저장
    printf("10초가 되면 엔터키를 누르세요.\n");

    _getch(); //키 입력을 받을 때까지 대기.
    time_t after = time(NULL); //키 입력을 받은 시간을 after에 저장
    printf("경과된 시간은 %ld 초입니다.\n", after - before); //after - before 값 출력
    return 0;
}