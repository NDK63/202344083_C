#include <stdio.h>
#include <math.h>

//함수 선언
int menu();
void factorial();
void do_sin();
void do_log();
void do_sqrt();

int main(void) {
    int play = 1; //무한 반복 및 종료를 위한 변수 선언
    while(play) {
        printf("-------------------------\n");
        switch(menu()) { //menu()의 리턴값에 따라 함수를 호출하기 위해 스위치문 사용
            case 1:
                factorial();
                break;
            case 2:
                do_sin();
                break;
            case 3:
                do_log();
                break;
            case 4:
                do_sqrt();
                break;
            case 7:
                printf("종료합니다.\n");
                play = 0; //play 변수를 0으로 바꿔 다음 반복이 진행되지 않음.
                break;
            default:
                printf("잘못된 선택입니다.\n");
                break;
        }
    }
}

int menu() {
    int n; //메뉴 선택을 입력받기 위한 변수 선언
    printf("1. 팩토리얼\n");
    printf("2. 싸인\n");
    printf("3. 로그(base 10)\n");
    printf("4. 제곱근\n");
    printf("7. 종료\n");
    printf("-------------------------\n");
    printf("선택해주세요 : ");
    scanf("%d", &n); //메뉴 선택 입력 받기
    return n; //n 리턴
}

void factorial() {
    int num, result = 1; //result는 1로 초기화
    printf("2 이상의 정수를 입력하세요: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++) { //result를 1로 설정했으므로 2부터 시작한다.
        result *= i; //팩토리얼 계산 수행
    }

    printf("결과는 %d 입니다.\n", result);
}

void do_sin() {
    double num, result;

    printf("각도를 입력하세요: ");
    scanf("%lf", &num);

    result = sin(num);
    printf("결과는 %lf 입니다.\n", result);
}

void do_log() {
    double num, result;

    printf("0 이상의 실수값을 입력하세요: ");
    scanf("%lf", &num);

    result = log10(num);
    printf("결과는 %lf 입니다.\n", result);
}

void do_sqrt() {
    double num, result;

    printf("0 이상의 정수를 입력하세요: ");
    scanf("%lf", &num);

    result = sqrt(num);
    printf("결과는 %lf 입니다.\n", result);
}