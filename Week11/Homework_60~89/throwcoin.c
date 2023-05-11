#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
    int front = 0;
    int back = 0;

    srand((unsigned)time(NULL));

    for(int i = 0; i < 100; i++) {
        if(rand() % 2 == 0) {
            front++;
        } else {
            back++;
        }
    }
    
    printf("앞면 : %d회 / 뒷면 : %d회", front, back);

    return 0;
}