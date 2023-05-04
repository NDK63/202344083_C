#include <stdio.h>

int main(void) {
    int num = 0;

    printf("정수를 입력하세요 : ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        for(int blank = 0; blank < num - i; blank++) {
            printf(" ");
        }
        for(int star = 0; star < i; star++) {
            printf("★");
        }
        printf("\n");
    }
    return 0;
}