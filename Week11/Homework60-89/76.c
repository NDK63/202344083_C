#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //_getch() 함수를 사용하기 위한 헤더 파일

int main(void) {
    system("dir"); //DOS 명령어인 dir 실행
    
    printf("아무 키나 치세요\n");
    _getch(); //키 입력을 받을 때까지 대기.
    system("cls"); //DOS 명령어인 cls 실행
    return 0;
}