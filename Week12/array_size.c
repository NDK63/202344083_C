#include <stdio.h>

int main() {
    int scores[] = {1, 2, 3, 4, 5, 6};
    int size;

    size = sizeof(scores) / sizeof(scores[0]);

    for(int i = 0; i < size; i++) {
        printf("%d", scores[i]);
    }
    
    return 0;
}