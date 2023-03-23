#include <stdio.h>

int main(void) {
    int price, money;

    printf("물건 값을 입력하세요 : ");
    scanf("%d", &price);
    printf("투입한 금액을 입력하세요 : ");
    scanf("%d", &money);
    
    if(money < price) {
        printf("투입한 금액이 물건 값보다 적습니다.");
        return 0;
    }

    printf("거스름돈은 다음과 같습니다.\n");
    int change = money - price;
    int count1000, count500, count100, count50, count10;

    count1000 = change / 1000; change = change % 1000;
    count500 = change / 500; change = change % 500;
    count100 = change / 100; change = change % 100;
    count50 = change / 50; change = change % 50;
    count10 = change / 10; change = change % 10;

    printf("1000원 권 : %d 장\n", count1000);
    printf("500원 동전 : %d 개\n", count500);
    printf("100원 동전 : %d 개\n", count100);
    printf("50원 동전 : %d 개\n", count50);
    printf("10원 동전 : %d 개\n", count10);

    return 0;
}