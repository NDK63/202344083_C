#include <stdio.h>

int factorial(int n);

int main(void) {
    int n = 0;
    
    printf("정수를 입력하세요 : ");
    scanf("%d", &n);
    printf("%d!은 %d 입니다.",n,factorial(n));
    
    return 0;
}

int factorial(int n) {
    if(n == 1) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}