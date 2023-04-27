#include <stdio.h>

//변수 n의 값이 100보다 크거나 같으면 “large", 100보다 작으면 ”small"을 출력하는 if-else 문을 작성하라.
int main(void) {
    int n = 0;
    
    printf("정수를 입력하세요. ");
    scanf("%d", &n);

    if(n >= 100) {
        printf("large");
    } else {
        printf("small");
    }
    return 0;
}