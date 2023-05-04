#include <stdio.h>

int div(int n) {
    int count = 0;
    for(count = 3; count < n; count += 2) {
        if(n % count == 0) {
            return 0;
            break;
        }
    }
    return 1;
}
int main() {
    int n = 0;
    printf("정수 입력 : ");
    scanf("%d", &n);
    if(n % 2 == 0) {
        printf("소수가 아님");
    } else {
        if(div(n)) {
            printf("소수입니다.");
        } else {
            printf("소수가 아님");
        }
    }

    return 0;
}