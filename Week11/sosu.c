#include <stdio.h>

int sosu(int n) {
    int check = 1;
    if(n <= 3) {
        if(n == 1) check = 0;
    } else {
        if(n % 2 == 0) {
            check = 0;
        } else {
            for(int i = 3; i < n; i += 2) {
                if(n % i == 0) {
                    check = 0;
                    break;
                }
            }
        }
    }
    return check;
}
int main() {
    int n = 0;
    printf("정수 입력 : ");
    scanf("%d", &n);
    if(sosu(n)) {
        printf("소수입니다.");
    } else {
        printf("소수가 아닙니다.");
    }

    return 0;
}