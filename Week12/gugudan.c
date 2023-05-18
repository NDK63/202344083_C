#include <stdio.h>

void gugudan(int s, int e) {
    for(int i = 1; i <= 9; i++) {
        for(int j = s; j <= e; j++) {
            printf("%d * %d = %2d   ", j, i, j * i);
        }
        printf("\n");
    }
}
void gugudan_reverse(int s, int e) {
    for(int i = 1; i <= 9; i++) {
        for(int j = s; j >= e; j--) {
            printf("%d * %d = %2d   ", j, i, j * i);
        }
        printf("\n");
    }
}

int main() {
    while(1) {
        int s, e;
        printf("두 수를 입력하세요. (범위 : 2 ~ 9) : ");
        scanf("%d %d", &s, &e);
        if(s >= 2 && s <= 9 && e >= 2 && e <= 9) {
            if(s <= e) {
                gugudan(s, e);
            } else {
                gugudan_reverse(s, e);
            }
            break;
        } else {
            printf("INPUT ERROR!\n");
        }
    }

    return 0;
}