#include <stdio.h>

int main(void)
{
    char code1 = 'A';
    char code2 = 65;
    printf("code1 = %c\n", code1);
    printf("code2 = %c\n", code2 + 1);

    printf("code1 = %d\n", code1);
    printf("code2 = %d\n", code2 + 1);
    
    printf("%d",!0);
    return 0;
}