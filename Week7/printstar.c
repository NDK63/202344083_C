#include <stdio.h>

void print_stars() {
    for(int i = 0; i < 30; i++) {
        printf("*");
    }
    printf("\n");
}
int main(void) {
    print_stars();
    printf("Hello World!\n");
    print_stars();
}