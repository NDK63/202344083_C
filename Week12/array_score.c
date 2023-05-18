#include <stdio.h>
#define SIZE 5

int main() {
    int scores[SIZE];
    int sum = 0;

    for(int i = 0; i < SIZE; i++) {
        printf("학생들의 성적을 입력하시오: ");
        scanf("%d", &scores[i]);
        sum += scores[i];
    }
    printf("성적 평균 = %d", sum / SIZE);
}