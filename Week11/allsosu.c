#include <stdio.h>

int sosu(int n) {
    if(n > 3) {
        printf("2\n");
        for(int i = 3; i <= n; i += 2) {
            int check = 1;
            for(int j = 3; j < i; j += 2) {
                if(i % j == 0) {
                    check = 0;
                    break;
                }
            }
            if(check) printf("%d\n", i);
        }
    } else {
        for(int i = 2; i <= n; i++) {
            printf("%d\n", i);
        }
    }
}
int main() {
    int n = 0;
    printf("정수 입력 : ");
    scanf("%d", &n);
    sosu(n);
    return 0;
}