#include <stdio.h>

int main(void) {
    int num = 0;
    
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);

    char stars[5]; //c언어는 동적할당 이렇게 못한다. malloc 써야함

    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++) {
            if(j == num - 1) {
                stars[j] = '★';
            } else {
                stars[j] = ' ';
            }
        }
        printf("%s", stars);
    }


    return 0;
}