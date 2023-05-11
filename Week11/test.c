#include <stdio.h>

/* ATM 만들기
1. 잔액은 전역변수로 선언 ex) int balance = 1000000;
2. 입금, 출금, 잔고확인 기능이 있어야함.
3. 입금, 출금 시 잔액의 변동이 있어야함.
4. while문을 사용하여 무한반복시킨 후 사용자에게 숫자를 입력받아 기능을 실행함. [1 = 입금, 2 = 출금, 3 = 잔고확인, 4 = 종료]
*/
int balance = 1000000;
void deposit(int money);
int withdraw(int money);

int main(void) {
    while(1) {
        int choice, money, stop;
        printf("[1 = 입금, 2 = 출금, 3 = 잔고확인, 4 = 종료]\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("입금할 금액을 입력하세요.\n");
                scanf("%d", &money);
                deposit(money);
                break;
            case 2:
                printf("출금할 금액을 입력하세요.\n");
                scanf("%d", &money);
                if(withdraw(money)) {
                    printf("잔액이 부족합니다.\n");
                }
                break;
            case 3:
                printf("잔액은 %d 입니다.\n", balance);
                break;
            default:
                stop = 1;
                break;
        }

        if(stop) break;
    }
}

void deposit(int money) {
    balance += money;
}
int withdraw(int money) {
    if(balance < money) {
        return 1;
    } else {
        balance -= money;
        return 0;
    }
}