#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6

int main() {
    int lotto[SIZE];

    srand((unsigned)time(NULL));

    for(int i = 0; i < SIZE; i++) {
        lotto[i] = rand() % 45 + 1; //1~45 사이의 난수
        printf("lotto[%d] = %d\n", i, lotto[i]);
    }
}